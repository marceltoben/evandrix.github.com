//From cctools with minor edits
/*
 * Copyright (c) 2009 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
#include <stdio.h>
#include <string.h>
//#include "stuff/target_arch.h"
#include <mach-o/loader.h>
#include <mach-o/nlist.h>
#include <mach-o/reloc.h>
#include <mach-o/ppc/reloc.h>
//#include "stuff/bytesex.h"
//#include "stuff/symbol.h"
//#include "otool.h"
//#include "ofile_print.h"

#define nlist_t int
#define mach_header_t int
int Zflag = FALSE;

#define	RT(x)		(((x) >> 21) & 0x1f)
#define	RA(x)		(((x) >> 16) & 0x1f)
#define	RB(x)		(((x) >> 11) & 0x1f)

#define	VT(x)		(((x) >> 21) & 0x1f)
#define	VA(x)		(((x) >> 16) & 0x1f)
#define	VB(x)		(((x) >> 11) & 0x1f)
#define	VC(x)		(((x) >> 6) & 0x1f)
#define	TAG(x)		(((x) >> 21) & 0x3)
#define VX_Rc(x)	(rc[((x >> 10) & 0x1)])

#define	RS(x)		(((x) >> 21) & 0x1f)
#define	TO(x)		(((x) >> 21) & 0x1f)
#define	L(x)		(((x) >> 21) & 0x1)
#define	NB(x)		(((x) >> 11) & 0x1f)
#define	SH(x)		(((x) >> 11) & 0x1f)
#define	MB(x)		(((x) >> 6) & 0x1f)
#define	ME(x)		(((x) >> 1) & 0x1f)

#define	BF(x)		(((x) >> 23) & 0x7)
#define	BFA(x)		(((x) >> 18) & 0x7)
#define	U(x)		(((x) >> 12) & 0xf)
#define	BT(x)		(((x) >> 21) & 0x1f)

#define	SR(x)		(((x) >> 16) & 0xf)

#define	FRT(x)		(((x) >> 21) & 0x1f)
#define	FRA(x)		(((x) >> 16) & 0x1f)
#define	FRB(x)		(((x) >> 11) & 0x1f)
#define	FRC(x)		(((x) >> 6) & 0x1f)
#define	FLM(x)		(((x) >> 17) & 0xff)

#define OE_Rc(x)	(oe_rc[((x >> 9) & 0x2) | ((x) & 0x1)])
#define Rc(x)		(rc[(x) & 0x1])
#define LK(x)		(lk[(x) & 0x1])
#define AA(x)		(aa[(x >> 1) & 0x1])

#define	BH(x)		(((x) >> 11) & 0x3)
#define	BC(x)		(((x) >> 16) & 0x3)
#define	CR_FIELD(x)	(((x) >> 18) & 0x7)
#define	Y_BIT(x)	(((x) >> 21) & 0x1)
#define	BC_TRUE(x)	(bc_true[BC(x)])
#define	BC_FALSE(x)	(bc_false[BC(x)])

#define	TH(x)		(((x) >> 21) & 0xf)

static const char *oe_rc[] = { "", ".", "o", "o." };
static const char *rc[] = { "", "." };
static const char *lk[] = { "", "l" };
static const char *aa[] = { "", "a" };
static const char *bc_true[]  = { "lt", "gt", "eq", "un" };
static const char *bc_false[] = { "ge", "le", "ne", "nu" };

static void xo_form(
    const char *name,
    unsigned long opcode,
    unsigned long nregs);

static void x_form(
    const char *name,
    unsigned long opcode,
    unsigned long nregs);

static void sx_form(
    const char *name,
    unsigned long opcode,
    unsigned long nregs);

static void fx_form(
    const char *name,
    unsigned long opcode,
    unsigned long nregs);

static void xl_form(
    const char *name,
    unsigned long opcode,
    unsigned long nregs);

static void a_form(
    const char *name,
    unsigned long opcode,
    unsigned long nregs);

static unsigned long bc(
    const char *name,
    unsigned long opcode,
    unsigned long sect_offset,
    struct relocation_info *relocs,
    unsigned long nrelocs);

static void trap(
    const char *name,
    unsigned long opcode);

static void print_special_register_name(
    unsigned opcode);

static void print_immediate(
    unsigned long value, 
    unsigned long sect_offset,
    struct relocation_info *sorted_relocs,
    unsigned long nsorted_relocs,
    nlist_t *symbols,
    unsigned long nsymbols,
    int *sorted_symbols,
    unsigned long nsorted_symbols,
    char *strings,
    unsigned long strings_size,
    int verbose);

static unsigned long get_reloc_r_type(
    unsigned long pc,
    struct relocation_info *relocs,
    unsigned long nrelocs);

static unsigned long get_reloc_r_length(
    unsigned long sect_offset,
    struct relocation_info *relocs,
    unsigned long nrelocs);


//holds the disassembled output.
//I never expect to disassemble more than one or two instructions, so no way it will overflow.
char exc_handler_ppc_disas[1024];

//returns a pointer to exc_handler_ppc_disas which holds the disassembly output
char *
ppc_disassemble(
char *sect,
unsigned long left)
{

	
	exc_handler_ppc_disas[0]=0;
	
	//these were unused arguments. just moved them to be local variables so the compiler wouldn't complain
	unsigned long addr = 0;
	unsigned long sect_addr = 0;
	struct relocation_info *relocs = 0;
	unsigned long nrelocs = 0;
	nlist_t *symbols = 0;
	unsigned long nsymbols = 0;
	int *sorted_symbols = 0;
	unsigned long nsorted_symbols = 0;
	char *strings = 0;
	unsigned long strings_size = 0;
	unsigned long *indirect_symbols = 0;
	unsigned long nindirect_symbols = 0;
	mach_header_t *mh = 0;
	struct load_command *load_commands = 0;
	int verbose = 0;






//    enum byte_sex host_byte_sex;
    int swapped, jbsr;
    unsigned long opcode, base, disp;
    long simm;
    unsigned long sect_offset;
    const char *indirect_symbol_name;

//	host_byte_sex = get_host_byte_sex();
//	swapped = host_byte_sex != object_byte_sex;
	swapped = 0;
	sect_offset = addr - sect_addr;

	/*
	if(left < sizeof(unsigned long)){
	   if(left != 0){
		memcpy(&opcode, sect, left);
		   
		if(swapped)
		    opcode = SWAP_LONG(opcode);
		printf(".long\t0x%08x\n", (unsigned int)opcode);
	   }
	   printf("(end of section)\n");
	   return(left);
	}
	 
	 */


	memcpy(&opcode, sect, sizeof(unsigned long));
	/*
	if(swapped)
	    opcode = SWAP_LONG(opcode);
*/
	switch(opcode & 0xfc000000){
	case 0x00000000:
	    if((opcode & 0xfc0007ff) == 0x00000200){
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas) + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "attn\t0x%x\n", (unsigned int)((opcode >> 11) & 0x7fff));
		break;
	    }
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas) + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ".long 0x%08x\n", (unsigned int)opcode);
	    break;
	case 0x38000000:
	    if(RA(opcode) == 0)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas) + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "li\tr%lu,", RT(opcode));
	    else
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas) + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "addi\tr%lu,r%lu,", RT(opcode), RA(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas) + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\n");
	    break;
	case 0x3c000000:
	    if(RA(opcode) == 0)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lis\tr%lu,", RT(opcode));
	    else
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "addis\tr%lu,r%lu,", RT(opcode), RA(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\n");
	    break;
	case 0x30000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "addic\tr%lu,r%lu,", RT(opcode), RA(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\n");
	    break;
	case 0x34000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "addic.\tr%lu,r%lu,", RT(opcode), RA(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\n");
	    break;
	case 0x20000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "subfic\tr%lu,r%lu,", RT(opcode), RA(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\n");
	    break;
	case 0x1c000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mulli\tr%lu,r%lu,", RT(opcode), RA(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\n");
	    break;
	case 0x28000000:
	    /*if(Zflag == TRUE)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "cmpli\tcr%lu,%ld,r%lu,", BF(opcode), L(opcode),
		       RA(opcode));
	    else */ if(BF(opcode) == 0)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "cmpl%si\tr%lu,", L(opcode) == 0 ? "w" : "d",RA(opcode));
	    else
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "cmpl%si\tcr%lu,r%lu,", L(opcode) == 0 ?"w":"d",
		       BF(opcode), RA(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\n");
	    break;
	case 0x2c000000:
		/*
	    if(Zflag == TRUE)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "cmpi\tcr%lu,%ld,r%lu,", BF(opcode), L(opcode),
			RA(opcode));
	    else */if(BF(opcode) == 0)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "cmp%si\tr%lu,", L(opcode) == 0 ? "w" : "d",RA(opcode));
	    else
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "cmp%si\tcr%lu,r%lu,", L(opcode) == 0 ?"w":"d",
		       BF(opcode), RA(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\n");
	    break;
	case 0x48000000:
	    if((opcode & 0xfc000003) == 0x48000001 && 
	       get_reloc_r_type(sect_offset,relocs, nrelocs) == PPC_RELOC_JBSR){
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "jbsr\t");
		jbsr = TRUE;
	    }
	    else if((opcode & 0xfc000003) == 0x48000000 && 
	       get_reloc_r_type(sect_offset,relocs, nrelocs) == PPC_RELOC_JBSR){
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "jmp\t");
		jbsr = TRUE;
	    }
	    else{
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "b%s%s\t", LK(opcode), AA(opcode));
		jbsr = FALSE;
	    }
	    if((opcode & 0x00000002) != 0)
		base = 0;
	    else
		base = addr;
	    if((opcode & 0x02000000) == 0)
		disp = opcode & 0x03fffffc;
	    else
		disp = (opcode & 0x03fffffc) | 0xfc000000;
	    if(jbsr == TRUE){
		print_immediate(sect_addr, sect_offset,
		    relocs, nrelocs, symbols, nsymbols, sorted_symbols,
		    nsorted_symbols, strings, strings_size, verbose);
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ",0x%x\n", (unsigned int)(base + disp));
	    }
	    else{
		print_immediate(base + disp, sect_offset,
			relocs, nrelocs, symbols, nsymbols, sorted_symbols,
			nsorted_symbols, strings, strings_size, verbose);

		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\n");
	    }
	    break;
	case 0x40000000:
	    if(bc("", opcode, sect_offset, relocs, nrelocs) == 0)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\t");
	    else
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ",");
	    if((opcode & 0x00000002) != 0)
		base = 0;
	    else
		base = addr;
	    if((opcode & 0x00008000) == 0)
		print_immediate(base + (opcode & 0x0000fffc), sect_offset,
		    relocs, nrelocs, symbols, nsymbols, sorted_symbols,
		    nsorted_symbols, strings, strings_size, verbose);
	    else
		print_immediate(base +
		    ((opcode & 0x0000fffc) | 0xffff0000), sect_offset,
		    relocs, nrelocs, symbols, nsymbols, sorted_symbols,
		    nsorted_symbols, strings, strings_size, verbose);
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\n");
	    break;
	case 0x88000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lbz\tr%lu,", RT(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    if(RA(opcode) == 0)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(0)\n");
	    else
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
	    break;
	case 0x8c000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lbzu\tr%lu,", RT(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    if(RA(opcode) == 0)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(0)\n");
	    else
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
	    break;
	case 0xa0000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lhz\tr%lu,", RT(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    if(RA(opcode) == 0)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(0)\n");
	    else
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
	    break;
	case 0xa4000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lhzu\tr%lu,", RT(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    if(RA(opcode) == 0)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(0)\n");
	    else
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
	    break;
	case 0xa8000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lha\tr%lu,", RT(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    if(RA(opcode) == 0)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(0)\n");
	    else
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
	    break;
	case 0xac000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lhau\tr%lu,", RT(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
	    break;
	case 0x80000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lwz\tr%lu,", RT(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    if(RA(opcode) == 0)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(0)\n");
	    else
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
	    break;
	case 0x84000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lwzu\tr%lu,", RT(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
	    break;
	case 0x98000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stb\tr%lu,", RT(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    if(RA(opcode) == 0)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(0)\n");
	    else
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
	    break;
	case 0x9c000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stbu\tr%lu,", RT(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
	    break;
	case 0xb0000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "sth\tr%lu,", RT(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    if(RA(opcode) == 0)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(0)\n");
	    else
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
	    break;
	case 0xb4000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "sthu\tr%lu,", RT(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
	    break;
	case 0x90000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stw\tr%lu,", RT(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    if(RA(opcode) == 0)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(0)\n");
	    else
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
	    break;
	case 0x94000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stwu\tr%lu,", RT(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
	    break;
	case 0xb8000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lmw\tr%lu,", RT(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    if(RA(opcode) == 0)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(0)\n");
	    else
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
	    break;
	case 0xbc000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stmw\tr%lu,", RT(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    if(RA(opcode) == 0)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(0)\n");
	    else
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
	    break;
	case 0x08000000:
	    trap("d", opcode);
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\n");
	    break;
	case 0x0c000000:
	    trap("w", opcode);
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\n");
	    break;
	case 0x70000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "andi.\tr%lu,r%lu,", RA(opcode), RS(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\n");
	    break;
	case 0x74000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "andis.\tr%lu,r%lu,", RA(opcode), RS(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\n");
	    break;
	case 0x60000000:
	    if(opcode == 0x60000000)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "nop\n");
	    else{
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "ori\tr%lu,r%lu,", RA(opcode), RS(opcode));
		print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
				symbols, nsymbols, sorted_symbols,
				nsorted_symbols, strings, strings_size,verbose);
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\n");
	    }
	    break;
	case 0x64000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "oris\tr%lu,r%lu,", RA(opcode), RS(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\n");
	    break;
	case 0x68000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "xori\tr%lu,r%lu,", RA(opcode), RS(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\n");
	    break;
	case 0x6c000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "xoris\tr%lu,r%lu,", RA(opcode), RS(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\n");
	    break;
	case 0xc0000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lfs\tf%lu,", FRT(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    if(RA(opcode) == 0)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(0)\n");
	    else
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
	    break;
	case 0xc4000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lfsu\tf%lu,", FRT(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
	    break;
	case 0xc8000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lfd\tf%lu,", FRT(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    if(RA(opcode) == 0)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(0)\n");
	    else
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
	    break;
	case 0xcc000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lfdu\tf%lu,", FRT(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
	    break;
	case 0xd0000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stfs\tf%lu,", FRT(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    if(RA(opcode) == 0)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(0)\n");
	    else
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
	    break;
	case 0xd4000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stfsu\tf%lu,", FRT(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
	    break;
	case 0xd8000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stfd\tf%lu,", FRT(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    if(RA(opcode) == 0)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(0)\n");
	    else
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
	    break;
	case 0xdc000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stfdu\tf%lu,", FRT(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
	    break;
	case 0x24000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "dozi\tr%lu,r%lu,", RT(opcode), RA(opcode));
	    print_immediate(opcode & 0xffff, sect_offset, relocs, nrelocs,
			    symbols, nsymbols, sorted_symbols, nsorted_symbols,
			    strings, strings_size, verbose);
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\n");
	    break;
	case 0xe8000000:
	    switch(opcode & 0x3){
	    case 0:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "ld\tr%lu,", RT(opcode));
		print_immediate(opcode & 0xfffc, sect_offset, relocs, nrelocs,
				symbols, nsymbols, sorted_symbols,
				nsorted_symbols, strings, strings_size,verbose);
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(0)\n");
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
		break;
	    case 1:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "ldu\tr%lu,", RT(opcode));
		print_immediate(opcode & 0xfffc, sect_offset, relocs, nrelocs,
				symbols, nsymbols, sorted_symbols,
				nsorted_symbols, strings, strings_size,verbose);
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
		break;
	    case 2:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lwa\tr%lu,", RT(opcode));
		print_immediate(opcode & 0xfffc, sect_offset, relocs, nrelocs,
				symbols, nsymbols, sorted_symbols,
				nsorted_symbols, strings, strings_size,verbose);
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(0)\n");
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
		break;
	    default:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ".long 0x%08x\n", (unsigned int)opcode);
		break;
	    }
	    break;
	case 0xf8000000:
	    switch(opcode & 0x3){
	    case 0:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "std\tr%lu,", RT(opcode));
		print_immediate(opcode & 0xfffc, sect_offset, relocs, nrelocs,
				symbols, nsymbols, sorted_symbols,
				nsorted_symbols, strings, strings_size,verbose);
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(0)\n");
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
		break;
	    case 1:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stdu\tr%lu,", RT(opcode));
		print_immediate(opcode & 0xfffc, sect_offset, relocs, nrelocs,
				symbols, nsymbols, sorted_symbols,
				nsorted_symbols, strings, strings_size,verbose);
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "(r%lu)\n", RA(opcode));
		break;
	    default:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ".long 0x%08x\n", (unsigned int)opcode);
		break;
	    }
	    break;
	case 0x7c000000:
	    switch(opcode & 0x000007fe){
	    case 0x00000214:
	    case 0x00000614:
		xo_form("add", opcode, 3);
		break;
	    case 0x00000050:
	    case 0x00000450:
		xo_form("subf", opcode, 3);
		break;
	    case 0x00000014:
	    case 0x00000414:
		xo_form("addc", opcode, 3);
		break;
	    case 0x00000114:
	    case 0x00000514:
		xo_form("adde", opcode, 3);
		break;
	    case 0x00000010:
	    case 0x00000410:
		xo_form("subfc", opcode, 3);
		break;
	    case 0x00000110:
	    case 0x00000510:
		xo_form("subfe", opcode, 3);
		break;
	    case 0x000001d4:
	    case 0x000005d4:
		xo_form("addme", opcode, 2);
		break;
	    case 0x00000194:
	    case 0x00000594:
		xo_form("addze", opcode, 2);
		break;
	    case 0x000001d0:
	    case 0x000005d0:
		xo_form("subfme", opcode, 2);
		break;
	    case 0x00000190:
	    case 0x00000590:
		xo_form("subfze", opcode, 2);
		break;
	    case 0x000000d0:
	    case 0x000004d0:
		xo_form("neg", opcode, 2);
		break;
	    case 0x000001d6:
	    case 0x000005d6:
		xo_form("mullw", opcode, 3);
		break;
	    case 0x000001d2:
	    case 0x000005d2:
		xo_form("mulld", opcode, 3);
		break;
	    case 0x00000092:
	    case 0x00000492:
		xo_form("mulhd", opcode, 3);
		break;
	    case 0x00000096:
	    case 0x00000496:
		xo_form("mulhw", opcode, 3);
		break;
	    case 0x00000012:
	    case 0x00000412:
		xo_form("mulhdu", opcode, 3);
		break;
	    case 0x00000016:
	    case 0x00000416:
		xo_form("mulhwu", opcode, 3);
		break;
	    case 0x000003d2:
	    case 0x000007d2:
		xo_form("divd", opcode, 3);
		break;
	    case 0x000003d6:
	    case 0x000007d6:
		xo_form("divw", opcode, 3);
		break;
	    case 0x00000392:
	    case 0x00000792:
		xo_form("divdu", opcode, 3);
		break;
	    case 0x00000396:
	    case 0x00000796:
		xo_form("divwu", opcode, 3);
		break;

	    case 0x000000ae:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lbzx\tr%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lbzx\tr%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x000000ee:
		x_form("lbzux", opcode, 3);
		break;
	    case 0x0000022e:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lhzx\tr%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lhzx\tr%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x0000026e:
		x_form("lhzux", opcode, 3);
		break;
	    case 0x000002ae:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lhax\tr%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lhax\tr%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x000002ee:
		x_form("lhaux", opcode, 3);
		break;
	    case 0x0000002e:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lwzx\tr%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lwzx\tr%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x0000006e:
		x_form("lwzux", opcode, 3);
		break;
	    case 0x000002aa:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lwax\tr%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lwax\tr%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x000002ea:
		x_form("lwaux", opcode, 3);
		break;
	    case 0x0000002a:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "ldx\tr%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "ldx\tr%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x0000006a:
		x_form("ldux", opcode, 3);
		break;
	    case 0x000001ae:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stbx\tr%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stbx\tr%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x000001ee:
		x_form("stbux", opcode, 3);
		break;
	    case 0x0000032e:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "sthx\tr%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "sthx\tr%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x0000036e:
		x_form("sthux", opcode, 3);
		break;
	    case 0x0000012e:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stwx\tr%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stwx\tr%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x0000016e:
		x_form("stwux", opcode, 3);
		break;
	    case 0x0000012a:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stdx\tr%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stdx\tr%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x0000016a:
		x_form("stdux", opcode, 3);
		break;
	    case 0x0000062c:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lhbrx\tr%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lhbrx\tr%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x0000042c:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lwbrx\tr%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lwbrx\tr%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x0000072c:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "sthbrx\tr%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "sthbrx\tr%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x0000052c:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stwbrx\tr%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stwbrx\tr%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x0000042a:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lswx\tr%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lswx\tr%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x0000052a:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stswx\tr%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stswx\tr%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x00000028:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lwarx\tr%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lwarx\tr%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x000000a8:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "ldarx\tr%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "ldarx\tr%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x0000022a:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lscbx%s\tr%lu,0,r%lu\n", Rc(opcode), RT(opcode),
			   RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lscbx%s\tr%lu,r%lu,r%lu\n", Rc(opcode), RT(opcode),
			   RA(opcode), RB(opcode));
		break;
	    case 0x0000012c:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stwcx.\tr%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stwcx.\tr%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x000001ac:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stdcx.\tr%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stdcx.\tr%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x00000038:
		sx_form("and", opcode, 3);
		break;
	    case 0x00000278:
		sx_form("xor", opcode, 3);
		break;
	    case 0x00000378:
		sx_form("or", opcode, 3);
		break;
	    case 0x000003b8:
		sx_form("nand", opcode, 3);
		break;
	    case 0x000000f8:
		sx_form("nor", opcode, 3);
		break;
	    case 0x00000078:
		sx_form("andc", opcode, 3);
		break;
	    case 0x00000238:
		sx_form("eqv", opcode, 3);
		break;
	    case 0x00000338:
		sx_form("orc", opcode, 3);
		break;
	    case 0x00000774:
		sx_form("extsb", opcode, 2);
		break;
	    case 0x000007b4:
		sx_form("extsw", opcode, 2);
		break;
	    case 0x00000734:
		sx_form("extsh", opcode, 2);
		break;
	    case 0x00000074:
		sx_form("cntlzd", opcode, 2);
		break;
	    case 0x00000034:
		sx_form("cntlzw", opcode, 2);
		break;
	    case 0x00000036:
		sx_form("sld", opcode, 3);
		break;
	    case 0x00000030:
		sx_form("slw", opcode, 3);
		break;
	    case 0x00000436:
		sx_form("srd", opcode, 3);
		break;
	    case 0x00000430:
		sx_form("srw", opcode, 3);
		break;
	    case 0x00000634:
		sx_form("srad", opcode, 3);
		break;
	    case 0x00000630:
		sx_form("sraw", opcode, 3);
		break;
	    case 0x000004aa:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lswi\tr%lu,0,%lu\n", RT(opcode), NB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lswi\tr%lu,r%lu,%lu\n", RT(opcode), RA(opcode),
			   NB(opcode));
		break;
	    case 0x000005aa:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stswi\tr%lu,0,%lu\n", RT(opcode), NB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stswi\tr%lu,r%lu,%lu\n", RT(opcode), RA(opcode),
			   NB(opcode));
		break;
	    case 0x000004ac:
		switch((opcode >> 21) & 0x3){
		case 0:
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "sync\n");
		    break;
		case 1:
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lwsync\n");
		    break;
		case 2:
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "ptesync\n");
		    break;
		case 3:
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "sync\t3\n");
		    break;
		}
		break;
	    case 0x00000000:
		/*if(Zflag == TRUE)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "cmp\tcr%lu,%ld,r%lu,r%lu\n",
			   BF(opcode), L(opcode), RA(opcode), RB(opcode));
		else */if(BF(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "cmp%s\tr%lu,r%lu\n", L(opcode) == 0 ? "w" : "d",
			   RA(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "cmp%s\tcr%lu,r%lu,r%lu\n", L(opcode) == 0 ? "w":"d",
			   BF(opcode), RA(opcode), RB(opcode));
		break;
	    case 0x00000040:
		/*if(Zflag == TRUE)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "cmpl\tcr%lu,%ld,r%lu,r%lu\n", BF(opcode), L(opcode),
			   RA(opcode), RB(opcode));
		else */if(BF(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "cmpl%s\tr%lu,r%lu\n", L(opcode) == 0 ? "w" : "d",
			   RA(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "cmpl%s\tcr%lu,r%lu,r%lu\n", L(opcode) == 0 ?"w":"d",
			   BF(opcode), RA(opcode), RB(opcode));
		break;
	    case 0x00000088:
		trap("d", opcode);
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "r%lu\n", RB(opcode));
		break;
	    case 0x00000008:
		if(opcode == 0x7fe00008){
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "trap\n");
		}
		else{
		    trap("w", opcode);
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "r%lu\n", RB(opcode));
		}
		break;
	    case 0x00000670:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "srawi%s\tr%lu,r%lu,%lu\n", Rc(opcode), RA(opcode),
		       RS(opcode), SH(opcode));
		break;
	    case 0x00000674:
	    case 0x00000676:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "sradi%s\tr%lu,r%lu,%lu\n", Rc(opcode), RA(opcode),
		       RS(opcode), ((opcode & 0x2) << 4) | SH(opcode));
		break;
	    case 0x000003a6:
		if((opcode & 0xfc1fffff) == 0x7c1c43a6){
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mttbl\t");
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "r%lu\n", RS(opcode));
		}
		else if((opcode & 0xfc1fffff) == 0x7c1d43a6){
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mttbu\t");
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "r%lu\n", RS(opcode));
		}
		else{
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mtspr\t");
		    print_special_register_name(opcode);
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ",r%lu\n", RS(opcode));
		}
		break;
	    case 0x000002a6:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mfspr\tr%lu,", RT(opcode));
		print_special_register_name(opcode);
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\n");
		break;
	    case 0x00000120:
		if(opcode & 0x00100000)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mtocrf\t0x%02x,r%lu\n",
			   (unsigned int)((opcode >> 12) & 0xff),
			   RS(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mtcrf\t%lu,r%lu\n", (opcode >> 12) & 0xff,
			   RS(opcode));
		break;
	    case 0x00000400:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mcrxr\tcr%lu\n", BF(opcode));
		break;
	    case 0x00000026:
		if(opcode & 0x00100000)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mfocrf\tr%lu,0x%02x\n", RS(opcode),
			   (unsigned int)((opcode >> 12) & 0xff));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mfcr\tr%lu\n", RT(opcode));
		break;
	    case 0x0000042e:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lfsx\tf%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lfsx\tf%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x0000046e:
		fx_form("lfsux", opcode, 3);
		break;
	    case 0x000004ae:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lfdx\tf%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lfdx\tf%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x000004ee:
		fx_form("lfdux", opcode, 3);
		break;
	    case 0x0000052e:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stfsx\tf%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stfsx\tf%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x0000056e:
		fx_form("stfsux", opcode, 3);
		break;
	    case 0x000005ae:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stfdx\tf%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stfdx\tf%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x000007ae:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stfiwx\tf%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stfiwx\tf%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x000005ee:
		fx_form("stfdux", opcode, 3);
		break;
	    case 0x000007ac:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "icbi\t0,r%lu\n", RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "icbi\tr%lu,r%lu\n", RA(opcode), RB(opcode));
		break;
	    case 0x0000022c:
		if(RT(opcode) != 0){
		    if(RA(opcode) == 0)
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "dcbt\t0,r%lu,0x%x\n", RB(opcode),
			       (unsigned int)TH(opcode));
		    else
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "dcbt\tr%lu,r%lu,0x%x\n", RA(opcode),
			       RB(opcode), (unsigned int)TH(opcode));
		}
		else{
		    if(RA(opcode) == 0)
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "dcbt\t0,r%lu\n", RB(opcode));
		    else
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "dcbt\tr%lu,r%lu\n", RA(opcode), RB(opcode));
		}
		break;
	    case 0x000001ec:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "dcbtst\t0,r%lu\n", RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "dcbtst\tr%lu,r%lu\n", RA(opcode), RB(opcode));
		break;
	    case 0x000007ec:
		if((opcode & 0x00200000) == 0x00200000){
		    if(RA(opcode) == 0)
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "dcbzl\t0,r%lu\n", RB(opcode));
		    else
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "dcbzl\tr%lu,r%lu\n", RA(opcode), RB(opcode));
		}
		else{
		    if(RA(opcode) == 0)
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "dcbz\t0,r%lu\n", RB(opcode));
		    else
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "dcbz\tr%lu,r%lu\n", RA(opcode), RB(opcode));
		}
		break;
	    case 0x0000006c:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "dcbst\t0,r%lu\n", RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "dcbst\tr%lu,r%lu\n", RA(opcode), RB(opcode));
		break;
	    case 0x000000ac:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "dcbf\t0,r%lu\n", RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "dcbf\tr%lu,r%lu\n", RA(opcode), RB(opcode));
		break;
	    case 0x0000026c:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "eciwx\tr%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "eciwx\tr%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			    RB(opcode));
		break;
	    case 0x0000036c:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "ecowx\tr%lu,0,r%lu\n", RT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "ecowx\tr%lu,r%lu,r%lu\n", RT(opcode), RA(opcode),
			    RB(opcode));
		break;
	    case 0x000006ac:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "eieio\n");
		break;
	    case 0x00000124:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mtmsr\tr%lu\n", RS(opcode));
		break;
	    case 0x00000164:
		if((opcode & 0x00010000) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mtmsrd\tr%lu\n", RS(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mtmsrd\tr%lu,1\n", RS(opcode));
		break;
	    case 0x000000a6:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mfmsr\tr%lu\n", RS(opcode));
		break;
	    case 0x000003ac:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "dcbi\t0,r%lu\n", RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "dcbi\tr%lu,r%lu\n", RA(opcode), RB(opcode));
		break;
	    case 0x000005ec:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "dcba\t0,r%lu\n", RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "dcba\tr%lu,r%lu\n", RA(opcode), RB(opcode));
		break;
	    case 0x000001a4:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mtsr\tsr%lu,r%lu\n", SR(opcode), RS(opcode));
		break;
	    case 0x000004a6:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mfsr\tr%lu,sr%lu\n", RT(opcode), SR(opcode));
		break;
	    case 0x000001e4:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mtsrin\tr%lu,r%lu\n", RS(opcode), RB(opcode));
		break;
	    case 0x00000526:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mfsrin\tr%lu,r%lu\n", RT(opcode), RB(opcode));
		break;
	    case 0x00000264:
		if((opcode & 0x00200000) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "tlbie\tr%lu\n", RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "tlbie\tr%lu,1\n", RB(opcode));
		break;
	    case 0x00000224:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "tlbiel\tr%lu\n", RB(opcode));
		break;
	    case 0x0000046c:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "tlbsync\n");
		break;
	    case 0x000002e4:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "tlbia\n");
		break;
	    case 0x000002e6:
		switch(opcode & 0x001ff800){
		case 0x000c4000:
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mftb\tr%lu\n", RT(opcode));
		    break;
		case 0x000d4000:
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mftbu\tr%lu\n", RT(opcode));
		    break;
		default:
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mftb\tr%lu,%lu\n", RT(opcode),
			   ((opcode >> 16) & 0x1f) | ((opcode >> 6) & 0x3e0));
		}
		break;
	    case 0x00000210:
	    case 0x00000610:
		xo_form("doz", opcode, 3);
		break;
	    case 0x000002d0:
	    case 0x000006d0:
		xo_form("abs", opcode, 2);
		break;
	    case 0x000003d0:
	    case 0x000007d0:
		xo_form("nabs", opcode, 2);
		break;
	    case 0x000000d6:
	    case 0x000004d6:
		xo_form("mul", opcode, 3);
		break;
	    case 0x00000296:
	    case 0x00000696:
		xo_form("div", opcode, 3);
		break;
	    case 0x000002d6:
	    case 0x000006d6:
		xo_form("divs", opcode, 3);
		break;
	    case 0x00000432:
		sx_form("rrib", opcode, 3);
		break;
	    case 0x0000003a:
		sx_form("maskg", opcode, 3);
		break;
	    case 0x0000043a:
		sx_form("maskir", opcode, 3);
		break;
	    case 0x00000130:
		sx_form("slq", opcode, 3);
		break;
	    case 0x00000530:
		sx_form("srq", opcode, 3);
		break;
	    case 0x00000170:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "sliq%s\tr%lu,r%lu,%lu\n", Rc(opcode), RA(opcode),
		       RS(opcode), SH(opcode));
		break;
	    case 0x00000570:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "sriq%s\tr%lu,r%lu,%lu\n", Rc(opcode), RA(opcode),
		       RS(opcode), SH(opcode));
		break;
	    case 0x000001f0:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "slliq%s\tr%lu,r%lu,%lu\n", Rc(opcode), RA(opcode),
		       RS(opcode), SH(opcode));
		break;
	    case 0x000005f0:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "srliq%s\tr%lu,r%lu,%lu\n", Rc(opcode), RA(opcode),
		       RS(opcode), SH(opcode));
		break;
	    case 0x000001b0:
		sx_form("sllq", opcode, 3);
		break;
	    case 0x000005b0:
		sx_form("srlq", opcode, 3);
		break;
	    case 0x00000132:
		sx_form("sle", opcode, 3);
		break;
	    case 0x00000532:
		sx_form("sre", opcode, 3);
		break;
	    case 0x000001b2:
		sx_form("sleq", opcode, 3);
		break;
	    case 0x000005b2:
		sx_form("sreq", opcode, 3);
		break;
	    case 0x00000770:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "sraiq%s\tr%lu,r%lu,%lu\n", Rc(opcode), RA(opcode),
		       RS(opcode), SH(opcode));
		break;
	    case 0x00000730:
		sx_form("sraq", opcode, 3);
		break;
	    case 0x00000732:
		sx_form("srea", opcode, 3);
		break;
	    case 0x00000426:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "clcs\tr%lu,r%lu\n", RT(opcode), RA(opcode));
		break;
	    case 0x000007a4:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "tlbld\tr%lu\n", RB(opcode));
		break;
	    case 0x000007e4:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "tlbli\tr%lu\n", RB(opcode));
		break;
	    case 0x00000364:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "slbie\tr%lu\n", RB(opcode));
		break;
	    case 0x000003e4:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "slbia\n");
		break;
	    case 0x00000324:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "slbmte\tr%lu,r%lu\n", RS(opcode), RB(opcode));
		break;
	    case 0x000006a6:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "slbmfev\tr%lu,r%lu\n", RS(opcode), RB(opcode));
		break;
	    case 0x00000726:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "slbmfee\tr%lu,r%lu\n", RS(opcode), RB(opcode));
		break;
	    case 0x0000000e:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lvebx\tv%lu,0,r%lu\n", VT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lvebx\tv%lu,r%lu,r%lu\n", VT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x0000004e:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lvehx\tv%lu,0,r%lu\n", VT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lvehx\tv%lu,r%lu,r%lu\n", VT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x0000008e:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lvewx\tv%lu,0,r%lu\n", VT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lvewx\tv%lu,r%lu,r%lu\n", VT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x000000ce:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lvx\tv%lu,0,r%lu\n", VT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lvx\tv%lu,r%lu,r%lu\n", VT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x000002ce:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lvxl\tv%lu,0,r%lu\n", VT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lvxl\tv%lu,r%lu,r%lu\n", VT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x0000010e:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stvebx\tv%lu,0,r%lu\n", VT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stvebx\tv%lu,r%lu,r%lu\n", VT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x0000014e:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stvehx\tv%lu,0,r%lu\n", VT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stvehx\tv%lu,r%lu,r%lu\n", VT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x0000018e:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stvewx\tv%lu,0,r%lu\n", VT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stvewx\tv%lu,r%lu,r%lu\n", VT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x000001ce:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stvx\tv%lu,0,r%lu\n", VT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stvx\tv%lu,r%lu,r%lu\n", VT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x000003ce:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stvxl\tv%lu,0,r%lu\n", VT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "stvxl\tv%lu,r%lu,r%lu\n", VT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x0000000c:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lvsl\tv%lu,0,r%lu\n", VT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lvsl\tv%lu,r%lu,r%lu\n", VT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x0000004c:
		if(RA(opcode) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lvsr\tv%lu,0,r%lu\n", VT(opcode), RB(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "lvsr\tv%lu,r%lu,r%lu\n", VT(opcode), RA(opcode),
			   RB(opcode));
		break;
	    case 0x000002ac:
		if((opcode & (1 << 25)) == 0){
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "dst\tr%lu,r%lu,%lu\n", RA(opcode), RB(opcode),
			   TAG(opcode));
		} else {
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "dstt\tr%lu,r%lu,%lu\n", RA(opcode), RB(opcode),
			   TAG(opcode));
		}
		break;
	    case 0x000002ec:
		if((opcode & (1 << 25)) == 0){
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "dstst\tr%lu,r%lu,%lu\n", RA(opcode), RB(opcode),
			   TAG(opcode));
		} else {
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "dststt\tr%lu,r%lu,%lu\n", RA(opcode),RB(opcode),
			   TAG(opcode));
		}
		break;
	    case 0x0000066c:
		if((opcode & (1 << 25)) == 0)
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "dss\t%lu\n", TAG(opcode));
		else
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "dssall\n");
		break;
	    default:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ".long 0x%08x\n", (unsigned int)opcode);
		break;
	    }
	    break;
	case 0x4c000000:
	    switch(opcode & 0x000007fe){
	    case 0x00000000:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mcrf\tcr%lu,cr%lu\n", BF(opcode), BFA(opcode));
		break;
	    case 0x00000020:
		(void)bc("lr", opcode, sect_offset, relocs, nrelocs);
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\n");
		break;
	    case 0x00000024:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "rfid\n");
		break;
	    case 0x00000420:
		(void)bc("ctr", opcode, sect_offset, relocs, nrelocs);
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\n");
		break;
	    case 0x00000202:
		xl_form("crand", opcode, 3);
		break;
	    case 0x00000182:
		xl_form("crxor", opcode, 3);
		break;
	    case 0x00000382:
		xl_form("cror", opcode, 3);
		break;
	    case 0x000001c2:
		xl_form("crnand", opcode, 3);
		break;
	    case 0x00000042:
		xl_form("crnor", opcode, 3);
		break;
	    case 0x00000102:
		xl_form("crandc", opcode, 3);
		break;
	    case 0x00000242:
		xl_form("creqv", opcode, 3);
		break;
	    case 0x00000342:
		xl_form("crorc", opcode, 3);
		break;
	    case 0x0000012c:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "isync\n");
		break;
	    case 0x00000064:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "rfi\n");
		break;
	    default:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ".long 0x%08x\n", (unsigned int)opcode);
		break;
	    }
	    break;
	case 0x78000000:
	    switch(opcode & 0x0000001e){
	    case 0x00000000:
	    case 0x00000002:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "rldicl%s\tr%lu,r%lu,%lu,%lu\n", Rc(opcode), RA(opcode),
		       RS(opcode), ((opcode & 0x2) << 4) | SH(opcode),
		       ((opcode & 0x20) | ((opcode >> 6) & 0x1f)) );
		break;
	    case 0x00000004:
	    case 0x00000006:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "rldicr%s\tr%lu,r%lu,%lu,%lu\n", Rc(opcode), RA(opcode),
		       RS(opcode), ((opcode & 0x2) << 4) | SH(opcode),
		       ((opcode & 0x20) | ((opcode >> 6) & 0x1f)) );
		break;
	    case 0x00000008:
	    case 0x0000000a:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "rldic%s\tr%lu,r%lu,%lu,%lu\n", Rc(opcode), RA(opcode),
		       RS(opcode), ((opcode & 0x2) << 4) | SH(opcode),
		       ((opcode & 0x20) | ((opcode >> 6) & 0x1f)) );
		break;
	    case 0x0000000c:
	    case 0x0000000e:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "rldimi%s\tr%lu,r%lu,%lu,%lu\n", Rc(opcode), RA(opcode),
		       RS(opcode), ((opcode & 0x2) << 4) | SH(opcode),
		       ((opcode & 0x20) | ((opcode >> 6) & 0x1f)) );
		break;
	    case 0x00000010:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "rldcl%s\tr%lu,r%lu,r%lu,%lu\n", Rc(opcode), RA(opcode),
		       RS(opcode), RB(opcode),
		       ((opcode & 0x20) | ((opcode >> 6) & 0x1f)) );
		break;
	    case 0x00000012:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "rldcr%s\tr%lu,r%lu,r%lu,%lu\n", Rc(opcode), RA(opcode),
		       RS(opcode), RB(opcode),
		       ((opcode & 0x20) | ((opcode >> 6) & 0x1f)) );
		break;
	    default:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ".long 0x%08x\n", (unsigned int)opcode);
		break;
	    }
	    break;
	case 0x44000000:
	    switch(opcode & 0x000007fe){
	    case 0x00000002:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "sc\n");
		break;
	    default:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ".long 0x%08x\n", (unsigned int)opcode);
		break;
	    }
	    break;
	case 0x54000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "rlwinm%s\tr%lu,r%lu,%lu,%lu,%lu\n", Rc(opcode), RA(opcode),
		   RS(opcode), SH(opcode), MB(opcode), ME(opcode));
	    break;
	case 0x58000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "rlmi%s\tr%lu,r%lu,r%lu,%lu,%lu\n", Rc(opcode), RA(opcode),
		   RS(opcode), RB(opcode), MB(opcode), ME(opcode));
	    break;
	case 0x5c000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "rlwnm%s\tr%lu,r%lu,r%lu,%lu,%lu\n", Rc(opcode), RA(opcode),
		   RS(opcode), RB(opcode), MB(opcode), ME(opcode));
	    break;
	case 0x50000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "rlwimi%s\tr%lu,r%lu,%lu,%lu,%lu\n", Rc(opcode), RA(opcode),
		   RS(opcode), SH(opcode), MB(opcode), ME(opcode));
	    break;
	case 0xfc000000:
	    switch(opcode & 0x000007fe){
	    case 0x00000090:
		fx_form("fmr", opcode, 2);
		break;
	    case 0x00000210:
		fx_form("fabs", opcode, 2);
		break;
	    case 0x00000050:
		fx_form("fneg", opcode, 2);
		break;
	    case 0x00000110:
		fx_form("fnabs", opcode, 2);
		break;
	    case 0x00000018:
		fx_form("frsp", opcode, 2);
		break;
	    case 0x00000034:
		fx_form("frsqrte", opcode, 2);
		break;
	    case 0x0000002c:
		fx_form("fsqrt", opcode, 2);
		break;
    	    case 0x0000065c:
		fx_form("fctid", opcode, 2);
		break;
	    case 0x0000065e:
		fx_form("fctidz", opcode, 2);
		break;
	    case 0x0000001c:
		fx_form("fctiw", opcode, 2);
		break;
	    case 0x0000001e:
		fx_form("fctiwz", opcode, 2);
		break;
	    case 0x0000069c:
		fx_form("fcfid", opcode, 2);
		break;
	    case 0x00000000:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "fcmpu\tcr%lu,f%lu,f%lu\n", BF(opcode), FRA(opcode),
		       FRB(opcode));
		break;
	    case 0x00000040:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "fcmpo\tcr%lu,f%lu,f%lu\n", BF(opcode), FRA(opcode),
		       FRB(opcode));
		break;
	    case 0x0000048e:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mffs%s\tf%lu\n", Rc(opcode), FRT(opcode));
		break;
	    case 0x00000080:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mcrfs\tcr%lu,%lu\n", BF(opcode), BFA(opcode));
		break;
	    case 0x0000010c:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mtfsfi%s\t%lu,%lu\n", Rc(opcode), BF(opcode),
		       U(opcode));
		break;
	    case 0x0000058e:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mtfsf%s\t%lu,f%lu\n", Rc(opcode), FLM(opcode),
		       FRB(opcode));
		break;
	    case 0x0000008c:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mtfsb0%s\t%lu\n", Rc(opcode), BT(opcode));
		break;
	    case 0x0000004c:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mtfsb1%s\t%lu\n", Rc(opcode), BT(opcode));
		break;
	    default:
		switch(opcode & 0x0000003e){
		case 0x0000002a:
		    a_form("fadd", opcode, 3);
		    break;
		case 0x00000028:
		    a_form("fsub", opcode, 3);
		    break;
		case 0x00000032:
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "fmul%s\tf%lu,f%lu,f%lu\n", Rc(opcode), FRT(opcode),
			   FRA(opcode), FRC(opcode));
		    break;
		case 0x0000002e:
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "fsel%s\tf%lu,f%lu,f%lu,f%lu\n", Rc(opcode),
			   FRT(opcode), FRA(opcode), FRC(opcode), FRB(opcode));
		    break;
		case 0x00000024:
		    a_form("fdiv", opcode, 3);
		    break;
		case 0x0000003a:
		    a_form("fmadd", opcode, 4);
		    break;
		case 0x00000038:
		    a_form("fmsub", opcode, 4);
		    break;
		case 0x0000003e:
		    a_form("fnmadd", opcode, 4);
		    break;
		case 0x0000003c:
		    a_form("fnmsub", opcode, 4);
		    break;
		default:
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ".long 0x%08x\n", (unsigned int)opcode);
		    break;
		}
	    }
	    break;
	case 0xec000000:
	    switch(opcode & 0x0000003e){
	    case 0x0000002a:
		a_form("fadds", opcode, 3);
		break;
	    case 0x00000028:
		a_form("fsubs", opcode, 3);
		break;
	    case 0x00000030:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "fres%s\tf%lu,f%lu\n", Rc(opcode), FRT(opcode),
		       FRB(opcode));
		break;
	    case 0x0000002c:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "fsqrts%s\tf%lu,f%lu\n", Rc(opcode), FRT(opcode),
		       FRB(opcode));
		break;
	    case 0x00000032:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "fmuls%s\tf%lu,f%lu,f%lu\n", Rc(opcode), FRT(opcode),
		       FRA(opcode), FRC(opcode));
		break;
	    case 0x00000024:
		a_form("fdivs", opcode, 3);
		break;
	    case 0x0000003a:
		a_form("fmadds", opcode, 4);
		break;
	    case 0x00000038:
		a_form("fmsubs", opcode, 4);
		break;
	    case 0x0000003e:
		a_form("fnmadds", opcode, 4);
		break;
	    case 0x0000003c:
		a_form("fnmsubs", opcode, 4);
		break;
	    default:
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ".long 0x%08x\n", (unsigned int)opcode);
		break;
	    }
	    break;
	case 0x10000000:
	    if((opcode & (1 << 5)) == 0){
		if((opcode & 0x31) != 0){
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ".long 0x%08x\n", (unsigned int)opcode);
		    break;
		}
		switch((opcode >> 1) & 0x7){
		case 0:
		    switch(opcode & 0x7c0){
		    case 0x00000000:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vaddubm\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000040:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vadduhm\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000080:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vadduwm\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000180:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vaddcuw\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000200:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vaddubs\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000240:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vadduhs\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000280:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vadduws\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000300:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vaddsbs\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000340:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vaddshs\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000380:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vaddsws\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000400:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsububm\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000440:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsubuhm\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000480:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsubuwm\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000580:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsubcuw\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000600:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsububs\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000640:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsubuhs\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000680:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsubuws\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000700:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsubsbs\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000740:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsubshs\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000780:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsubsws\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    default:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ".long 0x%08x\n", (unsigned int)opcode);
			break;
		    }
		    break;
		case 1:
		    switch(opcode & 0x7c0){
		    case 0x00000000:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmaxub\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000040:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmaxuh\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000080:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmaxuw\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000100:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmaxsb\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000140:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmaxsh\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000180:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmaxsw\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000200:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vminub\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000240:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vminuh\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000280:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vminuw\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000300:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vminsb\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000340:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vminsh\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000380:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vminsw\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000400:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vavgub\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000440:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vavguh\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000480:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vavguw\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000500:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vavgsb\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000540:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vavgsh\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000580:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vavgsw\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    default:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ".long 0x%08x\n", (unsigned int)opcode);
			break;
		    }
		    break;
		case 2:
		    switch(opcode & 0x7c0){
		    case 0x00000000:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vrlb\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000040:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vrlh\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000080:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vrlw\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000100:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vslb\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000140:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vslh\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000180:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vslw\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x000001c0:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsl\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000200:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsrb\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000240:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsrh\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000280:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsrw\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x000002c0:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsr\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000300:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsrab\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000340:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsrah\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000380:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsraw\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000400:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vand\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000440:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vandc\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000480:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vor\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x000004c0:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vxor\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000500:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vnor\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000600:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mfvscr\tv%lu\n", VT(opcode));
			break;
		    case 0x00000640:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "mtvscr\tv%lu\n", VB(opcode));
			break;
		    default:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ".long 0x%08x\n", (unsigned int)opcode);
			break;
		    }
		    break;
		case 3:
		    switch(opcode & 0x3c0){
		    case 0x00000000:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vcmpequb%s\tv%lu,v%lu,v%lu\n", VX_Rc(opcode),
			       VT(opcode), VA(opcode), VB(opcode));
			break;
		    case 0x00000040:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vcmpequh%s\tv%lu,v%lu,v%lu\n", VX_Rc(opcode),
			       VT(opcode), VA(opcode), VB(opcode));
			break;
		    case 0x00000080:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vcmpequw%s\tv%lu,v%lu,v%lu\n", VX_Rc(opcode),
			       VT(opcode), VA(opcode), VB(opcode));
			break;
		    case 0x000000c0:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vcmpeqfp%s\tv%lu,v%lu,v%lu\n", VX_Rc(opcode),
			       VT(opcode), VA(opcode), VB(opcode));
			break;
		    case 0x000001c0:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vcmpgefp%s\tv%lu,v%lu,v%lu\n", VX_Rc(opcode),
			       VT(opcode), VA(opcode), VB(opcode));
			break;
		    case 0x00000200:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vcmpgtub%s\tv%lu,v%lu,v%lu\n", VX_Rc(opcode),
			       VT(opcode), VA(opcode), VB(opcode));
			break;
		    case 0x00000240:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vcmpgtuh%s\tv%lu,v%lu,v%lu\n", VX_Rc(opcode),
			       VT(opcode), VA(opcode), VB(opcode));
			break;
		    case 0x00000280:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vcmpgtuw%s\tv%lu,v%lu,v%lu\n", VX_Rc(opcode),
			       VT(opcode), VA(opcode), VB(opcode));
			break;
		    case 0x000002c0:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vcmpgtfp%s\tv%lu,v%lu,v%lu\n", VX_Rc(opcode),
			       VT(opcode), VA(opcode), VB(opcode));
			break;
		    case 0x00000300:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vcmpgtsb%s\tv%lu,v%lu,v%lu\n", VX_Rc(opcode),
			       VT(opcode), VA(opcode), VB(opcode));
			break;
		    case 0x00000340:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vcmpgtsh%s\tv%lu,v%lu,v%lu\n", VX_Rc(opcode),
			       VT(opcode), VA(opcode), VB(opcode));
			break;
		    case 0x00000380:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vcmpgtsw%s\tv%lu,v%lu,v%lu\n", VX_Rc(opcode),
			       VT(opcode), VA(opcode), VB(opcode));
			break;
		    case 0x000003c0:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vcmpbfp%s\tv%lu,v%lu,v%lu\n", VX_Rc(opcode),
			       VT(opcode), VA(opcode), VB(opcode));
			break;
		    default:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ".long 0x%08x\n", (unsigned int)opcode);
			break;
		    }
		    break;
		case 4:
		    switch(opcode & 0x7c0){
		    case 0x00000000:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmuloub\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000040:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmulouh\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000100:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmulosb\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000140:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmulosh\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000200:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmuleub\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000240:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmuleuh\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000300:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmulesb\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000340:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmulesh\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000600:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsum4ubs\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000700:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsum4sbs\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000640:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsum4shs\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000680:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsum2sws\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000780:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsumsws\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    default:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ".long 0x%08x\n", (unsigned int)opcode);
			break;
		    }
		    break;
		case 5:
		    switch((opcode >> 6) & 0x1f){
		    case 0:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vaddfp\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 1:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsubfp\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 4:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vrefp\tv%lu,v%lu\n", VT(opcode), VB(opcode));
			break;
		    case 5:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vrsqrtefp\tv%lu,v%lu\n",VT(opcode), VB(opcode));
			break;
		    case 6:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vexptefp\tv%lu,v%lu\n", VT(opcode), VB(opcode));
			break;
		    case 7:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vlogefp\tv%lu,v%lu\n", VT(opcode), VB(opcode));
			break;
		    case 8:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vrfin\tv%lu,v%lu\n", VT(opcode), VB(opcode));
			break;
		    case 9:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vrfiz\tv%lu,v%lu\n", VT(opcode), VB(opcode));
			break;
		    case 10:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vrfip\tv%lu,v%lu\n", VT(opcode), VB(opcode));
			break;
		    case 11:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vrfim\tv%lu,v%lu\n", VT(opcode), VB(opcode));
			break;
		    case 12:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vcfux\tv%lu,v%lu,%lu\n", VT(opcode),
			       VB(opcode), (opcode >> 16) & 0x1f);
			break;
		    case 13:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vcfsx\tv%lu,v%lu,%lu\n", VT(opcode),
			       VB(opcode), (opcode >> 16) & 0x1f);
			break;
		    case 14:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vctuxs\tv%lu,v%lu,%lu\n", VT(opcode),
			       VB(opcode), (opcode >> 16) & 0x1f);
			break;
		    case 15:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vctsxs\tv%lu,v%lu,%lu\n", VT(opcode),
			       VB(opcode), (opcode >> 16) & 0x1f);
			break;
		    case 16:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmaxfp\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 17:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vminfp\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    default:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ".long 0x%08x\n", (unsigned int)opcode);
			break;
		    }
		    break;
		case 6:
		    switch(opcode & 0x7c0){
		    case 0x00000000:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmrghb\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000040:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmrghh\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000080:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmrghw\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000100:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmrglb\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000140:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmrglh\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000180:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmrglw\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000200:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vspltb\tv%lu,v%lu,%lu\n", VT(opcode),
			       VB(opcode), (opcode >> 16) & 0x1f);
			break;
		    case 0x00000240:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsplth\tv%lu,v%lu,%lu\n", VT(opcode),
			       VB(opcode), (opcode >> 16) & 0x1f);
			break;
		    case 0x00000280:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vspltw\tv%lu,v%lu,%lu\n", VT(opcode),
			       VB(opcode), (opcode >> 16) & 0x1f);
			break;
		    case 0x00000300:
			if((((opcode >> 16) & 0x1f) & 0x10) == 0x10)
			    simm = 0xfffffff0 | ((opcode >> 16) & 0x1f);
			else
			    simm = (opcode >> 16) & 0x1f;
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vspltisb\tv%lu,%ld\n", VT(opcode), simm);
			break;
		    case 0x00000340:
			if((((opcode >> 16) & 0x1f) & 0x10) == 0x10)
			    simm = 0xfffffff0 | ((opcode >> 16) & 0x1f);
			else
			    simm = (opcode >> 16) & 0x1f;
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vspltish\tv%lu,%ld\n", VT(opcode), simm);
			break;
		    case 0x00000380:
			if((((opcode >> 16) & 0x1f) & 0x10) == 0x10)
			    simm = 0xfffffff0 | ((opcode >> 16) & 0x1f);
			else
			    simm = (opcode >> 16) & 0x1f;
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vspltisw\tv%lu,%ld\n", VT(opcode), simm);
			break;
		    case 0x00000400:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vslo\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 0x00000440:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsro\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    default:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ".long 0x%08x\n", (unsigned int)opcode);
			break;
		    }
		    break;
		case 7:
		    switch((opcode >> 6) & 0x1f){
		    case 0:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vpkuhum\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 1:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vpkuwum\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 2:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vpkuhus\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 3:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vpkuwus\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 4:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vpkshus\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 5:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vpkswus\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 6:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vpkshss\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 7:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vpkswss\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 8:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vupkhsb\tv%lu,v%lu\n", VT(opcode),
			       VB(opcode));
			break;
		    case 9:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vupkhsh\tv%lu,v%lu\n", VT(opcode),
			       VB(opcode));
			break;
		    case 10:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vupklsb\tv%lu,v%lu\n", VT(opcode),
			       VB(opcode));
			break;
		    case 11:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vupklsh\tv%lu,v%lu\n", VT(opcode),
			       VB(opcode));
			break;
		    case 12:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vpkpx\tv%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode));
			break;
		    case 13:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vupkhpx\tv%lu,v%lu\n", VT(opcode),
			       VB(opcode));
			break;
		    case 15:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vupklpx\tv%lu,v%lu\n", VT(opcode),
			       VB(opcode));
			break;
		    default:
			snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ".long 0x%08x\n", (unsigned int)opcode);
			break;
		    }
		    break;
		default:
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ".long 0x%08x\n", (unsigned int)opcode);
		    break;
		}
	    }
	    else{
		switch(opcode & 0xf){
		case 0:
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmhaddshs\tv%lu,v%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode), VC(opcode));
		    break;
		case 1:
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmhraddshs\tv%lu,v%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode), VC(opcode));
		    break;
		case 2:
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmladduhm\tv%lu,v%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode), VC(opcode));
		    break;
		case 4:
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmsumubm\tv%lu,v%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode), VC(opcode));
		    break;
		case 5:
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmsummbm\tv%lu,v%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode), VC(opcode));
		    break;
		case 6:
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmsumuhm\tv%lu,v%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode), VC(opcode));
		    break;
		case 7:
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmsumuhs\tv%lu,v%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode), VC(opcode));
		    break;
		case 8:
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmsumshm\tv%lu,v%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode), VC(opcode));
		    break;
		case 9:
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmsumshs\tv%lu,v%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode), VC(opcode));
		    break;
		case 10:
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsel\tv%lu,v%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode), VC(opcode));
		    break;
		case 11:
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vperm\tv%lu,v%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VB(opcode), VC(opcode));
		    break;
		case 12:
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vsldoi\tv%lu,v%lu,v%lu,%lu\n", VT(opcode),
			       VA(opcode), VB(opcode), (opcode >> 6) & 0xf);
		    break;
		case 14:
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vmaddfp\tv%lu,v%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VC(opcode), VB(opcode));
		    break;
		case 15:
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "vnmsubfp\tv%lu,v%lu,v%lu,v%lu\n", VT(opcode),
			       VA(opcode), VC(opcode), VB(opcode));
		    break;
		default:
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ".long 0x%08x\n", (unsigned int)opcode);
		    break;
		}
	    }
	    break;
	default:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ".long 0x%08x\n", (unsigned int)opcode);
	    break;
	}
	return((char*)exc_handler_ppc_disas);
}

static
void
xo_form(
const char *name,
unsigned long opcode,
unsigned long nregs)
{
	if(nregs == 3)
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "%s%s\tr%lu,r%lu,r%lu\n", name, OE_Rc(opcode), RT(opcode),
		   RA(opcode), RB(opcode));
	else /* nregs == 2 */
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "%s%s\tr%lu,r%lu\n", name, OE_Rc(opcode), RT(opcode),
		   RA(opcode));
}

static
void
x_form(
const char *name,
unsigned long opcode,
unsigned long nregs)
{
	if(nregs == 3)
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "%s%s\tr%lu,r%lu,r%lu\n", name, Rc(opcode), RT(opcode),
		   RA(opcode), RB(opcode));
	else /* nregs == 2 */
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "%s%s\tr%lu,r%lu\n", name, Rc(opcode), RT(opcode),
		   RA(opcode));
}

static
void
sx_form(
const char *name,
unsigned long opcode,
unsigned long nregs)
{
	if(nregs == 3)
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "%s%s\tr%lu,r%lu,r%lu\n", name, Rc(opcode), RA(opcode),
		   RS(opcode), RB(opcode));
	else /* nregs == 2 */
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "%s%s\tr%lu,r%lu\n", name, Rc(opcode), RA(opcode),
		   RS(opcode));
}

static
void
fx_form(
const char *name,
unsigned long opcode,
unsigned long nregs)
{
	if(nregs == 3)
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "%s\tf%lu,r%lu,r%lu\n", name, FRT(opcode),
		   RA(opcode), RB(opcode));
	else /* nregs == 2 */
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "%s%s\tf%lu,f%lu\n", name, Rc(opcode), FRT(opcode),
		   FRB(opcode));
}

static
void
xl_form(
const char *name,
unsigned long opcode,
unsigned long nregs)
{
	if(nregs == 3)
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "%s%s\t%lu,%lu,%lu\n", name, LK(opcode), RT(opcode),
		   RA(opcode), RB(opcode));
	else /* nregs == 2 */
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "%s%s\t%lu,%lu\n", name, LK(opcode), RT(opcode),
		   RA(opcode));
}

static
void
a_form(
const char *name,
unsigned long opcode,
unsigned long nregs)
{
	if(nregs == 3)
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "%s%s\tf%lu,f%lu,f%lu\n", name, Rc(opcode), FRT(opcode),
		   FRA(opcode), FRB(opcode));
	else /* nregs == 4 */
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "%s%s\tf%lu,f%lu,f%lu,f%lu\n", name, Rc(opcode), FRT(opcode),
		   FRA(opcode), FRC(opcode), FRB(opcode));
}

static
unsigned long
bc(
const char *name,
unsigned long opcode,
unsigned long sect_offset,
struct relocation_info *relocs,
unsigned long nrelocs)
{
    char *prediction;
    const char *a;
    unsigned long operands;
    int branch_to_register, predicted;

	operands = 0;
	prediction = "";
	/*
	 * For branch conditional instructions that use the Y-bit that were
	 * predicted the r_length is set to 3 instead of 2.  So to correctly
	 * print the prediction, we have to search for a reloc of and look at
	 * the r_length.  If there is a reloc at this pc, and if the r_length
	 * is 3 it then we know it was a predicted branch and we will always
	 * print the prediction based on the Y-bit, the sign of the displacement
	 * or the opcode (in the case of bclrX and bcctrX instructions).
	 */
	/*
	if(get_reloc_r_length(sect_offset, relocs, nrelocs) == 3)
	    predicted = TRUE;
	else
*/	    predicted = FALSE;
	/* branch conditional (to displacment) */
	if((opcode & 0xfc000000) == 0x40000000){
	    branch_to_register = FALSE;
	    a = aa[(opcode >> 1) & 0x1];
	    if(Y_BIT(opcode) == 0){
		/*
		 * the Y-bit is zero so don't print prediction unless there was
		 * a reloc that said this was a predicted branch.
		 */
		if(predicted == TRUE){
		    if((opcode & 0x00008000) != 0)
			prediction = "+";
		    else
			prediction = "-";
		}
		else{
		    prediction = "";
		}
	    }
	    else{
		if((opcode & 0x00008000) != 0)
		    prediction = "-";
		else
		    prediction = "+";
	    }
	}
	else{
	    /* branch conditional (to link or count register) */
	    branch_to_register = TRUE;
	    a = "";
	    if(Y_BIT(opcode) == 0){
		/* the Y-bit is zero so don't print prediction */
		prediction = "";
		/*
		 * the Y-bit is zero so don't print prediction unless there was
		 * a reloc that said this was a predicted branch.
		 */
		if(predicted == TRUE){
		    prediction = "-";
		}
		else{
		    prediction = "";
		}
	    }
	    else{
		prediction = "+";
	    }
	}
	if(Zflag == TRUE){
	    if(branch_to_register == TRUE){
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "bc%s%s%s\t%lu,%lu,%lu", name, LK(opcode), a, RT(opcode),
		       RA(opcode), BH(opcode));
		operands = 3;
	    }
	    else{
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "bc%s%s%s\t%lu,%lu", name, LK(opcode), a, RT(opcode),
		       RA(opcode));
		operands = 2;
	    }
	    return(operands);
	}
	
	switch(opcode & 0x03e00000){
	case 0x01c00000:
	    prediction = "--";
	    goto bt;
	case 0x01e00000:
	    prediction = "++";
	    goto bt;
	case 0x01800000:
	case 0x01a00000:
bt:	    /* branch if condition true */
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "b%s%s%s%s%s", BC_TRUE(opcode), name, LK(opcode), a,
		   prediction);
	    if(CR_FIELD(opcode) != 0 ||
	      (branch_to_register == TRUE && BH(opcode) != 0)){
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\tcr%lu", CR_FIELD(opcode));
		operands = 1;
		if(branch_to_register == TRUE && BH(opcode) != 0){
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ",%lu", BH(opcode));
		    operands = 2;
		}
	    }
	    break;
	case 0x00c00000:
	    prediction = "--";
	    goto bf;
	case 0x00e00000:
	    prediction = "++";
	    goto bf;
	case 0x00800000:
	case 0x00a00000:
bf:	    /* branch if condition false */
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "b%s%s%s%s%s", BC_FALSE(opcode), name, LK(opcode), a,
		   prediction);
	    if(CR_FIELD(opcode) != 0 ||
	      (branch_to_register == TRUE && BH(opcode) != 0)){
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\tcr%lu", CR_FIELD(opcode));
		operands = 1;
		if(branch_to_register == TRUE && BH(opcode) != 0){
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ",%lu", BH(opcode));
		    operands = 2;
		}
	    }
	    break;
	case 0x03000000:
	    prediction = "--";
	    goto bdnz;
	case 0x03200000:
	    prediction = "++";
	    goto bdnz;
	case 0x02000000:
	case 0x02200000:
bdnz:	    /* decrement ctr branch if ctr non-zero */
	    if((opcode & 0xfc0007fe) == 0x4c000420 ||
	       (opcode & 0x001f0000) != 0x00000000)
		goto bc_general_default_form;
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "bdnz%s%s%s%s", name, LK(opcode), a, prediction);
	    if(branch_to_register == TRUE && BH(opcode) != 0){
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\t%lu", BH(opcode));
		operands = 1;
	    }
	    break;
	case 0x01000000:
	case 0x01200000:
	    /* decrement ctr branch if ctr non-zero and condition true */
	    if((opcode & 0xfc0007fe) == 0x4c000420)
		goto bc_general_default_form;
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "bdnzt%s%s%s%s\t", name, LK(opcode), a, prediction);
	    if(CR_FIELD(opcode) != 0)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "cr%lu+", CR_FIELD(opcode));
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "%s", BC_TRUE(opcode));
	    operands = 1;
	    if(branch_to_register == TRUE && BH(opcode) != 0){
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ",%lu", BH(opcode));
		operands = 2;
	    }
	    break;
	case 0x00000000:
	case 0x00200000:
	    /* decrement ctr branch if ctr non-zero and condition false */
	    if((opcode & 0xfc0007fe) == 0x4c000420)
		goto bc_general_default_form;
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "bdnzf%s%s%s%s\t", name, LK(opcode), a, prediction);
	    if(CR_FIELD(opcode) != 0)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "cr%lu+", CR_FIELD(opcode));
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "%s", BC_TRUE(opcode));
	    operands = 1;
	    if(branch_to_register == TRUE && BH(opcode) != 0){
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ",%lu", BH(opcode));
		operands = 2;
	    }
	    break;
	case 0x03400000:
	    prediction = "--";
	    goto bdz;
	case 0x03600000:
	    prediction = "++";
	    goto bdz;
	case 0x02400000:
	case 0x02600000:
bdz:	    /* decrement ctr branch if ctr zero */
	    if((opcode & 0xfc0007fe) == 0x4c000420 ||
	       (opcode & 0x001f0000) != 0x00000000)
		goto bc_general_default_form;
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "bdz%s%s%s%s", name, LK(opcode), a, prediction);
	    if(branch_to_register == TRUE && BH(opcode) != 0){
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "\t%lu", BH(opcode));
		operands = 1;
	    }
	    break;
	case 0x01400000:
	case 0x01600000:
	    /* decrement ctr branch if ctr zero and condition true */
	    if((opcode & 0xfc0007fe) == 0x4c000420)
		goto bc_general_default_form;
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "bdzt%s%s%s%s\t", name, LK(opcode), a, prediction);
	    if(CR_FIELD(opcode) != 0)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "cr%lu+", CR_FIELD(opcode));
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "%s", BC_TRUE(opcode));
	    operands = 1;
	    if(branch_to_register == TRUE && BH(opcode) != 0){
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ",%lu", BH(opcode));
		operands = 2;
	    }
	    break;
	case 0x00400000:
	case 0x00600000:
	    /* decrement ctr branch if ctr zero and condition false */
	    if((opcode & 0xfc0007fe) == 0x4c000420)
		goto bc_general_default_form;
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "bdzf%s%s%s%s\t", name, LK(opcode), a, prediction);
	    if(CR_FIELD(opcode) != 0)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "cr%lu+", CR_FIELD(opcode));
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "%s", BC_TRUE(opcode));
	    operands = 1;
	    if(branch_to_register == TRUE && BH(opcode) != 0){
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), ",%lu", BH(opcode));
		operands = 2;
	    }
	    break;
	case 0x02800000:
	    /* branch unconditionally */
	    if(Y_BIT(opcode) != 0 || RA(opcode) != 0)
		goto bc_general_default_form;
	    if(BH(opcode) != 0)
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "b%s%s%s\t%lu", name, LK(opcode), a, BH(opcode));
	    else
		snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "b%s%s%s", name, LK(opcode), a);
	    break;
	default:
bc_general_default_form:
	    if(RT(opcode) == 20){ /* branch always */
		if(branch_to_register == TRUE && BH(opcode) != 0){
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "bc%s%s%s\t%lu,%lu,%lu", name, LK(opcode), a,
			   RT(opcode), RA(opcode), BH(opcode));
		    operands = 3;
		}
		else{
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "bc%s%s%s\t%lu,%lu", name, LK(opcode), a,
			   RT(opcode), RA(opcode));
		    operands = 2;
		}
	    }
	    else{
		if(branch_to_register == TRUE && BH(opcode) != 0){
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "bc%s%s%s%s\t%lu,%lu,%lu", name, LK(opcode), a,
			   prediction, RT(opcode), RA(opcode), BH(opcode));
		    operands = 3;
		}
		else{
		    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "bc%s%s%s%s\t%lu,%lu", name, LK(opcode), a,
			   prediction, RT(opcode), RA(opcode));
		    operands = 2;
		}
	    }
	    break;
	}
	return(operands);
}

static
void
trap(
const char *name,
unsigned long opcode)
{
    char *i;

	if(((opcode & 0xfc000000) == 0x08000000) ||
	   ((opcode & 0xfc000000) == 0x0c000000))
	    i = "i";
	else
	    i = "";

	switch(opcode & 0x03e00000){
	case 0x02000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "t%slt%s\tr%lu,", name, i, RA(opcode));
	    break;
	case 0x02800000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "t%sle%s\tr%lu,", name, i, RA(opcode));
	    break;
	case 0x00800000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "t%seq%s\tr%lu,", name, i, RA(opcode));
	    break;
	case 0x01800000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "t%sge%s\tr%lu,", name, i, RA(opcode));
	    break;
	case 0x01000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "t%sgt%s\tr%lu,", name, i, RA(opcode));
	    break;
	case 0x03000000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "t%sne%s\tr%lu,", name, i, RA(opcode));
	    break;
	case 0x00400000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "t%sllt%s\tr%lu,", name, i, RA(opcode));
	    break;
	case 0x00c00000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "t%slle%s\tr%lu,", name, i, RA(opcode));
	    break;
	case 0x00a00000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "t%slge%s\tr%lu,", name, i, RA(opcode));
	    break;
	case 0x00200000:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "t%slgt%s\tr%lu,", name, i, RA(opcode));
	    break;
	default:
	    snprintf(exc_handler_ppc_disas + strlen(exc_handler_ppc_disas), sizeof(exc_handler_ppc_disas), "t%s%s\t%lu,r%lu,", name, i, TO(opcode), RA(opcode));
	    break;
	}
}

static
void
print_special_register_name(
unsigned opcode)
{
    unsigned long reg;

	reg = ((((opcode >> 11) & 0x1f) << 5) | ((opcode >> 16) & 0x1f));
	switch(reg){
	case 0:
	    strlcat(exc_handler_ppc_disas, "mq", sizeof(exc_handler_ppc_disas));
	    break;
	case 1:
	    strlcat(exc_handler_ppc_disas, "xer", sizeof(exc_handler_ppc_disas));
	    break;
	case 4:
	    strlcat(exc_handler_ppc_disas, "rtcu", sizeof(exc_handler_ppc_disas));
	    break;
	case 5:
	    strlcat(exc_handler_ppc_disas, "rtcl", sizeof(exc_handler_ppc_disas));
	    break;
	case 8:
	    strlcat(exc_handler_ppc_disas, "lr", sizeof(exc_handler_ppc_disas));
	    break;
	case 9:
	    strlcat(exc_handler_ppc_disas, "ctr", sizeof(exc_handler_ppc_disas));
	    break;
	case 18:
	    strlcat(exc_handler_ppc_disas, "dsisr", sizeof(exc_handler_ppc_disas));
	    break;
	case 19:
	    strlcat(exc_handler_ppc_disas, "dar", sizeof(exc_handler_ppc_disas));
	    break;
	case 22:
	    strlcat(exc_handler_ppc_disas, "dec", sizeof(exc_handler_ppc_disas));
	    break;
	case 25:
	    strlcat(exc_handler_ppc_disas, "sdr1", sizeof(exc_handler_ppc_disas));
	    break;
	case 26:
	    strlcat(exc_handler_ppc_disas, "srr0", sizeof(exc_handler_ppc_disas));
	    break;
	case 27:
	    strlcat(exc_handler_ppc_disas, "srr1", sizeof(exc_handler_ppc_disas));
	    break;
	case 256:
	    strlcat(exc_handler_ppc_disas, "VRsave", sizeof(exc_handler_ppc_disas));
	    break;
	case 272:
	    strlcat(exc_handler_ppc_disas, "sprg0", sizeof(exc_handler_ppc_disas));
	    break;
	case 273:
	    strlcat(exc_handler_ppc_disas, "sprg1", sizeof(exc_handler_ppc_disas));
	    break;
	case 274:
	    strlcat(exc_handler_ppc_disas, "sprg2", sizeof(exc_handler_ppc_disas));
	    break;
	case 275:
	    strlcat(exc_handler_ppc_disas, "sprg3", sizeof(exc_handler_ppc_disas));
	    break;
	case 280:
	    strlcat(exc_handler_ppc_disas, "asr", sizeof(exc_handler_ppc_disas));
	    break;
	case 281:
	    strlcat(exc_handler_ppc_disas, "rtcd", sizeof(exc_handler_ppc_disas));
	    break;
	case 282:
	    strlcat(exc_handler_ppc_disas, "rtci", sizeof(exc_handler_ppc_disas));
	    break;
	case 284:
	    strlcat(exc_handler_ppc_disas, "tbl", sizeof(exc_handler_ppc_disas));
	    break;
	case 285:
	    strlcat(exc_handler_ppc_disas, "tbu", sizeof(exc_handler_ppc_disas));
	    break;
	case 287:
	    strlcat(exc_handler_ppc_disas, "pvr", sizeof(exc_handler_ppc_disas));
	    break;
	case 528:
	    strlcat(exc_handler_ppc_disas, "ibat0u", sizeof(exc_handler_ppc_disas));
	    break;
	case 529:
	    strlcat(exc_handler_ppc_disas, "ibat0l", sizeof(exc_handler_ppc_disas));
	    break;
	case 530:
	    strlcat(exc_handler_ppc_disas, "ibat1u", sizeof(exc_handler_ppc_disas));
	    break;
	case 531:
	    strlcat(exc_handler_ppc_disas, "ibat1l", sizeof(exc_handler_ppc_disas));
	    break;
	case 532:
	    strlcat(exc_handler_ppc_disas, "ibat2u", sizeof(exc_handler_ppc_disas));
	    break;
	case 533:
	    strlcat(exc_handler_ppc_disas, "ibat2l", sizeof(exc_handler_ppc_disas));
	    break;
	case 534:
	    strlcat(exc_handler_ppc_disas, "ibat3u", sizeof(exc_handler_ppc_disas));
	    break;
	case 535:
	    strlcat(exc_handler_ppc_disas, "ibat3l", sizeof(exc_handler_ppc_disas));
	    break;
	case 536:
	    strlcat(exc_handler_ppc_disas, "dbat0u", sizeof(exc_handler_ppc_disas));
	    break;
	case 537:
	    strlcat(exc_handler_ppc_disas, "dbat0l", sizeof(exc_handler_ppc_disas));
	    break;
	case 538:
	    strlcat(exc_handler_ppc_disas, "dbat1u", sizeof(exc_handler_ppc_disas));
	    break;
	case 539:
	    strlcat(exc_handler_ppc_disas, "dbat1l", sizeof(exc_handler_ppc_disas));
	    break;
	case 540:
	    strlcat(exc_handler_ppc_disas, "dbat2u", sizeof(exc_handler_ppc_disas));
	    break;
	case 541:
	    strlcat(exc_handler_ppc_disas, "dbat2l", sizeof(exc_handler_ppc_disas));
	    break;
	case 542:
	    strlcat(exc_handler_ppc_disas, "dbat3u", sizeof(exc_handler_ppc_disas));
	    break;
	case 543:
	    strlcat(exc_handler_ppc_disas, "dbat3l", sizeof(exc_handler_ppc_disas));
	    break;
	case 936:
	    strlcat(exc_handler_ppc_disas, "ummcr0", sizeof(exc_handler_ppc_disas));
	    break;
	case 937:
	    strlcat(exc_handler_ppc_disas, "upmc1", sizeof(exc_handler_ppc_disas));
	    break;
	case 938:
	    strlcat(exc_handler_ppc_disas, "upmc2", sizeof(exc_handler_ppc_disas));
	    break;
	case 939:
	    strlcat(exc_handler_ppc_disas, "usia", sizeof(exc_handler_ppc_disas));
	    break;
	case 940:
	    strlcat(exc_handler_ppc_disas, "ummcr1", sizeof(exc_handler_ppc_disas));
	    break;
	case 941:
	    strlcat(exc_handler_ppc_disas, "upmc3", sizeof(exc_handler_ppc_disas));
	    break;
	case 942:
	    strlcat(exc_handler_ppc_disas, "upmc4", sizeof(exc_handler_ppc_disas));
	    break;
	case 952:
	    strlcat(exc_handler_ppc_disas, "mmcr0", sizeof(exc_handler_ppc_disas));
	    break;
	case 953:
	    strlcat(exc_handler_ppc_disas, "pmc1", sizeof(exc_handler_ppc_disas));
	    break;
	case 954:
	    strlcat(exc_handler_ppc_disas, "pmc2", sizeof(exc_handler_ppc_disas));
	    break;
	case 955:
	    strlcat(exc_handler_ppc_disas, "sia", sizeof(exc_handler_ppc_disas));
	    break;
	case 956:
	    strlcat(exc_handler_ppc_disas, "mmcr1", sizeof(exc_handler_ppc_disas));
	    break;
	case 957:
	    strlcat(exc_handler_ppc_disas, "pmc3", sizeof(exc_handler_ppc_disas));
	    break;
	case 958:
	    strlcat(exc_handler_ppc_disas, "pmc4", sizeof(exc_handler_ppc_disas));
	    break;
	case 959:
	    strlcat(exc_handler_ppc_disas, "sda", sizeof(exc_handler_ppc_disas));
	    break;
	case 976:
	    strlcat(exc_handler_ppc_disas, "dmiss", sizeof(exc_handler_ppc_disas));
	    break;
	case 977:
	    strlcat(exc_handler_ppc_disas, "dcmp", sizeof(exc_handler_ppc_disas));
	    break;
	case 978:
	    strlcat(exc_handler_ppc_disas, "hash1", sizeof(exc_handler_ppc_disas));
	    break;
	case 979:
	    strlcat(exc_handler_ppc_disas, "hash2", sizeof(exc_handler_ppc_disas));
	    break;
	case 980:
	    strlcat(exc_handler_ppc_disas, "imiss", sizeof(exc_handler_ppc_disas));
	    break;
	case 981:
	    strlcat(exc_handler_ppc_disas, "icmp", sizeof(exc_handler_ppc_disas));
	    break;
	case 982:
	    strlcat(exc_handler_ppc_disas, "rpa", sizeof(exc_handler_ppc_disas));
	    break;
	case 1008:
	    strlcat(exc_handler_ppc_disas, "hid0", sizeof(exc_handler_ppc_disas));
	    break;
	case 1009:
	    strlcat(exc_handler_ppc_disas, "hid1", sizeof(exc_handler_ppc_disas));
	    break;
	case 1010:
	    strlcat(exc_handler_ppc_disas, "hid2", sizeof(exc_handler_ppc_disas));
	    break;
	case 1013:
	    strlcat(exc_handler_ppc_disas, "dabr", sizeof(exc_handler_ppc_disas));
	    break;
	case 1017:
	    strlcat(exc_handler_ppc_disas, "l2cr", sizeof(exc_handler_ppc_disas));
	    break;
	case 1019:
	    strlcat(exc_handler_ppc_disas, "ictc", sizeof(exc_handler_ppc_disas));
	    break;
	case 1020:
	    strlcat(exc_handler_ppc_disas, "thrm1", sizeof(exc_handler_ppc_disas));
	    break;
	case 1021:
	    strlcat(exc_handler_ppc_disas, "thrm2", sizeof(exc_handler_ppc_disas));
	    break;
	case 1022:
	    strlcat(exc_handler_ppc_disas, "thrm3", sizeof(exc_handler_ppc_disas));
	    break;
	case 1023:
	    strlcat(exc_handler_ppc_disas, "pir", sizeof(exc_handler_ppc_disas));
	    break;
	default:
	    strlcat(exc_handler_ppc_disas, "%lu", reg);
	}
}



static void print_immediate(
							unsigned long value, 
							unsigned long sect_offset,
							struct relocation_info *sorted_relocs,
							unsigned long nsorted_relocs,
							nlist_t *symbols,
							unsigned long nsymbols,
							int *sorted_symbols,
							unsigned long nsorted_symbols,
							char *strings,
							unsigned long strings_size,
							int verbose)

{
}

/*
 * To handle the jsbr type instruction, we have to search for a reloc
 * of type PPC_RELOC_JBSR whenever a bl type instruction is encountered.
 * If such a reloc type exists at the correct pc, then we have to print out
 * jbsr instead of bl.  This routine uses the logic from above to loop though
 * the relocs and give the r_type for the particular address.
 */
static
unsigned long
get_reloc_r_type(
unsigned long pc,
struct relocation_info *relocs,
unsigned long nrelocs)
{/*
    unsigned long i;
    struct relocation_info *rp;
    unsigned long r_type, r_address;
  
	for(i = 0; i < nrelocs; i++){
	    rp = &relocs[i];
	    if(rp->r_address & R_SCATTERED){
		r_type = ((struct scattered_relocation_info *)rp)->r_type;
		r_address = ((struct scattered_relocation_info *)rp)->r_address;
	    }
	    else{
		r_type = rp->r_type;
		r_address = rp->r_address;
	    }
	    if(r_type == PPC_RELOC_PAIR)
		continue;
	    if(r_address == pc)
		return(r_type);
	}*/
	return(0xffffffff);
}

/*
 * For branch conditional instructions that use the Y-bit that were
 * predicted the r_length is set to 3 instead of 2.  So to correctly
 * print the prediction, we have to search for a reloc of and look at
 * the r_length.  If there is a reloc at the pc of the branch, and if the
 * r_length is 3 it then we know it was a predicted branch and we will always
 * print the prediction based on the Y-bit, the sign of the displacement
 * or the opcode (in the case of bclrX and bcctrX instructions). This routine
 * uses the logic from the above routine to loop though the relocs and give the
 * r_length for the particular address.
 */
static
unsigned long
get_reloc_r_length(
unsigned long sect_offset,
struct relocation_info *relocs,
unsigned long nrelocs)
{
	/*
    unsigned long i;
    struct relocation_info *rp;
    unsigned long r_length, r_address, r_type;
  
	for(i = 0; i < nrelocs; i++){
	    rp = &relocs[i];
	    if(rp->r_address & R_SCATTERED){
		r_type = ((struct scattered_relocation_info *)rp)->r_type;
		r_length = ((struct scattered_relocation_info *)rp)->r_length;
		r_address = ((struct scattered_relocation_info *)rp)->r_address;
	    }
	    else{
		r_type = rp->r_type;
		r_length = rp->r_length;
		r_address = rp->r_address;
	    }
	    if(r_type == PPC_RELOC_PAIR)
		continue;
	    if(r_address == sect_offset)
		return(r_length);
	}*/
	return(0xffffffff);
}
