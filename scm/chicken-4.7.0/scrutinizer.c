/* Generated from scrutinizer.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-05-24 18:19
   Version 4.6.7 
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2011-05-24 on debian (Linux)
   command line: scrutinizer.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -no-lambda-info -local -no-trace -extend private-namespace.scm -no-trace -output-file scrutinizer.c
   unit: scrutinizer
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[188];
static double C_possibly_force_alignment;


C_noret_decl(C_scrutinizer_toplevel)
C_externexport void C_ccall C_scrutinizer_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1524)
static void C_ccall f_1524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1527)
static void C_ccall f_1527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5783)
static void C_ccall f_5783(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5783)
static void C_ccall f_5783r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5787)
static void C_ccall f_5787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5902)
static void C_ccall f_5902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5790)
static void C_ccall f_5790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5889)
static void C_ccall f_5889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5892)
static void C_ccall f_5892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5895)
static void C_ccall f_5895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5796)
static void C_ccall f_5796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5857)
static void C_ccall f_5857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5865)
static void C_fcall f_5865(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5804)
static void C_ccall f_5804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5816)
static void C_fcall f_5816(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5823)
static void C_ccall f_5823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5826)
static void C_ccall f_5826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5829)
static void C_ccall f_5829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5832)
static void C_ccall f_5832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5835)
static void C_ccall f_5835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5838)
static void C_ccall f_5838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5841)
static void C_ccall f_5841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5844)
static void C_ccall f_5844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5847)
static void C_ccall f_5847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5810)
static void C_ccall f_5810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5875)
static void C_ccall f_5875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1547)
static void C_ccall f_1547(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4969)
static void C_fcall f_4969(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5732)
static void C_fcall f_5732(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5742)
static void C_ccall f_5742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5730)
static void C_ccall f_5730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5720)
static void C_fcall f_5720(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5585)
static void C_ccall f_5585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5638)
static void C_ccall f_5638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5656)
static void C_fcall f_5656(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5689)
static void C_ccall f_5689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5669)
static void C_fcall f_5669(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5647)
static void C_ccall f_5647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5586)
static void C_fcall f_5586(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5594)
static void C_ccall f_5594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5597)
static void C_ccall f_5597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5626)
static void C_ccall f_5626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5629)
static void C_ccall f_5629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5632)
static void C_ccall f_5632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5620)
static void C_ccall f_5620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5600)
static void C_ccall f_5600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5603)
static void C_ccall f_5603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5606)
static void C_ccall f_5606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5609)
static void C_ccall f_5609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5612)
static void C_ccall f_5612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5616)
static void C_ccall f_5616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5461)
static void C_ccall f_5461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5547)
static void C_ccall f_5547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5550)
static void C_ccall f_5550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5553)
static void C_ccall f_5553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5556)
static void C_ccall f_5556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5559)
static void C_ccall f_5559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5563)
static void C_ccall f_5563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5464)
static void C_ccall f_5464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5539)
static void C_ccall f_5539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5489)
static void C_fcall f_5489(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5496)
static void C_ccall f_5496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5499)
static void C_ccall f_5499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5502)
static void C_ccall f_5502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5505)
static void C_ccall f_5505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5508)
static void C_ccall f_5508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5511)
static void C_ccall f_5511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5514)
static void C_ccall f_5514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5517)
static void C_ccall f_5517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5520)
static void C_ccall f_5520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5470)
static void C_ccall f_5470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5343)
static void C_ccall f_5343(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5439)
static void C_ccall f_5439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5350)
static void C_ccall f_5350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5391)
static void C_ccall f_5391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5399)
static void C_fcall f_5399(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5397)
static void C_ccall f_5397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5353)
static void C_ccall f_5353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5375)
static void C_ccall f_5375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5379)
static void C_ccall f_5379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5356)
static void C_ccall f_5356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5363)
static void C_ccall f_5363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5249)
static void C_fcall f_5249(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5293)
static void C_ccall f_5293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5296)
static void C_ccall f_5296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5321)
static void C_ccall f_5321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5299)
static void C_ccall f_5299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5302)
static void C_ccall f_5302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5305)
static void C_ccall f_5305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5309)
static void C_ccall f_5309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5270)
static void C_ccall f_5270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5285)
static void C_ccall f_5285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5267)
static void C_ccall f_5267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5234)
static void C_ccall f_5234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5064)
static void C_ccall f_5064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5073)
static void C_ccall f_5073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5076)
static void C_ccall f_5076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5079)
static void C_ccall f_5079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5085)
static void C_fcall f_5085(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5216)
static void C_ccall f_5216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5212)
static void C_ccall f_5212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5158)
static void C_fcall f_5158(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5165)
static void C_ccall f_5165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5168)
static void C_ccall f_5168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5171)
static void C_ccall f_5171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5174)
static void C_ccall f_5174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5184)
static void C_ccall f_5184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5177)
static void C_ccall f_5177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5180)
static void C_ccall f_5180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5088)
static void C_ccall f_5088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5108)
static void C_fcall f_5108(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5141)
static void C_ccall f_5141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5121)
static void C_fcall f_5121(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5089)
static void C_fcall f_5089(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4877)
static void C_fcall f_4877(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4958)
static void C_ccall f_4958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4845)
static void C_ccall f_4845(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4574)
static void C_fcall f_4574(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4584)
static void C_fcall f_4584(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4607)
static void C_fcall f_4607(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4609)
static void C_fcall f_4609(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4681)
static void C_ccall f_4681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4639)
static void C_fcall f_4639(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4600)
static void C_ccall f_4600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4591)
static void C_ccall f_4591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4532)
static void C_ccall f_4532(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4201)
static void C_fcall f_4201(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4526)
static void C_ccall f_4526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4522)
static void C_ccall f_4522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4518)
static void C_ccall f_4518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4476)
static void C_fcall f_4476(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4483)
static void C_ccall f_4483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4508)
static void C_ccall f_4508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4486)
static void C_ccall f_4486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4489)
static void C_ccall f_4489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4492)
static void C_ccall f_4492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4495)
static void C_ccall f_4495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4498)
static void C_ccall f_4498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4501)
static void C_ccall f_4501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4504)
static void C_ccall f_4504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4281)
static void C_ccall f_4281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4300)
static void C_ccall f_4300(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4427)
static void C_ccall f_4427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4469)
static void C_ccall f_4469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4430)
static void C_ccall f_4430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4433)
static void C_ccall f_4433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4436)
static void C_ccall f_4436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4439)
static void C_ccall f_4439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4442)
static void C_ccall f_4442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4445)
static void C_ccall f_4445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4448)
static void C_ccall f_4448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4451)
static void C_ccall f_4451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4454)
static void C_ccall f_4454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4457)
static void C_ccall f_4457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4307)
static void C_ccall f_4307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4326)
static void C_fcall f_4326(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4357)
static void C_ccall f_4357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4364)
static void C_ccall f_4364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4403)
static void C_ccall f_4403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4367)
static void C_ccall f_4367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4370)
static void C_ccall f_4370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4373)
static void C_ccall f_4373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4376)
static void C_ccall f_4376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4379)
static void C_ccall f_4379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4382)
static void C_ccall f_4382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4385)
static void C_ccall f_4385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4388)
static void C_ccall f_4388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4391)
static void C_ccall f_4391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4339)
static void C_ccall f_4339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4310)
static void C_ccall f_4310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4769)
static void C_ccall f_4769(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4777)
static void C_fcall f_4777(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4779)
static void C_fcall f_4779(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4806)
static void C_ccall f_4806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4286)
static void C_ccall f_4286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4204)
static void C_fcall f_4204(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4208)
static void C_ccall f_4208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4234)
static void C_fcall f_4234(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4237)
static void C_ccall f_4237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4243)
static void C_ccall f_4243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4246)
static void C_ccall f_4246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4249)
static void C_ccall f_4249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4231)
static void C_ccall f_4231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4211)
static void C_ccall f_4211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4214)
static void C_ccall f_4214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4227)
static void C_ccall f_4227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4217)
static void C_ccall f_4217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4220)
static void C_ccall f_4220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4181)
static void C_fcall f_4181(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4191)
static void C_ccall f_4191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4199)
static void C_ccall f_4199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4189)
static void C_ccall f_4189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4091)
static void C_fcall f_4091(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4095)
static void C_ccall f_4095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4100)
static void C_fcall f_4100(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4175)
static void C_ccall f_4175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4130)
static void C_ccall f_4130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4138)
static void C_fcall f_4138(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4167)
static void C_ccall f_4167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4123)
static void C_fcall f_4123(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3970)
static void C_fcall f_3970(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4036)
static void C_fcall f_4036(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4049)
static void C_ccall f_4049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4052)
static void C_ccall f_4052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4076)
static void C_ccall f_4076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4055)
static void C_ccall f_4055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4058)
static void C_ccall f_4058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4068)
static void C_ccall f_4068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4061)
static void C_ccall f_4061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4011)
static void C_ccall f_4011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4014)
static void C_ccall f_4014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4027)
static void C_ccall f_4027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4017)
static void C_ccall f_4017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4020)
static void C_ccall f_4020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3973)
static void C_fcall f_3973(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3980)
static void C_ccall f_3980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3983)
static void C_ccall f_3983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3996)
static void C_ccall f_3996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3986)
static void C_ccall f_3986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3989)
static void C_ccall f_3989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3956)
static void C_fcall f_3956(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3968)
static void C_ccall f_3968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3964)
static void C_ccall f_3964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3875)
static void C_fcall f_3875(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3929)
static void C_ccall f_3929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3932)
static void C_ccall f_3932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3935)
static void C_ccall f_3935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3938)
static void C_ccall f_3938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3941)
static void C_ccall f_3941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3944)
static void C_ccall f_3944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3947)
static void C_ccall f_3947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3950)
static void C_ccall f_3950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3922)
static void C_ccall f_3922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3907)
static void C_ccall f_3907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3910)
static void C_ccall f_3910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3913)
static void C_ccall f_3913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3916)
static void C_ccall f_3916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3919)
static void C_ccall f_3919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3903)
static void C_ccall f_3903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3551)
static void C_fcall f_3551(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3658)
static void C_fcall f_3658(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3793)
static void C_ccall f_3793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3679)
static void C_fcall f_3679(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3707)
static void C_ccall f_3707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3627)
static void C_ccall f_3627(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3496)
static void C_fcall f_3496(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3530)
static void C_ccall f_3530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3286)
static void C_fcall f_3286(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3351)
static void C_fcall f_3351(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3459)
static void C_ccall f_3459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3292)
static void C_fcall f_3292(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3310)
static void C_ccall f_3310(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3336)
static void C_ccall f_3336(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3317)
static void C_ccall f_3317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3298)
static void C_ccall f_3298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3304)
static void C_ccall f_3304(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3014)
static void C_fcall f_3014(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3101)
static void C_fcall f_3101(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3120)
static void C_fcall f_3120(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3157)
static void C_fcall f_3157(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3184)
static void C_ccall f_3184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3125)
static void C_ccall f_3125(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3106)
static void C_ccall f_3106(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3005)
static void C_fcall f_3005(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2947)
static void C_fcall f_2947(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2976)
static void C_ccall f_2976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2980)
static void C_ccall f_2980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2777)
static void C_fcall f_2777(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2913)
static void C_ccall f_2913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2917)
static void C_ccall f_2917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2861)
static void C_fcall f_2861(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2872)
static void C_ccall f_2872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2876)
static void C_ccall f_2876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2812)
static void C_fcall f_2812(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2755)
static C_word C_fcall f_2755(C_word t0);
C_noret_decl(f_2715)
static C_word C_fcall f_2715(C_word t0);
C_noret_decl(f_2246)
static void C_fcall f_2246(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2252)
static void C_ccall f_2252(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2659)
static void C_fcall f_2659(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2688)
static void C_ccall f_2688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2657)
static void C_ccall f_2657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2614)
static void C_fcall f_2614(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2643)
static void C_ccall f_2643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2603)
static void C_ccall f_2603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2287)
static void C_ccall f_2287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2529)
static void C_ccall f_2529(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2533)
static void C_ccall f_2533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2539)
static void C_fcall f_2539(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2401)
static void C_ccall f_2401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2439)
static void C_fcall f_2439(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2511)
static void C_ccall f_2511(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2464)
static void C_ccall f_2464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2501)
static void C_ccall f_2501(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2477)
static void C_ccall f_2477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2404)
static void C_ccall f_2404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2429)
static void C_ccall f_2429(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2427)
static void C_ccall f_2427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2390)
static void C_ccall f_2390(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2293)
static void C_ccall f_2293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2298)
static void C_ccall f_2298(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2324)
static void C_fcall f_2324(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2336)
static void C_ccall f_2336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2332)
static void C_ccall f_2332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2237)
static void C_fcall f_2237(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2147)
static void C_fcall f_2147(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2169)
static void C_ccall f_2169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2172)
static void C_ccall f_2172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2175)
static void C_ccall f_2175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2178)
static void C_ccall f_2178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2181)
static void C_ccall f_2181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2184)
static void C_ccall f_2184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2187)
static void C_ccall f_2187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2202)
static void C_fcall f_2202(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2231)
static void C_ccall f_2231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2200)
static void C_ccall f_2200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2190)
static void C_ccall f_2190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2063)
static void C_fcall f_2063(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2079)
static void C_ccall f_2079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2082)
static void C_ccall f_2082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2085)
static void C_ccall f_2085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2088)
static void C_ccall f_2088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2091)
static void C_ccall f_2091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2094)
static void C_ccall f_2094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2097)
static void C_ccall f_2097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2112)
static void C_fcall f_2112(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2141)
static void C_ccall f_2141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2110)
static void C_ccall f_2110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2100)
static void C_ccall f_2100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1881)
static void C_fcall f_1881(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2042)
static void C_ccall f_2042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2045)
static void C_ccall f_2045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2048)
static void C_ccall f_2048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2000)
static void C_fcall f_2000(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2029)
static void C_ccall f_2029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1998)
static void C_ccall f_1998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1927)
static void C_fcall f_1927(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1937)
static void C_ccall f_1937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1940)
static void C_ccall f_1940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1964)
static void C_ccall f_1964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1943)
static void C_ccall f_1943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1946)
static void C_ccall f_1946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1956)
static void C_ccall f_1956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1949)
static void C_ccall f_1949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1840)
static void C_fcall f_1840(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1844)
static void C_ccall f_1844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1854)
static void C_ccall f_1854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1857)
static void C_ccall f_1857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1860)
static void C_ccall f_1860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1863)
static void C_ccall f_1863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1866)
static void C_ccall f_1866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1869)
static void C_ccall f_1869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1879)
static void C_ccall f_1879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1872)
static void C_ccall f_1872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1875)
static void C_ccall f_1875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1847)
static void C_ccall f_1847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1808)
static void C_ccall f_1808(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1815)
static void C_fcall f_1815(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1735)
static void C_fcall f_1735(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1799)
static void C_ccall f_1799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1806)
static void C_ccall f_1806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1742)
static void C_fcall f_1742(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1749)
static void C_fcall f_1749(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1763)
static void C_ccall f_1763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1766)
static void C_ccall f_1766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1779)
static void C_ccall f_1779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1769)
static void C_ccall f_1769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1772)
static void C_ccall f_1772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1775)
static void C_ccall f_1775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1759)
static void C_ccall f_1759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1648)
static void C_fcall f_1648(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1652)
static void C_ccall f_1652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1656)
static void C_fcall f_1656(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1688)
static void C_fcall f_1688(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1695)
static void C_ccall f_1695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1698)
static void C_ccall f_1698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1701)
static void C_ccall f_1701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1704)
static void C_ccall f_1704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1707)
static void C_ccall f_1707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1710)
static void C_ccall f_1710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1713)
static void C_ccall f_1713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1691)
static void C_ccall f_1691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1670)
static void C_ccall f_1670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1673)
static void C_ccall f_1673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1676)
static void C_ccall f_1676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1679)
static void C_ccall f_1679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1682)
static void C_ccall f_1682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1666)
static void C_ccall f_1666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1529)
static void C_ccall f_1529(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1529)
static void C_ccall f_1529r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1539)
static void C_ccall f_1539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1542)
static void C_ccall f_1542(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_5865)
static void C_fcall trf_5865(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5865(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5865(t0,t1,t2);}

C_noret_decl(trf_5816)
static void C_fcall trf_5816(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5816(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5816(t0,t1);}

C_noret_decl(trf_4969)
static void C_fcall trf_4969(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4969(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_4969(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_5732)
static void C_fcall trf_5732(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5732(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5732(t0,t1,t2);}

C_noret_decl(trf_5720)
static void C_fcall trf_5720(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5720(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5720(t0,t1,t2);}

C_noret_decl(trf_5656)
static void C_fcall trf_5656(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5656(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5656(t0,t1,t2,t3);}

C_noret_decl(trf_5669)
static void C_fcall trf_5669(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5669(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5669(t0,t1);}

C_noret_decl(trf_5586)
static void C_fcall trf_5586(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5586(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5586(t0,t1,t2,t3);}

C_noret_decl(trf_5489)
static void C_fcall trf_5489(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5489(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5489(t0,t1);}

C_noret_decl(trf_5399)
static void C_fcall trf_5399(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5399(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5399(t0,t1,t2);}

C_noret_decl(trf_5249)
static void C_fcall trf_5249(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5249(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5249(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5085)
static void C_fcall trf_5085(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5085(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5085(t0,t1);}

C_noret_decl(trf_5158)
static void C_fcall trf_5158(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5158(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5158(t0,t1);}

C_noret_decl(trf_5108)
static void C_fcall trf_5108(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5108(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5108(t0,t1,t2,t3);}

C_noret_decl(trf_5121)
static void C_fcall trf_5121(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5121(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5121(t0,t1);}

C_noret_decl(trf_5089)
static void C_fcall trf_5089(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5089(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5089(t0,t1,t2,t3);}

C_noret_decl(trf_4877)
static void C_fcall trf_4877(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4877(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4877(t0,t1,t2,t3);}

C_noret_decl(trf_4574)
static void C_fcall trf_4574(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4574(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4574(t0,t1,t2,t3);}

C_noret_decl(trf_4584)
static void C_fcall trf_4584(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4584(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4584(t0,t1);}

C_noret_decl(trf_4607)
static void C_fcall trf_4607(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4607(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4607(t0,t1);}

C_noret_decl(trf_4609)
static void C_fcall trf_4609(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4609(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4609(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4639)
static void C_fcall trf_4639(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4639(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4639(t0,t1);}

C_noret_decl(trf_4201)
static void C_fcall trf_4201(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4201(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_4201(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4476)
static void C_fcall trf_4476(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4476(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4476(t0,t1);}

C_noret_decl(trf_4326)
static void C_fcall trf_4326(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4326(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4326(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4777)
static void C_fcall trf_4777(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4777(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4777(t0,t1);}

C_noret_decl(trf_4779)
static void C_fcall trf_4779(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4779(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4779(t0,t1,t2);}

C_noret_decl(trf_4204)
static void C_fcall trf_4204(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4204(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4204(t0,t1);}

C_noret_decl(trf_4234)
static void C_fcall trf_4234(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4234(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4234(t0,t1);}

C_noret_decl(trf_4181)
static void C_fcall trf_4181(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4181(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4181(t0,t1,t2);}

C_noret_decl(trf_4091)
static void C_fcall trf_4091(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4091(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4091(t0,t1);}

C_noret_decl(trf_4100)
static void C_fcall trf_4100(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4100(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4100(t0,t1,t2,t3);}

C_noret_decl(trf_4138)
static void C_fcall trf_4138(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4138(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4138(t0,t1,t2);}

C_noret_decl(trf_4123)
static void C_fcall trf_4123(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4123(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4123(t0,t1,t2);}

C_noret_decl(trf_3970)
static void C_fcall trf_3970(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3970(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3970(t0,t1,t2);}

C_noret_decl(trf_4036)
static void C_fcall trf_4036(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4036(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4036(t0,t1,t2);}

C_noret_decl(trf_3973)
static void C_fcall trf_3973(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3973(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3973(t0,t1);}

C_noret_decl(trf_3956)
static void C_fcall trf_3956(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3956(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3956(t0,t1,t2,t3);}

C_noret_decl(trf_3875)
static void C_fcall trf_3875(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3875(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3875(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3551)
static void C_fcall trf_3551(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3551(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3551(t0,t1,t2,t3);}

C_noret_decl(trf_3658)
static void C_fcall trf_3658(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3658(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3658(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3679)
static void C_fcall trf_3679(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3679(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3679(t0,t1,t2,t3);}

C_noret_decl(trf_3496)
static void C_fcall trf_3496(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3496(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3496(t0,t1,t2,t3);}

C_noret_decl(trf_3286)
static void C_fcall trf_3286(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3286(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3286(t0,t1,t2,t3);}

C_noret_decl(trf_3351)
static void C_fcall trf_3351(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3351(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3351(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3292)
static void C_fcall trf_3292(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3292(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3292(t0,t1,t2,t3);}

C_noret_decl(trf_3014)
static void C_fcall trf_3014(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3014(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3014(t0,t1,t2,t3);}

C_noret_decl(trf_3101)
static void C_fcall trf_3101(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3101(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3101(t0,t1);}

C_noret_decl(trf_3120)
static void C_fcall trf_3120(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3120(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3120(t0,t1);}

C_noret_decl(trf_3157)
static void C_fcall trf_3157(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3157(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3157(t0,t1);}

C_noret_decl(trf_3005)
static void C_fcall trf_3005(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3005(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3005(t0,t1,t2,t3);}

C_noret_decl(trf_2947)
static void C_fcall trf_2947(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2947(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2947(t0,t1,t2,t3);}

C_noret_decl(trf_2777)
static void C_fcall trf_2777(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2777(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2777(t0,t1,t2,t3);}

C_noret_decl(trf_2861)
static void C_fcall trf_2861(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2861(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2861(t0,t1);}

C_noret_decl(trf_2812)
static void C_fcall trf_2812(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2812(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2812(t0,t1);}

C_noret_decl(trf_2246)
static void C_fcall trf_2246(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2246(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2246(t0,t1,t2);}

C_noret_decl(trf_2659)
static void C_fcall trf_2659(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2659(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2659(t0,t1,t2);}

C_noret_decl(trf_2614)
static void C_fcall trf_2614(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2614(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2614(t0,t1,t2);}

C_noret_decl(trf_2539)
static void C_fcall trf_2539(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2539(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2539(t0,t1);}

C_noret_decl(trf_2439)
static void C_fcall trf_2439(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2439(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2439(t0,t1,t2,t3);}

C_noret_decl(trf_2324)
static void C_fcall trf_2324(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2324(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2324(t0,t1);}

C_noret_decl(trf_2237)
static void C_fcall trf_2237(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2237(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2237(t0,t1,t2);}

C_noret_decl(trf_2147)
static void C_fcall trf_2147(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2147(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2147(t0,t1,t2);}

C_noret_decl(trf_2202)
static void C_fcall trf_2202(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2202(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2202(t0,t1,t2);}

C_noret_decl(trf_2063)
static void C_fcall trf_2063(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2063(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2063(t0,t1,t2);}

C_noret_decl(trf_2112)
static void C_fcall trf_2112(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2112(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2112(t0,t1,t2);}

C_noret_decl(trf_1881)
static void C_fcall trf_1881(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1881(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1881(t0,t1,t2);}

C_noret_decl(trf_2000)
static void C_fcall trf_2000(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2000(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2000(t0,t1,t2);}

C_noret_decl(trf_1927)
static void C_fcall trf_1927(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1927(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1927(t0,t1);}

C_noret_decl(trf_1840)
static void C_fcall trf_1840(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1840(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1840(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1815)
static void C_fcall trf_1815(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1815(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1815(t0,t1);}

C_noret_decl(trf_1735)
static void C_fcall trf_1735(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1735(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1735(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1742)
static void C_fcall trf_1742(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1742(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1742(t0,t1);}

C_noret_decl(trf_1749)
static void C_fcall trf_1749(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1749(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1749(t0,t1,t2);}

C_noret_decl(trf_1648)
static void C_fcall trf_1648(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1648(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1648(t0,t1,t2,t3);}

C_noret_decl(trf_1656)
static void C_fcall trf_1656(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1656(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1656(t0,t1,t2);}

C_noret_decl(trf_1688)
static void C_fcall trf_1688(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1688(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1688(t0,t1);}

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

C_noret_decl(tr5)
static void C_fcall tr5(C_proc5 k) C_regparm C_noret;
C_regparm static void C_fcall tr5(C_proc5 k){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
(k)(5,t0,t1,t2,t3,t4);}

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

C_noret_decl(tr3r)
static void C_fcall tr3r(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3r(C_proc3 k){
int n;
C_word *a,t3;
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
n=C_rest_count(0);
a=C_alloc(n*3);
t3=C_restore_rest(a,n);
(k)(t0,t1,t2,t3);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_scrutinizer_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_scrutinizer_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("scrutinizer_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1421)){
C_save(t1);
C_rereclaim2(1421*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,188);
lf[0]=C_h_intern(&lf[0],1,"d");
lf[1]=C_h_intern(&lf[1],19,"\003sysstandard-output");
lf[2]=C_h_intern(&lf[2],19,"\003syswrite-char/port");
lf[3]=C_h_intern(&lf[3],7,"fprintf");
lf[4]=C_h_intern(&lf[4],7,"display");
lf[5]=C_decode_literal(C_heaptop,"\376B\000\000\010[debug] ");
lf[6]=C_h_intern(&lf[6],19,"\010compilerscrutinize");
lf[7]=C_h_intern(&lf[7],10,"deprecated");
lf[8]=C_h_intern(&lf[8],1,"*");
lf[9]=C_h_intern(&lf[9],17,"get-output-string");
lf[10]=C_decode_literal(C_heaptop,"\376B\000\000%use of deprecated library procedure `");
lf[11]=C_h_intern(&lf[11],18,"open-output-string");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\000\011\047 instead");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\024\047 - consider using `");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000%use of deprecated library procedure `");
lf[15]=C_h_intern(&lf[15],7,"\003sysget");
lf[16]=C_h_intern(&lf[16],9,"\004coretype");
lf[17]=C_h_intern(&lf[17],9,"undefined");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000\036\047 which has an undefined value");
lf[19]=C_h_intern(&lf[19],18,"\010compilerreal-name");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000\024access to variable `");
lf[21]=C_h_intern(&lf[21],18,"\004coredeclared-type");
lf[22]=C_h_intern(&lf[22],12,"\010compilerget");
lf[23]=C_h_intern(&lf[23],8,"assigned");
lf[24]=C_h_intern(&lf[24],5,"every");
lf[25]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001*\376\003\000\000\002\376\001\000\000\007boolean\376\003\000\000\002\376\001\000\000\011undefined\376\003\000\000\002\376\001\000\000\010noreturn\376\377\016");
lf[26]=C_h_intern(&lf[26],2,"or");
lf[27]=C_decode_literal(C_heaptop,"\376B\000\000\027\047 which is always true:");
lf[28]=C_decode_literal(C_heaptop,"\376B\000\000Nexpected value of type boolean in conditional but were given a value of\012typ"
"e `");
lf[29]=C_decode_literal(C_heaptop,"\376B\000\000\010anything");
lf[30]=C_h_intern(&lf[30],4,"char");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\000\011character");
lf[32]=C_h_intern(&lf[32],14,"symbol->string");
lf[33]=C_h_intern(&lf[33],9,"procedure");
lf[34]=C_h_intern(&lf[34],8,"->string");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\013 returning ");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\021a procedure with ");
lf[37]=C_h_intern(&lf[37],3,"map");
lf[38]=C_h_intern(&lf[38],18,"string-intersperse");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\004 OR ");
lf[40]=C_h_intern(&lf[40],6,"struct");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\024a structure of type ");
lf[42]=C_h_intern(&lf[42],13,"\010compilerbomb");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\020invalid type: ~a");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\020invalid type: ~a");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\001s");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\016zero arguments");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\010 of type");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\011 argument");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\033an unknown number of values");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\013zero values");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\010 of type");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\006 value");
lf[54]=C_h_intern(&lf[54],6,"append");
lf[55]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\011procedure\376\377\016");
lf[56]=C_h_intern(&lf[56],6,"reduce");
lf[57]=C_h_intern(&lf[57],3,"eq\077");
lf[58]=C_h_intern(&lf[58],3,"any");
lf[59]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001*\376\377\016");
lf[60]=C_h_intern(&lf[60],7,"reverse");
lf[61]=C_h_intern(&lf[61],10,"append-map");
lf[62]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\011procedure\376\377\016");
lf[63]=C_h_intern(&lf[63],7,"call/cc");
lf[64]=C_h_intern(&lf[64],6,"values");
lf[65]=C_h_intern(&lf[65],6,"#!rest");
lf[66]=C_h_intern(&lf[66],10,"#!optional");
lf[67]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006#!rest\376\377\016");
lf[68]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006#!rest\376\377\016");
lf[69]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006#!rest\376\377\016");
lf[70]=C_h_intern(&lf[70],8,"noreturn");
lf[71]=C_h_intern(&lf[71],6,"number");
lf[72]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006number\376\003\000\000\002\376\001\000\000\006fixnum\376\003\000\000\002\376\001\000\000\005float\376\377\016");
lf[73]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006number\376\003\000\000\002\376\001\000\000\006fixnum\376\003\000\000\002\376\001\000\000\005float\376\377\016");
lf[74]=C_h_intern(&lf[74],4,"pair");
lf[75]=C_h_intern(&lf[75],4,"list");
lf[76]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\004pair\376\003\000\000\002\376\001\000\000\004list\376\377\016");
lf[77]=C_h_intern(&lf[77],4,"null");
lf[78]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\004null\376\003\000\000\002\376\001\000\000\004list\376\377\016");
lf[79]=C_h_intern(&lf[79],5,"break");
lf[80]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006#!rest\376\003\000\000\002\376\001\000\000\012#!optional\376\377\016");
lf[81]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001*\376\003\000\000\002\376\001\000\000\011undefined\376\377\016");
lf[82]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\004null\376\003\000\000\002\376\001\000\000\004pair\376\377\016");
lf[83]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006fixnum\376\003\000\000\002\376\001\000\000\005float\376\377\016");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000- a single result, but were given zero results");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\011expected ");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\007 result");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000! a single result, but were given ");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\011expected ");
lf[89]=C_h_intern(&lf[89],7,"warning");
lf[90]=C_h_intern(&lf[90],4,"conc");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\013procedure `");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\021unknown procedure");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\017at toplevel:\012  ");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\004:\012  ");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\014in toplevel ");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\004,\012  ");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\011in local ");
lf[98]=C_h_intern(&lf[98],4,"cons");
lf[99]=C_h_intern(&lf[99],3,"...");
lf[100]=C_h_intern(&lf[100],4,"take");
lf[101]=C_h_intern(&lf[101],3,"min");
lf[102]=C_h_intern(&lf[102],30,"\010compilerbuild-expression-tree");
lf[103]=C_h_intern(&lf[103],12,"string-chomp");
lf[104]=C_h_intern(&lf[104],2,"pp");
lf[105]=C_h_intern(&lf[105],21,"with-output-to-string");
lf[106]=C_decode_literal(C_heaptop,"\376B\000\000\003\047, ");
lf[107]=C_h_intern(&lf[107],5,"write");
lf[108]=C_decode_literal(C_heaptop,"\376B\000\000\026in procedure call to `");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[111]=C_h_intern(&lf[111],26,"\010compilersource-info->line");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[113]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001*\376\003\000\000\002\376\001\000\000\011procedure\376\377\016");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000\030not a procedure type: ~a");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000(\047, but where given an argument of type `");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000\012 of type `");
lf[117]=C_decode_literal(C_heaptop,"\376B\000\000\023expected argument #");
lf[118]=C_decode_literal(C_heaptop,"\376B\000\000\011 argument");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\000\022, but where given ");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000\011 argument");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000\011expected ");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\000#\047, but were given a value of type `");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\032expected a value of type `");
lf[124]=C_h_intern(&lf[124],9,"make-list");
lf[125]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001*\376\003\000\000\002\376\001\000\000\011procedure\376\377\016");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\024not a procedure type");
lf[127]=C_h_intern(&lf[127],9,"\004corecall");
lf[128]=C_h_intern(&lf[128],13,"\004corevariable");
lf[129]=C_h_intern(&lf[129],3,"let");
lf[130]=C_h_intern(&lf[130],4,"last");
lf[131]=C_h_intern(&lf[131],5,"quote");
lf[132]=C_h_intern(&lf[132],6,"string");
lf[133]=C_h_intern(&lf[133],6,"symbol");
lf[134]=C_h_intern(&lf[134],6,"fixnum");
lf[135]=C_h_intern(&lf[135],5,"float");
lf[136]=C_h_intern(&lf[136],7,"boolean");
lf[137]=C_h_intern(&lf[137],3,"eof");
lf[138]=C_h_intern(&lf[138],6,"vector");
lf[139]=C_h_intern(&lf[139],14,"\004coreundefined");
lf[140]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001*\376\377\016");
lf[141]=C_h_intern(&lf[141],9,"\004coreproc");
lf[142]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\011procedure\376\377\016");
lf[143]=C_h_intern(&lf[143],15,"\004coreglobal-ref");
lf[144]=C_h_intern(&lf[144],2,"if");
lf[145]=C_decode_literal(C_heaptop,"\376B\000\000Cbranches in conditional expression differ in the number of results:");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\016in conditional");
lf[147]=C_h_intern(&lf[147],10,"alist-cons");
lf[148]=C_decode_literal(C_heaptop,"\376B\000\000\025in `let\047 binding of `");
lf[149]=C_h_intern(&lf[149],11,"\004corelambda");
lf[150]=C_h_intern(&lf[150],6,"lambda");
lf[151]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\011procedure\376\377\016");
lf[152]=C_h_intern(&lf[152],7,"butlast");
lf[153]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006#!rest\376\377\016");
lf[154]=C_h_intern(&lf[154],30,"\010compilerdecompose-lambda-list");
lf[155]=C_h_intern(&lf[155],4,"set!");
lf[156]=C_h_intern(&lf[156],9,"\004coreset!");
lf[157]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\011undefined\376\377\016");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000 \047 does not match declared type `");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000\030\047 to toplevel variable `");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000\035assignment of value of type `");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\022in assignment to `");
lf[162]=C_h_intern(&lf[162],14,"\004coreprimitive");
lf[163]=C_h_intern(&lf[163],15,"\004coreinline_ref");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\024 of procedure call `");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\021operator position");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\012argument #");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\003in ");
lf[168]=C_h_intern(&lf[168],4,"iota");
lf[169]=C_h_intern(&lf[169],11,"\004coreswitch");
lf[170]=C_h_intern(&lf[170],9,"\004corecond");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\031unexpected node class: ~a");
lf[172]=C_h_intern(&lf[172],8,"for-each");
lf[173]=C_h_intern(&lf[173],27,"\010compilerload-type-database");
lf[174]=C_h_intern(&lf[174],8,"\003sysput!");
lf[175]=C_h_intern(&lf[175],10,"\003sysnotice");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000)\047 conflicts with previously loaded type `");
lf[177]=C_decode_literal(C_heaptop,"\376B\000\000\030\047 for toplevel binding `");
lf[178]=C_decode_literal(C_heaptop,"\376B\000\000\021type-definition `");
lf[179]=C_h_intern(&lf[179],9,"read-file");
lf[180]=C_h_intern(&lf[180],21,"\010compilerverbose-mode");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[182]=C_decode_literal(C_heaptop,"\376B\000\000\026loading type database ");
lf[183]=C_h_intern(&lf[183],12,"file-exists\077");
lf[184]=C_h_intern(&lf[184],13,"make-pathname");
lf[185]=C_h_intern(&lf[185],15,"repository-path");
lf[186]=C_h_intern(&lf[186],9,"\003syserror");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
C_register_lf2(lf,188,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1524,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1522 */
static void C_ccall f_1524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1524,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1527,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1525 in k1522 */
static void C_ccall f_1527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1527,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! d ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1529,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate((C_word*)lf[6]+1 /* (set! ##compiler#scrutinize ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1547,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[173]+1 /* (set! ##compiler#load-type-database ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5783,tmp=(C_word)a,a+=2,tmp));
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}

/* f_5783 in k1525 in k1522 */
static void C_ccall f_5783(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_5783r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5783r(t0,t1,t2,t3);}}

static void C_ccall f_5783r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5787,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* scrutinizer.scm:633: repository-path */
t5=*((C_word*)lf[185]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_5787(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[186]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[187],t3);}}}

/* k5785 */
static void C_ccall f_5787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5787,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5790,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5902,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* scrutinizer.scm:634: make-pathname */
t4=*((C_word*)lf[184]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t1,((C_word*)t0)[2]);}

/* k5900 in k5785 */
static void C_ccall f_5902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:634: file-exists? */
t2=*((C_word*)lf[183]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5788 in k5785 */
static void C_ccall f_5790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5790,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5796,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(*((C_word*)lf[180]+1))){
t3=*((C_word*)lf[1]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5889,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* display */
t5=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[182],t3);}
else{
t3=t2;
f_5796(2,t3,C_SCHEME_UNDEFINED);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k5887 in k5788 in k5785 */
static void C_ccall f_5889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5889,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5892,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5890 in k5887 in k5788 in k5785 */
static void C_ccall f_5892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5892,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5895,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[181],((C_word*)t0)[2]);}

/* k5893 in k5890 in k5887 in k5788 in k5785 */
static void C_ccall f_5895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* k5794 in k5788 in k5785 */
static void C_ccall f_5796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5796,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5857,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* scrutinizer.scm:648: read-file */
t3=*((C_word*)lf[179]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5855 in k5794 in k5788 in k5785 */
static void C_ccall f_5857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5857,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[172]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5865,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_5865(t6,((C_word*)t0)[2],t1);}

/* for-each-loop1472 in k5855 in k5794 in k5788 in k5785 */
static void C_fcall f_5865(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5865,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5875,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5804,a[2]=t5,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* scrutinizer.scm:640: ##sys#get */
t7=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t5,lf[16]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5802 in for-each-loop1472 in k5855 in k5794 in k5788 in k5785 */
static void C_ccall f_5804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5804,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5810,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5816,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t5=C_i_equalp(t1,t2);
t6=t4;
f_5816(t6,C_i_not(t5));}
else{
t5=t4;
f_5816(t5,C_SCHEME_FALSE);}}

/* k5814 in k5802 in for-each-loop1472 in k5855 in k5794 in k5788 in k5785 */
static void C_fcall f_5816(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5816,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5823,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* open-output-string */
t3=*((C_word*)lf[11]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* scrutinizer.scm:647: ##sys#put! */
t2=*((C_word*)lf[174]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[16],((C_word*)t0)[4]);}}

/* k5821 in k5814 in k5802 in for-each-loop1472 in k5855 in k5794 in k5788 in k5785 */
static void C_ccall f_5823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5823,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5826,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[178],t1);}

/* k5824 in k5821 in k5814 in k5802 in for-each-loop1472 in k5855 in k5794 in k5788 in k5785 */
static void C_ccall f_5826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5826,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5829,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[5]);}

/* k5827 in k5824 in k5821 in k5814 in k5802 in for-each-loop1472 in k5855 in k5794 in k5788 in k5785 */
static void C_ccall f_5829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5829,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5832,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[177],((C_word*)t0)[4]);}

/* k5830 in k5827 in k5824 in k5821 in k5814 in k5802 in for-each-loop1472 in k5855 in k5794 in k5788 in k5785 */
static void C_ccall f_5832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5832,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5835,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k5833 in k5830 in k5827 in k5824 in k5821 in k5814 in k5802 in for-each-loop1472 in k5855 in k5794 in k5788 in k5785 */
static void C_ccall f_5835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5835,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5838,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[176],((C_word*)t0)[3]);}

/* k5836 in k5833 in k5830 in k5827 in k5824 in k5821 in k5814 in k5802 in for-each-loop1472 in k5855 in k5794 in k5788 in k5785 */
static void C_ccall f_5838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5838,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5841,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5839 in k5836 in k5833 in k5830 in k5827 in k5824 in k5821 in k5814 in k5802 in for-each-loop1472 in k5855 in k5794 in k5788 in k5785 */
static void C_ccall f_5841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5841,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5844,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(39),((C_word*)t0)[2]);}

/* k5842 in k5839 in k5836 in k5833 in k5830 in k5827 in k5824 in k5821 in k5814 in k5802 in for-each-loop1472 in k5855 in k5794 in k5788 in k5785 */
static void C_ccall f_5844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5844,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5847,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* get-output-string */
t3=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5845 in k5842 in k5839 in k5836 in k5833 in k5830 in k5827 in k5824 in k5821 in k5814 in k5802 in for-each-loop1472 in k5855 in k5794 in k5788 in k5785 */
static void C_ccall f_5847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:643: ##sys#notice */
t2=*((C_word*)lf[175]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5808 in k5802 in for-each-loop1472 in k5855 in k5794 in k5788 in k5785 */
static void C_ccall f_5810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:647: ##sys#put! */
t2=*((C_word*)lf[174]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],lf[16],((C_word*)t0)[2]);}

/* k5873 in for-each-loop1472 in k5855 in k5794 in k5788 in k5785 */
static void C_ccall f_5875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5865(t3,((C_word*)t0)[2],t2);}

/* f_1547 in k1525 in k1522 */
static void C_ccall f_1547(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word t48;
C_word t49;
C_word t50;
C_word t51;
C_word t52;
C_word t53;
C_word t54;
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word t59;
C_word t60;
C_word t61;
C_word t62;
C_word t63;
C_word t64;
C_word t65;
C_word t66;
C_word t67;
C_word t68;
C_word t69;
C_word t70;
C_word t71;
C_word t72;
C_word t73;
C_word t74;
C_word t75;
C_word t76;
C_word t77;
C_word t78;
C_word t79;
C_word t80;
C_word t81;
C_word t82;
C_word t83;
C_word t84;
C_word t85;
C_word t86;
C_word t87;
C_word t88;
C_word t89;
C_word t90;
C_word t91;
C_word t92;
C_word t93;
C_word t94;
C_word t95;
C_word t96;
C_word ab[180],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1547,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_SCHEME_UNDEFINED;
t29=(*a=C_VECTOR_TYPE|1,a[1]=t28,tmp=(C_word)a,a+=2,tmp);
t30=C_SCHEME_UNDEFINED;
t31=(*a=C_VECTOR_TYPE|1,a[1]=t30,tmp=(C_word)a,a+=2,tmp);
t32=C_SCHEME_UNDEFINED;
t33=(*a=C_VECTOR_TYPE|1,a[1]=t32,tmp=(C_word)a,a+=2,tmp);
t34=C_SCHEME_UNDEFINED;
t35=(*a=C_VECTOR_TYPE|1,a[1]=t34,tmp=(C_word)a,a+=2,tmp);
t36=C_SCHEME_UNDEFINED;
t37=(*a=C_VECTOR_TYPE|1,a[1]=t36,tmp=(C_word)a,a+=2,tmp);
t38=C_SCHEME_UNDEFINED;
t39=(*a=C_VECTOR_TYPE|1,a[1]=t38,tmp=(C_word)a,a+=2,tmp);
t40=C_SCHEME_UNDEFINED;
t41=(*a=C_VECTOR_TYPE|1,a[1]=t40,tmp=(C_word)a,a+=2,tmp);
t42=C_SCHEME_UNDEFINED;
t43=(*a=C_VECTOR_TYPE|1,a[1]=t42,tmp=(C_word)a,a+=2,tmp);
t44=C_SCHEME_UNDEFINED;
t45=(*a=C_VECTOR_TYPE|1,a[1]=t44,tmp=(C_word)a,a+=2,tmp);
t46=C_SCHEME_UNDEFINED;
t47=(*a=C_VECTOR_TYPE|1,a[1]=t46,tmp=(C_word)a,a+=2,tmp);
t48=C_SCHEME_UNDEFINED;
t49=(*a=C_VECTOR_TYPE|1,a[1]=t48,tmp=(C_word)a,a+=2,tmp);
t50=C_SCHEME_UNDEFINED;
t51=(*a=C_VECTOR_TYPE|1,a[1]=t50,tmp=(C_word)a,a+=2,tmp);
t52=C_SCHEME_UNDEFINED;
t53=(*a=C_VECTOR_TYPE|1,a[1]=t52,tmp=(C_word)a,a+=2,tmp);
t54=C_SCHEME_UNDEFINED;
t55=(*a=C_VECTOR_TYPE|1,a[1]=t54,tmp=(C_word)a,a+=2,tmp);
t56=C_SCHEME_UNDEFINED;
t57=(*a=C_VECTOR_TYPE|1,a[1]=t56,tmp=(C_word)a,a+=2,tmp);
t58=C_SCHEME_UNDEFINED;
t59=(*a=C_VECTOR_TYPE|1,a[1]=t58,tmp=(C_word)a,a+=2,tmp);
t60=C_SCHEME_UNDEFINED;
t61=(*a=C_VECTOR_TYPE|1,a[1]=t60,tmp=(C_word)a,a+=2,tmp);
t62=C_SCHEME_UNDEFINED;
t63=(*a=C_VECTOR_TYPE|1,a[1]=t62,tmp=(C_word)a,a+=2,tmp);
t64=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1648,a[2]=t43,tmp=(C_word)a,a+=3,tmp));
t65=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1735,a[2]=t5,a[3]=t3,a[4]=t43,tmp=(C_word)a,a+=5,tmp));
t66=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1808,a[2]=t9,tmp=(C_word)a,a+=3,tmp));
t67=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1840,a[2]=t9,a[3]=t51,a[4]=t43,tmp=(C_word)a,a+=5,tmp));
t68=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1881,a[2]=t13,a[3]=t15,a[4]=t17,tmp=(C_word)a,a+=5,tmp));
t69=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2063,a[2]=t13,tmp=(C_word)a,a+=3,tmp));
t70=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2147,a[2]=t13,tmp=(C_word)a,a+=3,tmp));
t71=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2237,a[2]=t21,tmp=(C_word)a,a+=3,tmp));
t72=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2246,a[2]=t55,a[3]=t39,a[4]=t27,a[5]=t29,a[6]=t23,a[7]=t19,tmp=(C_word)a,a+=8,tmp));
t73=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2715,tmp=(C_word)a,a+=2,tmp));
t74=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2755,tmp=(C_word)a,a+=2,tmp));
t75=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2777,a[2]=t27,a[3]=t19,a[4]=t25,tmp=(C_word)a,a+=5,tmp));
t76=C_set_block_item(t29,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2947,a[2]=t19,a[3]=t29,tmp=(C_word)a,a+=4,tmp));
t77=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3005,a[2]=t33,tmp=(C_word)a,a+=3,tmp));
t78=C_set_block_item(t33,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3014,a[2]=t35,a[3]=t37,a[4]=t23,a[5]=t31,tmp=(C_word)a,a+=6,tmp));
t79=C_set_block_item(t35,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3286,a[2]=t31,a[3]=t25,tmp=(C_word)a,a+=4,tmp));
t80=C_set_block_item(t37,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3496,a[2]=t31,a[3]=t37,tmp=(C_word)a,a+=4,tmp));
t81=C_set_block_item(t39,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3551,a[2]=t23,a[3]=t39,tmp=(C_word)a,a+=4,tmp));
t82=C_set_block_item(t41,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3875,a[2]=t43,tmp=(C_word)a,a+=3,tmp));
t83=C_set_block_item(t43,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3956,a[2]=t45,tmp=(C_word)a,a+=3,tmp));
t84=C_set_block_item(t45,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3970,a[2]=t45,tmp=(C_word)a,a+=3,tmp));
t85=C_set_block_item(t47,0,*((C_word*)lf[98]+1));
t86=C_set_block_item(t49,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4091,tmp=(C_word)a,a+=2,tmp));
t87=C_set_block_item(t51,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4181,a[2]=t49,tmp=(C_word)a,a+=3,tmp));
t88=C_set_block_item(t53,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4201,a[2]=t55,a[3]=t31,a[4]=t43,a[5]=t57,a[6]=t49,tmp=(C_word)a,a+=7,tmp));
t89=C_set_block_item(t55,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4532,a[2]=t55,tmp=(C_word)a,a+=3,tmp));
t90=C_set_block_item(t57,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4574,a[2]=t25,tmp=(C_word)a,a+=3,tmp));
t91=C_set_block_item(t59,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4845,a[2]=t59,tmp=(C_word)a,a+=3,tmp));
t92=C_set_block_item(t61,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4877,a[2]=t61,tmp=(C_word)a,a+=3,tmp));
t93=C_set_block_item(t63,0,(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4969,a[2]=t49,a[3]=t53,a[4]=t31,a[5]=t47,a[6]=t41,a[7]=t11,a[8]=t63,a[9]=t59,a[10]=t51,a[11]=t43,a[12]=t19,a[13]=t7,a[14]=t5,tmp=(C_word)a,a+=15,tmp));
t94=C_slot(t2,C_fix(3));
t95=C_i_car(t94);
/* scrutinizer.scm:631: walk */
t96=((C_word*)t63)[1];
f_4969(t96,t1,t95,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* walk */
static void C_fcall f_4969(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word t48;
C_word t49;
C_word t50;
C_word t51;
C_word t52;
C_word t53;
C_word t54;
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word t59;
C_word t60;
C_word *a;
loop:
a=C_alloc(20);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4969,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=t2;
t8=C_slot(t7,C_fix(3));
t9=t2;
t10=C_slot(t9,C_fix(2));
t11=t2;
t12=C_slot(t11,C_fix(1));
t13=C_eqp(t12,lf[131]);
if(C_truep(t13)){
t14=C_i_car(t10);
if(C_truep(C_i_stringp(t14))){
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_a_i_list1(&a,1,lf[132]));}
else{
if(C_truep(C_i_symbolp(t14))){
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_a_i_list1(&a,1,lf[133]));}
else{
if(C_truep(C_fixnump(t14))){
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_a_i_list1(&a,1,lf[134]));}
else{
if(C_truep(C_i_flonump(t14))){
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_a_i_list1(&a,1,lf[135]));}
else{
if(C_truep(C_i_numberp(t14))){
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_a_i_list1(&a,1,lf[71]));}
else{
if(C_truep(C_booleanp(t14))){
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_a_i_list1(&a,1,lf[136]));}
else{
if(C_truep(C_i_listp(t14))){
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_a_i_list1(&a,1,lf[75]));}
else{
if(C_truep(C_i_pairp(t14))){
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_a_i_list1(&a,1,lf[74]));}
else{
if(C_truep(C_eofp(t14))){
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_a_i_list1(&a,1,lf[137]));}
else{
if(C_truep(C_i_vectorp(t14))){
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_a_i_list1(&a,1,lf[138]));}
else{
t15=C_immp(t14);
t16=(C_truep(t15)?C_SCHEME_FALSE:C_structurep(t14));
if(C_truep(t16)){
t17=C_slot(t14,C_fix(0));
t18=C_a_i_list(&a,2,lf[40],t17);
t19=t1;
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,C_a_i_list1(&a,1,t18));}
else{
if(C_truep(C_i_nullp(t14))){
t17=t1;
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,C_a_i_list1(&a,1,lf[77]));}
else{
t17=C_charp(t14);
t18=t1;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,(C_truep(t17)?C_a_i_list1(&a,1,lf[30]):C_a_i_list1(&a,1,lf[8])));}}}}}}}}}}}}}
else{
t14=C_eqp(t12,lf[139]);
if(C_truep(t14)){
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,lf[140]);}
else{
t15=C_eqp(t12,lf[141]);
if(C_truep(t15)){
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,lf[142]);}
else{
t16=C_eqp(t12,lf[143]);
if(C_truep(t16)){
t17=C_i_car(t10);
/* scrutinizer.scm:541: global-result */
t18=((C_word*)((C_word*)t0)[14])[1];
f_1648(t18,t1,t17,t4);}
else{
t17=C_eqp(t12,lf[128]);
if(C_truep(t17)){
t18=C_i_car(t10);
/* scrutinizer.scm:542: variable-result */
t19=((C_word*)((C_word*)t0)[13])[1];
f_1735(t19,t1,t18,t3,t4);}
else{
t18=C_eqp(t12,lf[144]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_5064,a[2]=((C_word*)t0)[7],a[3]=t6,a[4]=t5,a[5]=t3,a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=t2,a[9]=((C_word*)t0)[10],a[10]=t4,a[11]=((C_word*)t0)[11],a[12]=t1,a[13]=((C_word*)t0)[12],a[14]=t8,tmp=(C_word)a,a+=15,tmp);
t20=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5234,a[2]=t4,a[3]=t19,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t21=C_i_car(t8);
/* scrutinizer.scm:544: walk */
t55=t20;
t56=t21;
t57=t3;
t58=t4;
t59=C_SCHEME_FALSE;
t60=C_SCHEME_FALSE;
t1=t55;
t2=t56;
t3=t57;
t4=t58;
t5=t59;
t6=t60;
goto loop;}
else{
t19=C_eqp(t12,lf[129]);
if(C_truep(t19)){
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5249,a[2]=((C_word*)t0)[6],a[3]=t21,a[4]=t3,a[5]=t6,a[6]=t5,a[7]=t4,a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp));
t23=((C_word*)t21)[1];
f_5249(t23,t1,t10,t8,C_SCHEME_END_OF_LIST);}
else{
t20=C_eqp(t12,lf[149]);
t21=(C_truep(t20)?t20:C_eqp(t12,lf[150]));
if(C_truep(t21)){
t22=C_i_car(t10);
t23=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5343,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[8],a[6]=t8,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* scrutinizer.scm:573: decompose-lambda-list */
t24=*((C_word*)lf[154]+1);
((C_proc4)(void*)(*((C_word*)t24+1)))(4,t24,t1,t22,t23);}
else{
t22=C_eqp(t12,lf[155]);
t23=(C_truep(t22)?t22:C_eqp(t12,lf[156]));
if(C_truep(t23)){
t24=C_i_car(t10);
t25=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5461,a[2]=((C_word*)t0)[8],a[3]=t8,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=t4,a[7]=((C_word*)t0)[11],a[8]=t1,a[9]=t3,a[10]=t24,tmp=(C_word)a,a+=11,tmp);
/* scrutinizer.scm:593: ##sys#get */
t26=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t26+1)))(4,t26,t25,t24,lf[16]);}
else{
t24=C_eqp(t12,lf[162]);
t25=(C_truep(t24)?t24:C_eqp(t12,lf[163]));
if(C_truep(t25)){
t26=t1;
((C_proc2)(void*)(*((C_word*)t26+1)))(2,t26,lf[8]);}
else{
t26=C_eqp(t12,lf[127]);
if(C_truep(t26)){
t27=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5585,a[2]=t10,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t8,a[6]=t3,a[7]=((C_word*)t0)[8],a[8]=t4,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* scrutinizer.scm:612: fragment */
f_4091(t27,t2);}
else{
t27=C_eqp(t12,lf[169]);
t28=(C_truep(t27)?t27:C_eqp(t12,lf[170]));
if(C_truep(t28)){
/* scrutinizer.scm:625: bomb */
t29=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t29+1)))(4,t29,t1,lf[171],t12);}
else{
t29=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5720,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t30=C_i_check_list_2(t8,lf[172]);
t31=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5730,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t32=C_SCHEME_UNDEFINED;
t33=(*a=C_VECTOR_TYPE|1,a[1]=t32,tmp=(C_word)a,a+=2,tmp);
t34=C_set_block_item(t33,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5732,a[2]=t29,a[3]=t33,tmp=(C_word)a,a+=4,tmp));
t35=((C_word*)t33)[1];
f_5732(t35,t31,t8);}}}}}}}}}}}}}

/* for-each-loop1388 in walk */
static void C_fcall f_5732(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5732,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5742,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* g13891395 */
t5=((C_word*)t0)[2];
f_5720(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5740 in for-each-loop1388 in walk */
static void C_ccall f_5742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5732(t3,((C_word*)t0)[2],t2);}

/* k5728 in walk */
static void C_ccall f_5730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[8]);}

/* g1389 in walk */
static void C_fcall f_5720(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5720,NULL,3,t0,t1,t2);}
/* scrutinizer.scm:627: walk */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4969(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k5583 in walk */
static void C_ccall f_5585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5585,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5586,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5638,a[2]=t6,a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
t8=C_i_length(((C_word*)t0)[5]);
/* scrutinizer.scm:622: iota */
t9=*((C_word*)lf[168]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}

/* k5636 in k5583 in walk */
static void C_ccall f_5638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5638,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[9],lf[37]);
t3=C_i_check_list_2(t1,lf[37]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5647,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5656,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_5656(t8,t4,((C_word*)t0)[9],t1);}

/* map-loop1321 in k5636 in k5583 in walk */
static void C_fcall f_5656(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5656,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5689,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* g13271337 */
t9=((C_word*)t0)[2];
f_5586(t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[3])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k5687 in map-loop1321 in k5636 in k5583 in walk */
static void C_ccall f_5689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5689,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5669,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_5669(t4,C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_5669(t5,t4);}}

/* k5667 in k5687 in map-loop1321 in k5636 in k5583 in walk */
static void C_fcall f_5669(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
f_5656(t5,((C_word*)t0)[2],t3,t4);}

/* k5645 in k5636 in k5583 in walk */
static void C_ccall f_5647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(((C_word*)t0)[6]);
/* scrutinizer.scm:623: call-result */
t3=((C_word*)((C_word*)t0)[5])[1];
f_4201(t3,((C_word*)t0)[4],t1,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* g1327 in k5583 in walk */
static void C_fcall f_5586(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5586,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5594,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t1,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* open-output-string */
t5=*((C_word*)lf[11]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k5592 in g1327 in k5583 in walk */
static void C_ccall f_5594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5594,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5597,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[167],t1);}

/* k5595 in k5592 in g1327 in k5583 in walk */
static void C_ccall f_5597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5597,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5600,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5620,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_zerop(((C_word*)t0)[2]))){
/* display */
t4=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[165],((C_word*)t0)[4]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5626,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t5=*((C_word*)lf[11]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k5624 in k5595 in k5592 in g1327 in k5583 in walk */
static void C_ccall f_5626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5626,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5629,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[166],t1);}

/* k5627 in k5624 in k5595 in k5592 in g1327 in k5583 in walk */
static void C_ccall f_5629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5629,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5632,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5630 in k5627 in k5624 in k5595 in k5592 in g1327 in k5583 in walk */
static void C_ccall f_5632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5618 in k5595 in k5592 in g1327 in k5583 in walk */
static void C_ccall f_5620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
t2=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5598 in k5595 in k5592 in g1327 in k5583 in walk */
static void C_ccall f_5600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5600,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5603,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[164],((C_word*)t0)[3]);}

/* k5601 in k5598 in k5595 in k5592 in g1327 in k5583 in walk */
static void C_ccall f_5603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5603,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5606,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* write */
t3=*((C_word*)lf[107]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5604 in k5601 in k5598 in k5595 in k5592 in g1327 in k5583 in walk */
static void C_ccall f_5606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5606,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5609,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* write-char/port */
t3=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(39),((C_word*)t0)[2]);}

/* k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in g1327 in k5583 in walk */
static void C_ccall f_5609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5609,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5612,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* get-output-string */
t3=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in g1327 in k5583 in walk */
static void C_ccall f_5612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5612,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5616,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* scrutinizer.scm:621: walk */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4969(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[5],C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k5614 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in g1327 in k5583 in walk */
static void C_ccall f_5616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:614: single */
t2=((C_word*)((C_word*)t0)[5])[1];
f_3875(t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5459 in walk */
static void C_ccall f_5461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5461,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5464,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5547,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
/* open-output-string */
t4=*((C_word*)lf[11]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k5545 in k5459 in walk */
static void C_ccall f_5547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5547,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5550,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[161],t1);}

/* k5548 in k5545 in k5459 in walk */
static void C_ccall f_5550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5550,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5553,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5551 in k5548 in k5545 in k5459 in walk */
static void C_ccall f_5553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5553,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5556,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* write-char/port */
t3=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(39),((C_word*)t0)[2]);}

/* k5554 in k5551 in k5548 in k5545 in k5459 in walk */
static void C_ccall f_5556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5556,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5559,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* get-output-string */
t3=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5557 in k5554 in k5551 in k5548 in k5545 in k5459 in walk */
static void C_ccall f_5559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5559,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5563,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[5]);
/* scrutinizer.scm:596: walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4969(t4,t2,t3,((C_word*)t0)[3],((C_word*)t0)[6],((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k5561 in k5557 in k5554 in k5551 in k5548 in k5545 in k5459 in walk */
static void C_ccall f_5563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:594: single */
t2=((C_word*)((C_word*)t0)[5])[1];
f_3875(t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5462 in k5459 in walk */
static void C_ccall f_5464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5464,2,t0,t1);}
t2=C_i_assq(((C_word*)t0)[8],((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5470,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5489,a[2]=t1,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[3])){
if(C_truep(t2)){
t5=t4;
f_5489(t5,C_SCHEME_FALSE);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[7]);
if(C_truep(t5)){
t6=t4;
f_5489(t6,C_SCHEME_FALSE);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5539,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* scrutinizer.scm:601: match */
t7=((C_word*)((C_word*)t0)[2])[1];
f_3005(t7,t6,((C_word*)t0)[3],t1);}}}
else{
t5=t4;
f_5489(t5,C_SCHEME_FALSE);}}

/* k5537 in k5462 in k5459 in walk */
static void C_ccall f_5539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5489(t2,C_i_not(t1));}

/* k5487 in k5462 in k5459 in walk */
static void C_fcall f_5489(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5489,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5496,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* open-output-string */
t3=*((C_word*)lf[11]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[6];
f_5470(2,t2,C_SCHEME_UNDEFINED);}}

/* k5494 in k5487 in k5462 in k5459 in walk */
static void C_ccall f_5496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5496,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5499,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[160],t1);}

/* k5497 in k5494 in k5487 in k5462 in k5459 in walk */
static void C_ccall f_5499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5499,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5502,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[5]);}

/* k5500 in k5497 in k5494 in k5487 in k5462 in k5459 in walk */
static void C_ccall f_5502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5502,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5505,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[159],((C_word*)t0)[4]);}

/* k5503 in k5500 in k5497 in k5494 in k5487 in k5462 in k5459 in walk */
static void C_ccall f_5505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5505,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5508,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k5506 in k5503 in k5500 in k5497 in k5494 in k5487 in k5462 in k5459 in walk */
static void C_ccall f_5508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5508,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5511,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[158],((C_word*)t0)[3]);}

/* k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5487 in k5462 in k5459 in walk */
static void C_ccall f_5511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5511,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5514,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5487 in k5462 in k5459 in walk */
static void C_ccall f_5514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5514,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5517,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(39),((C_word*)t0)[2]);}

/* k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5487 in k5462 in k5459 in walk */
static void C_ccall f_5517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5517,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5520,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* get-output-string */
t3=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5487 in k5462 in k5459 in walk */
static void C_ccall f_5520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:602: report */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3956(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5468 in k5462 in k5459 in walk */
static void C_ccall f_5470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
t2=C_i_cdr(((C_word*)t0)[4]);
t3=C_eqp(lf[17],t2);
if(C_truep(t3)){
t4=C_i_set_cdr(((C_word*)t0)[4],((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[157]);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[157]);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[157]);}}

/* a5342 in walk */
static void C_ccall f_5343(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5343,5,t0,t1,t2,t3,t4);}
t5=(C_truep(((C_word*)t0)[7])?C_a_i_list1(&a,1,((C_word*)t0)[7]):C_SCHEME_END_OF_LIST);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5350,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=t5,a[11]=t1,tmp=(C_word)a,a+=12,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5439,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm:577: make-list */
t8=*((C_word*)lf[124]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,t3,lf[8]);}

/* k5437 in a5342 in walk */
static void C_ccall f_5439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[3])){
/* scrutinizer.scm:577: append */
t2=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[153]);}
else{
/* scrutinizer.scm:577: append */
t2=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}}

/* k5348 in a5342 in walk */
static void C_ccall f_5350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5350,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5353,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=t1,a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5391,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
/* scrutinizer.scm:579: butlast */
t8=*((C_word*)lf[152]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t0)[2]);}
else{
t8=t7;
f_5391(2,t8,((C_word*)t0)[2]);}}

/* k5389 in k5348 in a5342 in walk */
static void C_ccall f_5391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5391,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[37]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5397,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5399,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_5399(t7,t3,t1);}

/* map-loop1241 in k5389 in k5348 in a5342 in walk */
static void C_fcall f_5399(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
loop:
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5399,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_cons(&a,2,t3,lf[8]);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5395 in k5389 in k5348 in a5342 in walk */
static void C_ccall f_5397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:578: append */
t2=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5351 in k5348 in a5342 in walk */
static void C_ccall f_5353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5353,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5356,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)t0)[7]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5375,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[2])){
/* scrutinizer.scm:582: alist-cons */
t5=*((C_word*)lf[147]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[2],lf[75],t1);}
else{
t5=t4;
f_5375(2,t5,t1);}}

/* k5373 in k5351 in k5348 in a5342 in walk */
static void C_ccall f_5375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5375,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5379,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* scrutinizer.scm:583: add-loc */
t3=((C_word*)((C_word*)t0)[4])[1];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5377 in k5373 in k5351 in k5348 in a5342 in walk */
static void C_ccall f_5379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:581: walk */
t2=((C_word*)((C_word*)t0)[5])[1];
f_4969(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1,C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* k5354 in k5351 in k5348 in a5342 in walk */
static void C_ccall f_5356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5356,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5363,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* scrutinizer.scm:586: append */
t4=*((C_word*)lf[54]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t2,lf[151],((C_word*)t0)[2],t3,t1);}

/* k5361 in k5354 in k5351 in k5348 in a5342 in walk */
static void C_ccall f_5363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5363,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list1(&a,1,t1));}

/* loop in walk */
static void C_fcall f_5249(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5249,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
t5=C_i_car(t3);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5267,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t5,a[6]=t1,a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* scrutinizer.scm:566: append */
t7=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t4,((C_word*)t0)[4]);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5270,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5293,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[7],a[7]=t5,a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
/* open-output-string */
t7=*((C_word*)lf[11]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k5291 in loop in walk */
static void C_ccall f_5293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5293,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5296,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[148],t1);}

/* k5294 in k5291 in loop in walk */
static void C_ccall f_5296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5296,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5299,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5321,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(((C_word*)t0)[5]);
/* scrutinizer.scm:568: real-name */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k5319 in k5294 in k5291 in loop in walk */
static void C_ccall f_5321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
t2=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5297 in k5294 in k5291 in loop in walk */
static void C_ccall f_5299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5299,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5302,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* write-char/port */
t3=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(39),((C_word*)t0)[2]);}

/* k5300 in k5297 in k5294 in k5291 in loop in walk */
static void C_ccall f_5302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5302,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5305,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* get-output-string */
t3=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5303 in k5300 in k5297 in k5294 in k5291 in loop in walk */
static void C_ccall f_5305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5305,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5309,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[5]);
t4=C_i_car(((C_word*)t0)[4]);
/* scrutinizer.scm:569: walk */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4969(t5,t2,t3,((C_word*)t0)[2],((C_word*)t0)[6],t4,C_SCHEME_FALSE);}

/* k5307 in k5303 in k5300 in k5297 in k5294 in k5291 in loop in walk */
static void C_ccall f_5309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:567: single */
t2=((C_word*)((C_word*)t0)[5])[1];
f_3875(t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5268 in loop in walk */
static void C_ccall f_5270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5270,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[6]);
t3=C_i_cdr(((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5285,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(((C_word*)t0)[6]);
/* scrutinizer.scm:571: alist-cons */
t6=*((C_word*)lf[147]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,t5,t1,((C_word*)t0)[2]);}

/* k5283 in k5268 in loop in walk */
static void C_ccall f_5285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:571: loop */
t2=((C_word*)((C_word*)t0)[5])[1];
f_5249(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5265 in loop in walk */
static void C_ccall f_5267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:566: walk */
t2=((C_word*)((C_word*)t0)[7])[1];
f_4969(t2,((C_word*)t0)[6],((C_word*)t0)[5],t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5232 in walk */
static void C_ccall f_5234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:544: single */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3875(t2,((C_word*)t0)[3],lf[146],t1,((C_word*)t0)[2]);}

/* k5062 in walk */
static void C_ccall f_5064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5064,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[14]);
t3=C_i_caddr(((C_word*)t0)[14]);
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_5073,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* scrutinizer.scm:547: always-true */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1840(t5,t4,t1,((C_word*)t0)[10],((C_word*)t0)[8]);}

/* k5071 in k5062 in walk */
static void C_ccall f_5073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5073,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5076,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
/* scrutinizer.scm:548: walk */
t3=((C_word*)((C_word*)t0)[7])[1];
f_4969(t3,t2,((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[11],((C_word*)t0)[4],((C_word*)t0)[3]);}

/* k5074 in k5071 in k5062 in walk */
static void C_ccall f_5076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5076,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5079,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=t1,a[9]=((C_word*)t0)[13],tmp=(C_word)a,a+=10,tmp);
/* scrutinizer.scm:549: walk */
t3=((C_word*)((C_word*)t0)[6])[1];
f_4969(t3,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[10],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5077 in k5074 in k5071 in k5062 in walk */
static void C_ccall f_5079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5079,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5085,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t3=C_eqp(lf[8],((C_word*)t0)[8]);
if(C_truep(t3)){
t4=t2;
f_5085(t4,C_SCHEME_FALSE);}
else{
t4=C_eqp(lf[8],t1);
t5=t2;
f_5085(t5,C_i_not(t4));}}

/* k5083 in k5077 in k5074 in k5071 in k5062 in walk */
static void C_fcall f_5085(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5085,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5088,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5158,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5216,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* scrutinizer.scm:551: any */
t5=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[9]);}
else{
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[8]);}}

/* k5214 in k5083 in k5077 in k5074 in k5071 in k5062 in walk */
static void C_ccall f_5216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5216,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
f_5158(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5212,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* scrutinizer.scm:552: any */
t3=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);}}

/* k5210 in k5214 in k5083 in k5077 in k5074 in k5071 in k5062 in walk */
static void C_ccall f_5212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_5158(t2,C_SCHEME_FALSE);}
else{
t2=C_i_length(((C_word*)t0)[3]);
t3=C_i_length(((C_word*)t0)[2]);
t4=C_i_nequalp(t2,t3);
t5=((C_word*)t0)[4];
f_5158(t5,C_i_not(t4));}}

/* k5156 in k5083 in k5077 in k5074 in k5071 in k5062 in walk */
static void C_fcall f_5158(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5158,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5165,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* open-output-string */
t3=*((C_word*)lf[11]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[5];
f_5088(2,t2,C_SCHEME_UNDEFINED);}}

/* k5163 in k5156 in k5083 in k5077 in k5074 in k5071 in k5062 in walk */
static void C_ccall f_5165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5165,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5168,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[145],t1);}

/* k5166 in k5163 in k5156 in k5083 in k5077 in k5074 in k5071 in k5062 in walk */
static void C_ccall f_5168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5168,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5171,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* write-char/port */
t3=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[4]);}

/* k5169 in k5166 in k5163 in k5156 in k5083 in k5077 in k5074 in k5071 in k5062 in walk */
static void C_ccall f_5171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5171,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5174,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* write-char/port */
t3=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[4]);}

/* k5172 in k5169 in k5166 in k5163 in k5156 in k5083 in k5077 in k5074 in k5071 in k5062 in walk */
static void C_ccall f_5174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5174,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5177,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5184,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm:558: pp-fragment */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4181(t4,t3,((C_word*)t0)[2]);}

/* k5182 in k5172 in k5169 in k5166 in k5163 in k5156 in k5083 in k5077 in k5074 in k5071 in k5062 in walk */
static void C_ccall f_5184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
t2=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5175 in k5172 in k5169 in k5166 in k5163 in k5156 in k5083 in k5077 in k5074 in k5071 in k5062 in walk */
static void C_ccall f_5177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5177,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5180,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* get-output-string */
t3=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5178 in k5175 in k5172 in k5169 in k5166 in k5163 in k5156 in k5083 in k5077 in k5074 in k5071 in k5062 in walk */
static void C_ccall f_5180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:554: report */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3956(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5086 in k5083 in k5077 in k5074 in k5071 in k5062 in walk */
static void C_ccall f_5088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5088,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5089,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t7=C_i_check_list_2(((C_word*)t0)[4],lf[37]);
t8=C_i_check_list_2(((C_word*)t0)[3],lf[37]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5108,a[2]=t6,a[3]=t3,a[4]=t10,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_5108(t12,((C_word*)t0)[2],((C_word*)t0)[4],((C_word*)t0)[3]);}

/* map-loop1173 in k5086 in k5083 in k5077 in k5074 in k5071 in k5062 in walk */
static void C_fcall f_5108(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5108,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5141,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* g11791189 */
t9=((C_word*)t0)[2];
f_5089(t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[3])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k5139 in map-loop1173 in k5086 in k5083 in k5077 in k5074 in k5071 in k5062 in walk */
static void C_ccall f_5141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5141,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5121,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_5121(t4,C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_5121(t5,t4);}}

/* k5119 in k5139 in map-loop1173 in k5086 in k5083 in k5077 in k5074 in k5071 in k5062 in walk */
static void C_fcall f_5121(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
f_5108(t5,((C_word*)t0)[2],t3,t4);}

/* g1179 in k5086 in k5083 in k5077 in k5074 in k5071 in k5062 in walk */
static void C_fcall f_5089(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5089,NULL,4,t0,t1,t2,t3);}
t4=C_a_i_list(&a,3,lf[26],t2,t3);
/* scrutinizer.scm:559: simplify */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2237(t5,t1,t4);}

/* self-call? */
static void C_fcall f_4877(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4877,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=C_slot(t4,C_fix(1));
t6=C_eqp(t5,lf[127]);
if(C_truep(t6)){
if(C_truep(C_i_pairp(t3))){
t7=t2;
t8=C_slot(t7,C_fix(3));
t9=C_i_car(t8);
t10=C_slot(t9,C_fix(1));
t11=C_eqp(lf[128],t10);
if(C_truep(t11)){
t12=C_i_car(t3);
t13=C_slot(t9,C_fix(2));
t14=C_i_car(t13);
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_eqp(t12,t14));}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}}
else{
t7=C_eqp(t5,lf[129]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4958,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t9=t2;
t10=C_slot(t9,C_fix(3));
/* scrutinizer.scm:529: last */
t11=*((C_word*)lf[130]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t8,t10);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}}

/* k4956 in self-call? */
static void C_ccall f_4958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:529: self-call? */
t2=((C_word*)((C_word*)t0)[4])[1];
f_4877(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* noreturn-type? */
static void C_ccall f_4845(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4845,3,t0,t1,t2);}
t3=C_eqp(lf[70],t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=C_eqp(lf[26],t4);
if(C_truep(t5)){
t6=C_i_cdr(t2);
/* scrutinizer.scm:520: any */
t7=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,((C_word*)((C_word*)t0)[2])[1],t6);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}}

/* procedure-argument-types */
static void C_fcall f_4574(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4574,NULL,4,t0,t1,t2,t3);}
t4=C_i_memq(t2,lf[125]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4584,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_4584(t6,t4);}
else{
t6=C_i_not_pair_p(t2);
if(C_truep(t6)){
t7=t5;
f_4584(t7,t6);}
else{
t7=C_i_car(t2);
t8=t5;
f_4584(t8,C_eqp(lf[7],t7));}}}

/* k4582 in procedure-argument-types */
static void C_fcall f_4584(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4584,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4591,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* scrutinizer.scm:482: make-list */
t3=*((C_word*)lf[124]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[8]);}
else{
t2=C_i_car(((C_word*)t0)[3]);
t3=C_eqp(lf[33],t2);
if(C_truep(t3)){
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4600,a[2]=t5,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4607,a[2]=((C_word*)t0)[4],a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t8=C_i_cadr(((C_word*)t0)[3]);
t9=C_i_stringp(t8);
if(C_truep(t9)){
t10=t7;
f_4607(t10,(C_truep(t9)?C_i_caddr(((C_word*)t0)[3]):C_i_cadr(((C_word*)t0)[3])));}
else{
t10=C_i_cadr(((C_word*)t0)[3]);
t11=C_i_symbolp(t10);
t12=t7;
f_4607(t12,(C_truep(t11)?C_i_caddr(((C_word*)t0)[3]):C_i_cadr(((C_word*)t0)[3])));}}
else{
/* scrutinizer.scm:500: bomb */
t4=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[5],lf[126],((C_word*)t0)[3]);}}}

/* k4605 in k4582 in procedure-argument-types */
static void C_fcall f_4607(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4607,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4609,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4609(t5,((C_word*)t0)[3],t1,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* loop in k4605 in k4582 in procedure-argument-types */
static void C_fcall f_4609(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word *a;
loop:
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4609,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_END_OF_LIST);}
else{
t5=C_i_car(t2);
t6=C_eqp(lf[66],t5);
if(C_truep(t6)){
t7=C_i_cdr(t2);
/* scrutinizer.scm:493: loop */
t19=t1;
t20=t7;
t21=t3;
t22=C_SCHEME_TRUE;
t1=t19;
t2=t20;
t3=t21;
t4=t22;
goto loop;}
else{
t7=C_i_car(t2);
t8=C_eqp(lf[65],t7);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4639,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t10=C_i_cdr(t2);
if(C_truep(C_i_pairp(t10))){
t11=C_i_cadr(t2);
t12=t9;
f_4639(t12,C_eqp(lf[64],t11));}
else{
t11=t9;
f_4639(t11,C_SCHEME_FALSE);}}
else{
t9=(C_truep(t4)?C_i_less_or_equalp(t3,C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t9)){
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_END_OF_LIST);}
else{
t10=C_i_car(t2);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4681,a[2]=t10,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t12=C_i_cdr(t2);
t13=C_a_i_minus(&a,2,t3,C_fix(1));
/* scrutinizer.scm:498: loop */
t19=t11;
t20=t12;
t21=t13;
t22=t4;
t1=t19;
t2=t20;
t3=t21;
t4=t22;
goto loop;}}}}}

/* k4679 in loop in k4605 in k4582 in procedure-argument-types */
static void C_ccall f_4681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4681,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k4637 in loop in k4605 in k4582 in procedure-argument-types */
static void C_fcall f_4639(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=C_i_cdr(((C_word*)t0)[5]);
t4=f_2755(t3);
/* scrutinizer.scm:496: make-list */
t5=*((C_word*)lf[124]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[3],((C_word*)t0)[2],t4);}

/* k4598 in k4582 in procedure-argument-types */
static void C_ccall f_4600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:499: values */
C_values(4,0,((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k4589 in k4582 in procedure-argument-types */
static void C_ccall f_4591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:482: values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* procedure-type? */
static void C_ccall f_4532(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4532,3,t0,t1,t2);}
t3=C_eqp(lf[33],t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=C_eqp(lf[33],t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=C_i_car(t2);
t7=C_eqp(lf[26],t6);
if(C_truep(t7)){
t8=C_i_cdr(t2);
/* scrutinizer.scm:477: every */
t9=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t1,((C_word*)((C_word*)t0)[2])[1],t8);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}}

/* call-result */
static void C_fcall f_4201(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4201,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4204,a[2]=t5,a[3]=t4,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t7=C_i_car(t2);
t8=C_i_cdr(t2);
t9=C_i_length(t8);
t10=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4526,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t9,a[5]=((C_word*)t0)[3],a[6]=t6,a[7]=t3,a[8]=((C_word*)t0)[4],a[9]=t7,a[10]=((C_word*)t0)[5],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
/* scrutinizer.scm:439: make-list */
t11=*((C_word*)lf[124]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t10,t9,lf[8]);}

/* k4524 in call-result */
static void C_ccall f_4526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4526,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[33],t1,lf[8]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4281,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4476,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[7],a[6]=t3,a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4522,a[2]=((C_word*)t0)[9],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* scrutinizer.scm:440: procedure-type? */
t6=((C_word*)((C_word*)t0)[2])[1];
f_4532(3,t6,t5,((C_word*)t0)[9]);}

/* k4520 in k4524 in call-result */
static void C_ccall f_4522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4522,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
f_4476(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4518,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* scrutinizer.scm:441: match */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3005(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k4516 in k4520 in k4524 in call-result */
static void C_ccall f_4518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4476(t2,C_i_not(t1));}

/* k4474 in k4524 in call-result */
static void C_fcall f_4476(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4476,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4483,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* open-output-string */
t3=*((C_word*)lf[11]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[6];
f_4281(2,t2,C_SCHEME_UNDEFINED);}}

/* k4481 in k4474 in k4524 in call-result */
static void C_ccall f_4483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4483,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4486,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4508,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm:446: pname */
t4=((C_word*)t0)[2];
f_4204(t4,t3);}

/* k4506 in k4481 in k4474 in k4524 in call-result */
static void C_ccall f_4508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
t2=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4484 in k4481 in k4474 in k4524 in call-result */
static void C_ccall f_4486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4486,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4489,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[123],((C_word*)t0)[4]);}

/* k4487 in k4484 in k4481 in k4474 in k4524 in call-result */
static void C_ccall f_4489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4489,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4492,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k4490 in k4487 in k4484 in k4481 in k4474 in k4524 in call-result */
static void C_ccall f_4492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4492,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4495,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[122],((C_word*)t0)[3]);}

/* k4493 in k4490 in k4487 in k4484 in k4481 in k4474 in k4524 in call-result */
static void C_ccall f_4495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4495,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4498,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k4496 in k4493 in k4490 in k4487 in k4484 in k4481 in k4474 in k4524 in call-result */
static void C_ccall f_4498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4498,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4501,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(39),((C_word*)t0)[2]);}

/* k4499 in k4496 in k4493 in k4490 in k4487 in k4484 in k4481 in k4474 in k4524 in call-result */
static void C_ccall f_4501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4501,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4504,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* get-output-string */
t3=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k4502 in k4499 in k4496 in k4493 in k4490 in k4487 in k4484 in k4481 in k4474 in k4524 in call-result */
static void C_ccall f_4504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:442: report */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3956(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4279 in k4524 in call-result */
static void C_ccall f_4281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4281,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4286,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4300,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4300(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4300,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4307,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=t3,a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
t5=C_i_length(t2);
if(C_truep(C_i_nequalp(t5,((C_word*)t0)[2]))){
t6=t4;
f_4307(2,t6,C_SCHEME_UNDEFINED);}
else{
t6=C_i_length(t2);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4427,a[2]=((C_word*)t0)[4],a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* open-output-string */
t8=*((C_word*)lf[11]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* k4425 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4427,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4430,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4469,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm:457: pname */
t4=((C_word*)t0)[2];
f_4204(t4,t3);}

/* k4467 in k4425 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
t2=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4428 in k4425 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4430,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4433,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[121],((C_word*)t0)[4]);}

/* k4431 in k4428 in k4425 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4433,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4436,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k4434 in k4431 in k4428 in k4425 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4436,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4439,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[120],((C_word*)t0)[4]);}

/* k4437 in k4434 in k4431 in k4428 in k4425 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4439,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4442,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=C_i_nequalp(((C_word*)t0)[2],C_fix(1));
t4=(C_truep(t3)?lf[45]:lf[46]);
/* display */
t5=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t4,((C_word*)t0)[4]);}

/* k4440 in k4437 in k4434 in k4431 in k4428 in k4425 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4442,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4445,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[119],((C_word*)t0)[3]);}

/* k4443 in k4440 in k4437 in k4434 in k4431 in k4428 in k4425 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4445,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4448,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k4446 in k4443 in k4440 in k4437 in k4434 in k4431 in k4428 in k4425 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4448,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4451,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[118],((C_word*)t0)[3]);}

/* k4449 in k4446 in k4443 in k4440 in k4437 in k4434 in k4431 in k4428 in k4425 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4451,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4454,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=C_i_nequalp(((C_word*)t0)[2],C_fix(1));
t4=(C_truep(t3)?lf[45]:lf[46]);
/* display */
t5=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t4,((C_word*)t0)[3]);}

/* k4452 in k4449 in k4446 in k4443 in k4440 in k4437 in k4434 in k4431 in k4428 in k4425 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4454,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4457,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* get-output-string */
t3=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k4455 in k4452 in k4449 in k4446 in k4443 in k4440 in k4437 in k4434 in k4431 in k4428 in k4425 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:453: report */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3956(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4305 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4307,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4310,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cdr(((C_word*)t0)[10]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4326,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t5,tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_4326(t7,t2,t3,((C_word*)t0)[2],C_fix(1));}

/* doloop995 in k4305 in a4299 in k4279 in k4524 in call-result */
static void C_fcall f_4326(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4326,NULL,5,t0,t1,t2,t3,t4);}
t5=C_i_nullp(t2);
t6=(C_truep(t5)?t5:C_i_nullp(t3));
if(C_truep(t6)){
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4339,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=t4,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4357,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t7,tmp=(C_word)a,a+=9,tmp);
t9=C_i_car(t3);
t10=C_i_car(t2);
/* scrutinizer.scm:463: match */
t11=((C_word*)((C_word*)t0)[2])[1];
f_3005(t11,t8,t9,t10);}}

/* k4355 in doloop995 in k4305 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4357,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
f_4339(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4364,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* open-output-string */
t3=*((C_word*)lf[11]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k4362 in k4355 in doloop995 in k4305 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4364,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4367,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4403,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm:468: pname */
t4=((C_word*)t0)[2];
f_4204(t4,t3);}

/* k4401 in k4362 in k4355 in doloop995 in k4305 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
t2=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4365 in k4362 in k4355 in doloop995 in k4305 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4367,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4370,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[117],((C_word*)t0)[5]);}

/* k4368 in k4365 in k4362 in k4355 in doloop995 in k4305 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4370,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4373,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[5]);}

/* k4371 in k4368 in k4365 in k4362 in k4355 in doloop995 in k4305 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4373,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4376,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[116],((C_word*)t0)[4]);}

/* k4374 in k4371 in k4368 in k4365 in k4362 in k4355 in doloop995 in k4305 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4376,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4379,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* display */
t4=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[4]);}

/* k4377 in k4374 in k4371 in k4368 in k4365 in k4362 in k4355 in doloop995 in k4305 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4379,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4382,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[115],((C_word*)t0)[3]);}

/* k4380 in k4377 in k4374 in k4371 in k4368 in k4365 in k4362 in k4355 in doloop995 in k4305 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4382,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4385,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* display */
t4=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[3]);}

/* k4383 in k4380 in k4377 in k4374 in k4371 in k4368 in k4365 in k4362 in k4355 in doloop995 in k4305 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4385,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4388,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(39),((C_word*)t0)[2]);}

/* k4386 in k4383 in k4380 in k4377 in k4374 in k4371 in k4368 in k4365 in k4362 in k4355 in doloop995 in k4305 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4388,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4391,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* get-output-string */
t3=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k4389 in k4386 in k4383 in k4380 in k4377 in k4374 in k4371 in k4368 in k4365 in k4362 in k4355 in doloop995 in k4305 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:464: report */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3956(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4337 in doloop995 in k4305 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4339,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[6]);
t3=C_i_cdr(((C_word*)t0)[5]);
t4=C_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
f_4326(t5,((C_word*)t0)[2],t2,t3,t4);}

/* k4308 in k4305 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4310,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t4=C_i_memq(((C_word*)t0)[2],lf[113]);
t5=(C_truep(t4)?t4:C_i_not_pair_p(((C_word*)t0)[2]));
if(C_truep(t5)){
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[8]);}
else{
t6=C_i_car(((C_word*)t0)[2]);
t7=C_eqp(lf[33],t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4769,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* scrutinizer.scm:507: call/cc */
t9=*((C_word*)lf[63]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,((C_word*)t0)[3],t8);}
else{
/* scrutinizer.scm:515: bomb */
t8=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,((C_word*)t0)[3],lf[114],((C_word*)t0)[2]);}}}}

/* a4768 in k4308 in k4305 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4769(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4769,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4777,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_i_stringp(t4);
if(C_truep(t5)){
t6=t3;
f_4777(t6,(C_truep(t5)?C_i_cdddr(((C_word*)t0)[2]):C_i_cddr(((C_word*)t0)[2])));}
else{
t6=C_i_cadr(((C_word*)t0)[2]);
t7=C_i_symbolp(t6);
t8=t3;
f_4777(t8,(C_truep(t7)?C_i_cdddr(((C_word*)t0)[2]):C_i_cddr(((C_word*)t0)[2])));}}

/* k4775 in a4768 in k4308 in k4305 in a4299 in k4279 in k4524 in call-result */
static void C_fcall f_4777(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4777,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4779,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4779(t5,((C_word*)t0)[2],t1);}

/* loop in k4775 in a4768 in k4308 in k4305 in a4299 in k4279 in k4524 in call-result */
static void C_fcall f_4779(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4779,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_eqp(lf[8],t2);
if(C_truep(t3)){
/* scrutinizer.scm:513: return */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,lf[8]);}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4806,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cdr(t2);
/* scrutinizer.scm:514: loop */
t8=t5;
t9=t6;
t1=t8;
t2=t9;
goto loop;}}}

/* k4804 in loop in k4775 in a4768 in k4308 in k4305 in a4299 in k4279 in k4524 in call-result */
static void C_ccall f_4806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4806,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* a4285 in k4279 in k4524 in call-result */
static void C_ccall f_4286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4286,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[4]);
t3=C_i_length(t2);
/* scrutinizer.scm:449: procedure-argument-types */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4574(t4,t1,((C_word*)t0)[2],t3);}

/* pname in call-result */
static void C_fcall f_4204(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4204,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4208,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* open-output-string */
t3=*((C_word*)lf[11]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4206 in pname in call-result */
static void C_ccall f_4208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4208,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4211,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4231,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4234,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t5=C_i_cdr(((C_word*)t0)[2]);
t6=t4;
f_4234(t6,C_i_pairp(t5));}
else{
t5=t4;
f_4234(t5,C_SCHEME_FALSE);}}

/* k4232 in k4206 in pname in call-result */
static void C_fcall f_4234(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4234,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4237,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* scrutinizer.scm:430: source-info->line */
t4=*((C_word*)lf[111]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
/* display */
t2=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[4],lf[112],((C_word*)t0)[3]);}}

/* k4235 in k4232 in k4206 in pname in call-result */
static void C_ccall f_4237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4237,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4243,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t3=*((C_word*)lf[11]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* display */
t2=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],lf[110],((C_word*)t0)[2]);}}

/* k4241 in k4235 in k4232 in k4206 in pname in call-result */
static void C_ccall f_4243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4243,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4246,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],t1);}

/* k4244 in k4241 in k4235 in k4232 in k4206 in pname in call-result */
static void C_ccall f_4246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4246,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4249,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[109],((C_word*)t0)[2]);}

/* k4247 in k4244 in k4241 in k4235 in k4232 in k4206 in pname in call-result */
static void C_ccall f_4249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4229 in k4206 in pname in call-result */
static void C_ccall f_4231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
t2=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4209 in k4206 in pname in call-result */
static void C_ccall f_4211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4211,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4214,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[108],((C_word*)t0)[4]);}

/* k4212 in k4209 in k4206 in pname in call-result */
static void C_ccall f_4214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4214,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4217,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4227,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm:435: fragment */
f_4091(t3,((C_word*)t0)[2]);}

/* k4225 in k4212 in k4209 in k4206 in pname in call-result */
static void C_ccall f_4227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write */
t2=*((C_word*)lf[107]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4215 in k4212 in k4209 in k4206 in pname in call-result */
static void C_ccall f_4217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4217,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4220,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[106],((C_word*)t0)[2]);}

/* k4218 in k4215 in k4212 in k4209 in k4206 in pname in call-result */
static void C_ccall f_4220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* pp-fragment */
static void C_fcall f_4181(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4181,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4189,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4191,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm:423: with-output-to-string */
t5=*((C_word*)lf[105]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a4190 in pp-fragment */
static void C_ccall f_4191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4191,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4199,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* scrutinizer.scm:425: fragment */
f_4091(t2,((C_word*)t0)[2]);}

/* k4197 in a4190 in pp-fragment */
static void C_ccall f_4199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:425: pp */
t2=*((C_word*)lf[104]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4187 in pp-fragment */
static void C_ccall f_4189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:422: string-chomp */
t2=*((C_word*)lf[103]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* fragment */
static void C_fcall f_4091(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4091,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4095,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* scrutinizer.scm:414: build-expression-tree */
t4=*((C_word*)lf[102]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4093 in fragment */
static void C_ccall f_4095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4095,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4100,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_4100(t5,((C_word*)t0)[2],t1,C_fix(0));}

/* walk in k4093 in fragment */
static void C_fcall f_4100(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4100,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_not_pair_p(t2))){
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
if(C_truep(C_i_greater_or_equalp(t3,C_fix(3)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[99]);}
else{
if(C_truep(C_i_listp(t2))){
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_a_i_plus(&a,2,t3,C_fix(1));
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4123,a[2]=t8,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4130,a[2]=t1,a[3]=t9,a[4]=t5,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4175,a[2]=t2,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
t12=C_i_length(t2);
/* scrutinizer.scm:419: min */
t13=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t11,C_fix(5),t12);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}}}

/* k4173 in walk in k4093 in fragment */
static void C_ccall f_4175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:419: take */
t2=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4128 in walk in k4093 in fragment */
static void C_ccall f_4130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4130,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[37]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4138,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_4138(t6,((C_word*)t0)[2],t1);}

/* map-loop862 in k4128 in walk in k4093 in fragment */
static void C_fcall f_4138(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4138,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4167,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g868877 */
t5=((C_word*)t0)[2];
f_4123(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4165 in map-loop862 in k4128 in walk in k4093 in fragment */
static void C_ccall f_4167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4167,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4138(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4138(t6,((C_word*)t0)[3],t5);}}

/* g868 in walk in k4093 in fragment */
static void C_fcall f_4123(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4123,NULL,3,t0,t1,t2);}
/* g882883889 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4100(t3,t1,t2,((C_word*)t0)[2]);}

/* location-name */
static void C_fcall f_3970(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3970,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3973,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[93]);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4011,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* open-output-string */
t6=*((C_word*)lf[11]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4036,a[2]=t3,a[3]=t6,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4036(t8,t1,t2);}}}

/* rec in location-name */
static void C_fcall f_4036(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4036,NULL,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
/* scrutinizer.scm:410: location-name */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3970(t4,t1,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4049,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* open-output-string */
t5=*((C_word*)lf[11]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k4047 in rec in location-name */
static void C_ccall f_4049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4049,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4052,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[97],t1);}

/* k4050 in k4047 in rec in location-name */
static void C_ccall f_4052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4052,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4055,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4076,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(((C_word*)t0)[4]);
/* scrutinizer.scm:411: lname */
f_3973(t3,t4);}

/* k4074 in k4050 in k4047 in rec in location-name */
static void C_ccall f_4076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
t2=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4053 in k4050 in k4047 in rec in location-name */
static void C_ccall f_4055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4055,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4058,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[96],((C_word*)t0)[4]);}

/* k4056 in k4053 in k4050 in k4047 in rec in location-name */
static void C_ccall f_4058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4058,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4061,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4068,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[3]);
/* scrutinizer.scm:411: rec */
t5=((C_word*)((C_word*)t0)[2])[1];
f_4036(t5,t3,t4);}

/* k4066 in k4056 in k4053 in k4050 in k4047 in rec in location-name */
static void C_ccall f_4068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
t2=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4059 in k4056 in k4053 in k4050 in k4047 in rec in location-name */
static void C_ccall f_4061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4009 in location-name */
static void C_ccall f_4011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4011,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4014,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[95],t1);}

/* k4012 in k4009 in location-name */
static void C_ccall f_4014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4014,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4017,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4027,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(((C_word*)t0)[3]);
/* scrutinizer.scm:406: lname */
f_3973(t3,t4);}

/* k4025 in k4012 in k4009 in location-name */
static void C_ccall f_4027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
t2=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4015 in k4012 in k4009 in location-name */
static void C_ccall f_4017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4017,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4020,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[94],((C_word*)t0)[2]);}

/* k4018 in k4015 in k4012 in k4009 in location-name */
static void C_ccall f_4020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* lname in location-name */
static void C_fcall f_3973(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3973,NULL,2,t1,t2);}
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3980,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t4=*((C_word*)lf[11]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[92]);}}

/* k3978 in lname in location-name */
static void C_ccall f_3980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3980,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3983,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[91],t1);}

/* k3981 in k3978 in lname in location-name */
static void C_ccall f_3983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3983,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3986,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3996,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm:402: real-name */
t4=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k3994 in k3981 in k3978 in lname in location-name */
static void C_ccall f_3996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
t2=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3984 in k3981 in k3978 in lname in location-name */
static void C_ccall f_3986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3986,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3989,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(39),((C_word*)t0)[2]);}

/* k3987 in k3984 in k3981 in k3978 in lname in location-name */
static void C_ccall f_3989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* report */
static void C_fcall f_3956(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3956,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3964,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3968,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm:398: location-name */
t6=((C_word*)((C_word*)t0)[2])[1];
f_3970(t6,t5,t2);}

/* k3966 in report */
static void C_ccall f_3968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:398: conc */
t2=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3962 in report */
static void C_ccall f_3964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:397: warning */
t2=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* single */
static void C_fcall f_3875(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3875,NULL,5,t0,t1,t2,t3,t4);}
t5=C_eqp(lf[8],t3);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[8]);}
else{
t6=C_i_length(t3);
if(C_truep(C_i_nequalp(C_fix(1),t6))){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_car(t3));}
else{
if(C_truep(C_i_zerop(t6))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3903,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3907,a[2]=t2,a[3]=t4,a[4]=t7,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* open-output-string */
t9=*((C_word*)lf[11]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3922,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3929,a[2]=t2,a[3]=t6,a[4]=t4,a[5]=t7,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* open-output-string */
t9=*((C_word*)lf[11]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}}}

/* k3927 in single */
static void C_ccall f_3929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3929,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3932,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[88],t1);}

/* k3930 in k3927 in single */
static void C_ccall f_3932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3932,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3935,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k3933 in k3930 in k3927 in single */
static void C_ccall f_3935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3935,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3938,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[87],((C_word*)t0)[3]);}

/* k3936 in k3933 in k3930 in k3927 in single */
static void C_ccall f_3938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3938,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3941,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3939 in k3936 in k3933 in k3930 in k3927 in single */
static void C_ccall f_3941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3941,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3944,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[86],((C_word*)t0)[3]);}

/* k3942 in k3939 in k3936 in k3933 in k3930 in k3927 in single */
static void C_ccall f_3944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3944,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3947,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=C_i_nequalp(((C_word*)t0)[2],C_fix(1));
t4=(C_truep(t3)?lf[45]:lf[46]);
/* display */
t5=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t4,((C_word*)t0)[3]);}

/* k3945 in k3942 in k3939 in k3936 in k3933 in k3930 in k3927 in single */
static void C_ccall f_3947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3947,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3950,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* get-output-string */
t3=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k3948 in k3945 in k3942 in k3939 in k3936 in k3933 in k3930 in k3927 in single */
static void C_ccall f_3950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:391: report */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3956(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3920 in single */
static void C_ccall f_3922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_car(((C_word*)t0)[2]));}

/* k3905 in single */
static void C_ccall f_3907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3907,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3910,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[85],t1);}

/* k3908 in k3905 in single */
static void C_ccall f_3910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3910,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3913,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3911 in k3908 in k3905 in single */
static void C_ccall f_3913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3913,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3916,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[84],((C_word*)t0)[2]);}

/* k3914 in k3911 in k3908 in k3905 in single */
static void C_ccall f_3916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3916,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3919,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* get-output-string */
t3=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k3917 in k3914 in k3911 in k3908 in k3905 in single */
static void C_ccall f_3919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:386: report */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3956(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3901 in single */
static void C_ccall f_3903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[17]);}

/* type<=? */
static void C_fcall f_3551(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3551,NULL,4,t0,t1,t2,t3);}
t4=C_eqp(t2,t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=C_i_memq(t3,lf[81]);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=t3;
t7=C_eqp(t6,lf[75]);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_memq(t2,lf[82]));}
else{
t8=C_eqp(t6,lf[33]);
if(C_truep(t8)){
if(C_truep(C_i_pairp(t2))){
t9=C_i_car(t2);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_eqp(lf[33],t9));}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}}
else{
t9=C_eqp(t6,lf[71]);
if(C_truep(t9)){
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_i_memq(t2,lf[83]));}
else{
if(C_truep(C_i_pairp(t2))){
if(C_truep(C_i_pairp(t3))){
t10=C_i_car(t2);
t11=C_eqp(t10,lf[26]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3627,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t13=C_i_cdr(t2);
/* scrutinizer.scm:347: every */
t14=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,t12,t13);}
else{
t12=C_eqp(t10,lf[33]);
if(C_truep(t12)){
t13=f_2715(t2);
t14=(C_truep(t13)?C_i_caddr(t2):C_i_cadr(t2));
t15=f_2715(t3);
t16=(C_truep(t15)?C_i_caddr(t3):C_i_cadr(t3));
t17=f_2715(t2);
t18=(C_truep(t17)?C_i_cdddr(t2):C_i_cddr(t2));
t19=f_2715(t3);
t20=(C_truep(t19)?C_i_cdddr(t3):C_i_cddr(t3));
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3658,a[2]=t22,a[3]=t20,a[4]=t18,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp));
t24=((C_word*)t22)[1];
f_3658(t24,t1,t14,t16,C_fix(0),C_fix(0));}
else{
t13=C_SCHEME_UNDEFINED;
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,t13);}}}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}}}}}}

/* loop1 in type<=? */
static void C_fcall f_3658(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word *a;
loop:
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3658,NULL,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_nullp(t2))){
t6=C_i_nullp(t3);
t7=(C_truep(t6)?t6:C_i_greaterp(t5,C_fix(0)));
if(C_truep(t7)){
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3679,a[2]=((C_word*)t0)[5],a[3]=t9,tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_3679(t11,t1,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}
else{
if(C_truep(C_i_nullp(t3))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=C_i_car(t2);
t7=C_eqp(t6,lf[66]);
if(C_truep(t7)){
t8=C_i_cdr(t2);
/* scrutinizer.scm:368: loop1 */
t27=t1;
t28=t8;
t29=t3;
t30=C_fix(1);
t31=t5;
t1=t27;
t2=t28;
t3=t29;
t4=t30;
t5=t31;
goto loop;}
else{
t8=C_i_car(t3);
t9=C_eqp(t8,lf[66]);
if(C_truep(t9)){
t10=C_i_cdr(t3);
/* scrutinizer.scm:370: loop1 */
t27=t1;
t28=t2;
t29=t10;
t30=t4;
t31=C_fix(1);
t1=t27;
t2=t28;
t3=t29;
t4=t30;
t5=t31;
goto loop;}
else{
t10=C_i_car(t2);
t11=C_eqp(t10,lf[65]);
if(C_truep(t11)){
t12=C_i_cdr(t2);
/* scrutinizer.scm:372: loop1 */
t27=t1;
t28=t12;
t29=t3;
t30=C_fix(2);
t31=t5;
t1=t27;
t2=t28;
t3=t29;
t4=t30;
t5=t31;
goto loop;}
else{
t12=C_i_car(t3);
t13=C_eqp(t12,lf[65]);
if(C_truep(t13)){
t14=C_i_cdr(t3);
/* scrutinizer.scm:374: loop1 */
t27=t1;
t28=t2;
t29=t14;
t30=t4;
t31=C_fix(2);
t1=t27;
t2=t28;
t3=t29;
t4=t30;
t5=t31;
goto loop;}
else{
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3793,a[2]=t5,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t15=C_i_car(t2);
t16=C_i_car(t3);
/* scrutinizer.scm:375: type<=? */
t17=((C_word*)((C_word*)t0)[5])[1];
f_3551(t17,t14,t15,t16);}}}}}}}

/* k3791 in loop1 in type<=? */
static void C_ccall f_3793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[7]);
t3=C_i_cdr(((C_word*)t0)[6]);
/* scrutinizer.scm:376: loop1 */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3658(t4,((C_word*)t0)[4],t2,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* loop2 in loop1 in type<=? */
static void C_fcall f_3679(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3679,NULL,4,t0,t1,t2,t3);}
t4=C_eqp(lf[8],t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_TRUE);}
else{
if(C_truep(C_i_nullp(t3))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_nullp(t2));}
else{
t5=C_eqp(lf[8],t2);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3707,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_i_car(t2);
t8=C_i_car(t3);
/* scrutinizer.scm:363: type<=? */
t9=((C_word*)((C_word*)t0)[2])[1];
f_3551(t9,t6,t7,t8);}}}}

/* k3705 in loop2 in loop1 in type<=? */
static void C_ccall f_3707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[5]);
t3=C_i_cdr(((C_word*)t0)[4]);
/* scrutinizer.scm:364: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3679(t4,((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a3626 in type<=? */
static void C_ccall f_3627(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3627,3,t0,t1,t2);}
/* g725726 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3551(t3,t1,t2,((C_word*)t0)[2]);}

/* match-results */
static void C_fcall f_3496(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3496,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_not_pair_p(t3));}
else{
t4=C_eqp(lf[8],t2);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=C_eqp(lf[8],t3);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
if(C_truep(C_i_nullp(t3))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3530,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_i_car(t2);
t8=C_i_car(t3);
/* scrutinizer.scm:334: match */
t9=((C_word*)((C_word*)t0)[2])[1];
f_3005(t9,t6,t7,t8);}}}}}

/* k3528 in match-results */
static void C_ccall f_3530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[5]);
t3=C_i_cdr(((C_word*)t0)[4]);
/* scrutinizer.scm:335: match-results */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3496(t4,((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* match-args */
static void C_fcall f_3286(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3286,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3292,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3351,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3351(t8,t1,t2,t3,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* loop in match-args */
static void C_fcall f_3351(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word *a;
loop:
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3351,NULL,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_nullp(t2))){
t6=t5;
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t7=C_i_nullp(t3);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t8=C_i_car(t3);
t9=t1;
t10=t9;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_i_memq(t8,lf[80]));}}}
else{
if(C_truep(C_i_nullp(t3))){
t6=t4;
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t7=C_i_car(t2);
t8=t1;
t9=t8;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_i_memq(t7,lf[80]));}}
else{
t6=C_i_car(t2);
t7=C_eqp(lf[66],t6);
if(C_truep(t7)){
t8=C_i_cdr(t2);
/* scrutinizer.scm:320: loop */
t31=t1;
t32=t8;
t33=t3;
t34=C_SCHEME_TRUE;
t35=t5;
t1=t31;
t2=t32;
t3=t33;
t4=t34;
t5=t35;
goto loop;}
else{
t8=C_i_car(t3);
t9=C_eqp(lf[66],t8);
if(C_truep(t9)){
t10=C_i_cdr(t3);
/* scrutinizer.scm:322: loop */
t31=t1;
t32=t2;
t33=t10;
t34=t4;
t35=C_SCHEME_TRUE;
t1=t31;
t2=t32;
t3=t33;
t4=t34;
t5=t35;
goto loop;}
else{
t10=C_i_car(t2);
t11=C_eqp(lf[65],t10);
if(C_truep(t11)){
t12=C_i_cdr(t2);
t13=f_2755(t12);
/* scrutinizer.scm:324: match-rest */
t14=((C_word*)t0)[3];
f_3292(t14,t1,t13,t3);}
else{
t12=C_i_car(t3);
t13=C_eqp(lf[65],t12);
if(C_truep(t13)){
t14=C_i_cdr(t3);
t15=f_2755(t14);
/* scrutinizer.scm:326: match-rest */
t16=((C_word*)t0)[3];
f_3292(t16,t1,t15,t2);}
else{
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3459,a[2]=t5,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t15=C_i_car(t2);
t16=C_i_car(t3);
/* scrutinizer.scm:327: match */
t17=((C_word*)((C_word*)t0)[2])[1];
f_3005(t17,t14,t15,t16);}}}}}}}

/* k3457 in loop in match-args */
static void C_ccall f_3459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[7]);
t3=C_i_cdr(((C_word*)t0)[6]);
/* scrutinizer.scm:327: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3351(t4,((C_word*)t0)[4],t2,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* match-rest in match-args */
static void C_fcall f_3292(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3292,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3298,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3310,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a3309 in match-rest in match-args */
static void C_ccall f_3310(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3310,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3317,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3336,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm:306: every */
t6=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,t2);}

/* a3335 in a3309 in match-rest in match-args */
static void C_ccall f_3336(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3336,3,t0,t1,t2);}
/* g661662 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3005(t3,t1,((C_word*)t0)[2],t2);}

/* k3315 in a3309 in match-rest in match-args */
static void C_ccall f_3317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
if(C_truep(C_i_pairp(((C_word*)t0)[6]))){
t2=C_i_cdr(((C_word*)t0)[6]);
t3=f_2755(t2);
/* scrutinizer.scm:307: match */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3005(t4,((C_word*)t0)[3],((C_word*)t0)[2],t3);}
else{
/* scrutinizer.scm:307: match */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3005(t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[8]);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a3297 in match-rest in match-args */
static void C_ccall f_3298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3298,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3304,tmp=(C_word)a,a+=2,tmp);
/* scrutinizer.scm:305: break */
t3=*((C_word*)lf[79]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,((C_word*)t0)[2]);}

/* a3303 in a3297 in match-rest in match-args */
static void C_ccall f_3304(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3304,3,t0,t1,t2);}
t3=*((C_word*)lf[57]+1);
/* g648649 */
t4=t3;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,lf[65],t2);}

/* match1 */
static void C_fcall f_3014(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3014,NULL,4,t0,t1,t2,t3);}
t4=C_eqp(t2,t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=C_eqp(t2,lf[8]);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=C_eqp(t3,lf[8]);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t7=C_eqp(t2,lf[70]);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t8=C_eqp(t3,lf[70]);
if(C_truep(t8)){
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t9=C_eqp(t2,lf[71]);
t10=(C_truep(t9)?C_i_memq(t3,lf[72]):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}
else{
t11=C_eqp(t3,lf[71]);
t12=(C_truep(t11)?C_i_memq(t2,lf[73]):C_SCHEME_FALSE);
if(C_truep(t12)){
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}
else{
t13=C_eqp(lf[33],t2);
if(C_truep(t13)){
if(C_truep(C_i_pairp(t3))){
t14=C_i_car(t3);
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_eqp(lf[33],t14));}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t14=C_eqp(lf[33],t3);
if(C_truep(t14)){
if(C_truep(C_i_pairp(t2))){
t15=C_i_car(t2);
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_eqp(lf[33],t15));}
else{
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_SCHEME_FALSE);}}
else{
t15=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3101,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t2,a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_pairp(t2))){
t16=C_i_car(t2);
t17=t15;
f_3101(t17,C_eqp(lf[26],t16));}
else{
t16=t15;
f_3101(t16,C_SCHEME_FALSE);}}}}}}}}}}}

/* k3099 in match1 */
static void C_fcall f_3101(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3101,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3106,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[6]);
/* scrutinizer.scm:286: any */
t4=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[5],t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3120,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[7]))){
t3=C_i_car(((C_word*)t0)[7]);
t4=t2;
f_3120(t4,C_eqp(lf[26],t3));}
else{
t3=t2;
f_3120(t3,C_SCHEME_FALSE);}}}

/* k3118 in k3099 in match1 */
static void C_fcall f_3120(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3120,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3125,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[6]);
/* scrutinizer.scm:287: any */
t4=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[5],t2,t3);}
else{
t2=((C_word*)t0)[7];
if(C_truep((C_truep(C_eqp(t2,lf[74]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[75]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_memq(((C_word*)t0)[6],lf[76]));}
else{
t3=((C_word*)t0)[7];
if(C_truep((C_truep(C_eqp(t3,lf[77]))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,lf[75]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_memq(((C_word*)t0)[6],lf[78]));}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3157,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[7]))){
if(C_truep(C_i_pairp(((C_word*)t0)[6]))){
t5=C_i_car(((C_word*)t0)[7]);
t6=C_i_car(((C_word*)t0)[6]);
t7=t4;
f_3157(t7,C_eqp(t5,t6));}
else{
t5=t4;
f_3157(t5,C_SCHEME_FALSE);}}
else{
t5=t4;
f_3157(t5,C_SCHEME_FALSE);}}}}}

/* k3155 in k3118 in k3099 in match1 */
static void C_fcall f_3157(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3157,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[7]);
t3=C_eqp(t2,lf[33]);
if(C_truep(t3)){
t4=f_2715(((C_word*)t0)[7]);
t5=(C_truep(t4)?C_i_caddr(((C_word*)t0)[7]):C_i_cadr(((C_word*)t0)[7]));
t6=f_2715(((C_word*)t0)[5]);
t7=(C_truep(t6)?C_i_caddr(((C_word*)t0)[5]):C_i_cadr(((C_word*)t0)[5]));
t8=f_2715(((C_word*)t0)[7]);
t9=(C_truep(t8)?C_i_cdddr(((C_word*)t0)[7]):C_i_cddr(((C_word*)t0)[7]));
t10=f_2715(((C_word*)t0)[5]);
t11=(C_truep(t10)?C_i_cdddr(((C_word*)t0)[5]):C_i_cddr(((C_word*)t0)[5]));
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3184,a[2]=t11,a[3]=t9,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* scrutinizer.scm:297: match-args */
t13=((C_word*)((C_word*)t0)[2])[1];
f_3286(t13,t12,t5,t7);}
else{
t4=C_eqp(t2,lf[40]);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?C_i_equalp(((C_word*)t0)[7],((C_word*)t0)[5]):C_SCHEME_FALSE));}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k3182 in k3155 in k3118 in k3099 in match1 */
static void C_ccall f_3184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* scrutinizer.scm:298: match-results */
t2=((C_word*)((C_word*)t0)[5])[1];
f_3496(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a3124 in k3118 in k3099 in match1 */
static void C_ccall f_3125(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3125,3,t0,t1,t2);}
/* g616617 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3005(t3,t1,((C_word*)t0)[2],t2);}

/* a3105 in k3099 in match1 */
static void C_ccall f_3106(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3106,3,t0,t1,t2);}
/* g607608 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3005(t3,t1,t2,((C_word*)t0)[2]);}

/* match */
static void C_fcall f_3005(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3005,NULL,4,t0,t1,t2,t3);}
/* scrutinizer.scm:273: match1 */
t4=((C_word*)((C_word*)t0)[2])[1];
f_3014(t4,t1,t2,t3);}

/* merge-result-types */
static void C_fcall f_2947(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2947,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t4=C_i_not_pair_p(t2);
t5=(C_truep(t4)?t4:C_i_not_pair_p(t3));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[8]);}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2976,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_i_car(t2);
t8=C_i_car(t3);
t9=C_a_i_list(&a,3,lf[26],t7,t8);
/* scrutinizer.scm:270: simplify */
t10=((C_word*)((C_word*)t0)[2])[1];
f_2237(t10,t6,t9);}}}}

/* k2974 in merge-result-types */
static void C_ccall f_2976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2976,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2980,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[4]);
t4=C_i_cdr(((C_word*)t0)[3]);
/* scrutinizer.scm:271: merge-result-types */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2947(t5,t2,t3,t4);}

/* k2978 in k2974 in merge-result-types */
static void C_ccall f_2980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2980,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* merge-argument-types */
static void C_fcall f_2777(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2777,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=C_i_car(t3);
if(C_truep((C_truep(C_eqp(t4,lf[65]))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,lf[66]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[67]);}}}
else{
t4=C_i_car(t2);
t5=C_eqp(lf[65],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2812,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(t3))){
t7=C_i_car(t3);
t8=t6;
f_2812(t8,C_eqp(lf[65],t7));}
else{
t7=t6;
f_2812(t7,C_SCHEME_FALSE);}}
else{
t6=C_i_car(t2);
t7=C_eqp(lf[66],t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2861,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(t3))){
t9=C_i_car(t3);
t10=t8;
f_2861(t10,C_eqp(lf[66],t9));}
else{
t9=t8;
f_2861(t9,C_SCHEME_FALSE);}}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2913,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=C_i_car(t2);
t10=C_i_car(t3);
t11=C_a_i_list(&a,3,lf[26],t9,t10);
/* scrutinizer.scm:264: simplify */
t12=((C_word*)((C_word*)t0)[3])[1];
f_2237(t12,t8,t11);}}}}

/* k2911 in merge-argument-types */
static void C_ccall f_2913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2913,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2917,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[4]);
t4=C_i_cdr(((C_word*)t0)[3]);
/* scrutinizer.scm:265: merge-argument-types */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2777(t5,t2,t3,t4);}

/* k2915 in k2911 in merge-argument-types */
static void C_ccall f_2917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2917,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k2859 in merge-argument-types */
static void C_fcall f_2861(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2861,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2872,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[5]);
t4=C_i_cadr(((C_word*)t0)[4]);
t5=C_a_i_list(&a,3,lf[26],t3,t4);
/* scrutinizer.scm:261: simplify */
t6=((C_word*)((C_word*)t0)[2])[1];
f_2237(t6,t2,t5);}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[69]);}}

/* k2870 in k2859 in merge-argument-types */
static void C_ccall f_2872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2872,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2876,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_i_cddr(((C_word*)t0)[4]);
t4=C_i_cddr(((C_word*)t0)[3]);
/* scrutinizer.scm:262: merge-argument-types */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2777(t5,t2,t3,t4);}

/* k2874 in k2870 in k2859 in merge-argument-types */
static void C_ccall f_2876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2876,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[66],t2));}

/* k2810 in merge-argument-types */
static void C_fcall f_2812(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2812,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2819,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cdr(((C_word*)t0)[5]);
t4=f_2755(t3);
t5=C_i_cdr(((C_word*)t0)[3]);
t6=f_2755(t5);
t7=C_a_i_list(&a,3,lf[26],t4,t6);
/* scrutinizer.scm:254: simplify */
t8=((C_word*)((C_word*)t0)[2])[1];
f_2237(t8,t2,t7);}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[68]);}}

/* k2817 in k2810 in merge-argument-types */
static void C_ccall f_2819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2819,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,lf[65],t1));}

/* rest-type */
static C_word C_fcall f_2755(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
if(C_truep(C_i_nullp(t1))){
return(lf[8]);}
else{
t2=C_i_car(t1);
t3=C_eqp(lf[64],t2);
return((C_truep(t3)?lf[8]:C_i_car(t1)));}}

/* named? */
static C_word C_fcall f_2715(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_check;
if(C_truep(C_i_pairp(t1))){
t2=C_i_car(t1);
t3=C_eqp(lf[33],t2);
if(C_truep(t3)){
t4=C_i_cadr(t1);
t5=C_i_nullp(t4);
if(C_truep(t5)){
return(C_i_not(t5));}
else{
t6=C_i_cadr(t1);
t7=C_i_pairp(t6);
return(C_i_not(t7));}}
else{
return(C_SCHEME_FALSE);}}
else{
return(C_SCHEME_FALSE);}}

/* simplify1 */
static void C_fcall f_2246(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2246,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2252,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* scrutinizer.scm:180: call/cc */
t4=*((C_word*)lf[63]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}

/* a2251 in simplify1 */
static void C_ccall f_2252(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2252,3,t0,t1,t2);}
if(C_truep(C_i_pairp(((C_word*)t0)[8]))){
t3=C_i_car(((C_word*)t0)[8]);
t4=C_eqp(t3,lf[26]);
if(C_truep(t4)){
t5=C_i_length(((C_word*)t0)[8]);
if(C_truep(C_i_nequalp(C_fix(2),t5))){
t6=C_i_cadr(((C_word*)t0)[8]);
/* scrutinizer.scm:185: simplify */
t7=((C_word*)((C_word*)t0)[7])[1];
f_2237(t7,t1,t6);}
else{
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2287,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
t7=C_i_cdr(((C_word*)t0)[8]);
/* scrutinizer.scm:186: every */
t8=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,((C_word*)((C_word*)t0)[2])[1],t7);}}
else{
t5=C_eqp(t3,lf[33]);
if(C_truep(t5)){
t6=f_2715(((C_word*)t0)[8]);
t7=(C_truep(t6)?C_i_cadr(((C_word*)t0)[8]):C_SCHEME_FALSE);
t8=(C_truep(t7)?C_i_cdddr(((C_word*)t0)[8]):C_i_cddr(((C_word*)t0)[8]));
t9=(C_truep(t7)?C_a_i_list1(&a,1,t7):C_SCHEME_END_OF_LIST);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=(C_truep(t7)?C_i_caddr(((C_word*)t0)[8]):C_i_cadr(((C_word*)t0)[8]));
t15=C_i_check_list_2(t14,lf[37]);
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2657,a[2]=((C_word*)t0)[7],a[3]=t8,a[4]=t9,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2659,a[2]=((C_word*)t0)[7],a[3]=t11,a[4]=t18,a[5]=t13,tmp=(C_word)a,a+=6,tmp));
t20=((C_word*)t18)[1];
f_2659(t20,t16,t14);}
else{
t6=((C_word*)t0)[8];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}}
else{
t3=((C_word*)t0)[8];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* map-loop463 in a2251 in simplify1 */
static void C_fcall f_2659(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2659,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2688,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g469478 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2237(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2686 in map-loop463 in a2251 in simplify1 */
static void C_ccall f_2688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2688,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2659(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2659(t6,((C_word*)t0)[3],t5);}}

/* k2655 in a2251 in simplify1 */
static void C_ccall f_2657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2657,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2603,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(lf[8],((C_word*)t0)[3]);
if(C_truep(t4)){
/* scrutinizer.scm:229: append */
t5=*((C_word*)lf[54]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,((C_word*)t0)[5],lf[62],((C_word*)t0)[4],t2,lf[8]);}
else{
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_i_check_list_2(((C_word*)t0)[3],lf[37]);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2614,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t11,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_2614(t13,t3,((C_word*)t0)[3]);}}

/* map-loop489 in k2655 in a2251 in simplify1 */
static void C_fcall f_2614(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2614,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2643,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g495504 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2237(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2641 in map-loop489 in k2655 in a2251 in simplify1 */
static void C_ccall f_2643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2643,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2614(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2614(t6,((C_word*)t0)[3],t5);}}

/* k2601 in k2655 in a2251 in simplify1 */
static void C_ccall f_2603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:229: append */
t2=*((C_word*)lf[54]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[62],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2285 in a2251 in simplify1 */
static void C_ccall f_2287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2287,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2293,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2390,tmp=(C_word)a,a+=2,tmp);
t4=C_i_cdr(((C_word*)t0)[5]);
/* scrutinizer.scm:187: any */
t5=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t3,t4);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2401,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2529,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[5]);
/* scrutinizer.scm:205: append-map */
t5=*((C_word*)lf[61]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t3,t4);}}

/* a2528 in k2285 in a2251 in simplify1 */
static void C_ccall f_2529(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2529,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2533,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm:207: simplify */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2237(t4,t3,t2);}

/* k2531 in a2528 in k2285 in a2251 in simplify1 */
static void C_ccall f_2533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2533,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2539,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t1))){
t3=C_i_car(t1);
t4=t2;
f_2539(t4,C_eqp(lf[26],t3));}
else{
t3=t2;
f_2539(t3,C_SCHEME_FALSE);}}

/* k2537 in k2531 in a2528 in k2285 in a2251 in simplify1 */
static void C_fcall f_2539(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2539,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_cdr(((C_word*)t0)[3]));}
else{
t2=C_eqp(((C_word*)t0)[3],lf[17]);
if(C_truep(t2)){
/* scrutinizer.scm:211: return */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[4],lf[17]);}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list1(&a,1,((C_word*)t0)[3]));}}}

/* k2399 in k2285 in a2251 in simplify1 */
static void C_ccall f_2401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2401,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2404,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2439,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_2439(t6,t2,t1,C_SCHEME_END_OF_LIST);}

/* loop in k2399 in k2285 in a2251 in simplify1 */
static void C_fcall f_2439(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2439,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
/* scrutinizer.scm:215: reverse */
t4=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t4=C_i_car(t2);
t5=C_eqp(lf[8],t4);
if(C_truep(t5)){
/* scrutinizer.scm:216: return */
t6=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,lf[8]);}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2464,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2511,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_i_cdr(t2);
/* scrutinizer.scm:217: any */
t9=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}}}

/* a2510 in loop in k2399 in k2285 in a2251 in simplify1 */
static void C_ccall f_2511(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2511,3,t0,t1,t2);}
t3=C_i_car(((C_word*)t0)[3]);
/* g431432 */
t4=((C_word*)((C_word*)t0)[2])[1];
f_3551(t4,t1,t3,t2);}

/* k2462 in loop in k2399 in k2285 in a2251 in simplify1 */
static void C_ccall f_2464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2464,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[6]);
/* scrutinizer.scm:218: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2439(t3,((C_word*)t0)[4],t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2477,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2501,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm:219: any */
t4=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[3]);}}

/* a2500 in k2462 in loop in k2399 in k2285 in a2251 in simplify1 */
static void C_ccall f_2501(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2501,3,t0,t1,t2);}
t3=C_i_car(((C_word*)t0)[3]);
/* g439440 */
t4=((C_word*)((C_word*)t0)[2])[1];
f_3551(t4,t1,t3,t2);}

/* k2475 in k2462 in loop in k2399 in k2285 in a2251 in simplify1 */
static void C_ccall f_2477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2477,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[5]);
/* scrutinizer.scm:220: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2439(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=C_i_cdr(((C_word*)t0)[5]);
t3=C_i_car(((C_word*)t0)[5]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
/* scrutinizer.scm:221: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2439(t5,((C_word*)t0)[3],t2,t4);}}

/* k2402 in k2399 in k2285 in a2251 in simplify1 */
static void C_ccall f_2404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2404,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[4]);
if(C_truep(C_i_equalp(t1,t2))){
t3=((C_word*)t0)[4];
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2427,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2429,tmp=(C_word)a,a+=2,tmp);
/* scrutinizer.scm:225: any */
t5=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,t1);}}

/* a2428 in k2402 in k2399 in k2285 in a2251 in simplify1 */
static void C_ccall f_2429(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2429,3,t0,t1,t2);}
t3=*((C_word*)lf[57]+1);
/* g455456 */
t4=t3;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,lf[8]);}

/* k2425 in k2402 in k2399 in k2285 in a2251 in simplify1 */
static void C_ccall f_2427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2427,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,lf[26],lf[59]);
/* scrutinizer.scm:225: simplify */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2237(t3,((C_word*)t0)[3],t2);}
else{
t2=((C_word*)t0)[2];
t3=C_a_i_cons(&a,2,lf[26],t2);
/* scrutinizer.scm:225: simplify */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2237(t4,((C_word*)t0)[3],t3);}}

/* a2389 in k2285 in a2251 in simplify1 */
static void C_ccall f_2390(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2390,3,t0,t1,t2);}
t3=*((C_word*)lf[57]+1);
/* g397398 */
t4=t3;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,lf[33],t2);}

/* k2291 in k2285 in a2251 in simplify1 */
static void C_ccall f_2293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2293,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[33]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2298,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* scrutinizer.scm:189: reduce */
t4=*((C_word*)lf[56]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[6],t2,C_SCHEME_FALSE,t3);}}

/* a2297 in k2291 in k2285 in a2251 in simplify1 */
static void C_ccall f_2298(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2298,4,t0,t1,t2,t3);}
t4=f_2715(t2);
t5=(C_truep(t4)?C_i_cadr(t2):C_SCHEME_FALSE);
t6=(C_truep(t5)?C_i_caddr(t2):C_i_cadr(t2));
t7=(C_truep(t5)?C_i_cdddr(t2):C_i_cddr(t2));
t8=f_2715(t3);
t9=(C_truep(t8)?C_i_cadr(t3):C_SCHEME_FALSE);
t10=(C_truep(t9)?C_i_caddr(t3):C_i_cadr(t3));
t11=(C_truep(t9)?C_i_cdddr(t3):C_i_cddr(t3));
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2324,a[2]=t10,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t11,a[6]=t7,a[7]=((C_word*)t0)[3],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t5)){
if(C_truep(t9)){
t13=C_eqp(t5,t9);
t14=t12;
f_2324(t14,(C_truep(t13)?C_a_i_list1(&a,1,t5):C_SCHEME_END_OF_LIST));}
else{
t13=t12;
f_2324(t13,C_SCHEME_END_OF_LIST);}}
else{
t13=t12;
f_2324(t13,C_SCHEME_END_OF_LIST);}}

/* k2322 in a2297 in k2291 in k2285 in a2251 in simplify1 */
static void C_fcall f_2324(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2324,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2336,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t1,a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* scrutinizer.scm:200: merge-argument-types */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2777(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2334 in k2322 in a2297 in k2291 in k2285 in a2251 in simplify1 */
static void C_ccall f_2336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2336,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2332,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* scrutinizer.scm:201: merge-result-types */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2947(t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2330 in k2334 in k2322 in a2297 in k2291 in k2285 in a2251 in simplify1 */
static void C_ccall f_2332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:197: append */
t2=*((C_word*)lf[54]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[55],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* simplify */
static void C_fcall f_2237(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2237,NULL,3,t0,t1,t2);}
/* scrutinizer.scm:176: simplify1 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2246(t3,t1,t2);}

/* result-string */
static void C_fcall f_2147(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2147,NULL,3,t0,t1,t2);}
t3=C_eqp(lf[8],t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[50]);}
else{
t4=C_i_length(t2);
t5=C_i_nequalp(t4,C_fix(1));
t6=(C_truep(t5)?lf[45]:lf[46]);
if(C_truep(C_i_zerop(t4))){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,lf[51]);}
else{
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2169,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* open-output-string */
t8=*((C_word*)lf[11]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}}

/* k2167 in result-string */
static void C_ccall f_2169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2169,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2172,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],t1);}

/* k2170 in k2167 in result-string */
static void C_ccall f_2172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2172,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2175,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[53],((C_word*)t0)[5]);}

/* k2173 in k2170 in k2167 in result-string */
static void C_ccall f_2175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2175,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2178,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[5]);}

/* k2176 in k2173 in k2170 in k2167 in result-string */
static void C_ccall f_2178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2178,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2181,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[52],((C_word*)t0)[5]);}

/* k2179 in k2176 in k2173 in k2170 in k2167 in result-string */
static void C_ccall f_2181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2181,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2184,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[5]);}

/* k2182 in k2179 in k2176 in k2173 in k2170 in k2167 in result-string */
static void C_ccall f_2184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2184,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2187,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[4]);}

/* k2185 in k2182 in k2179 in k2176 in k2173 in k2170 in k2167 in result-string */
static void C_ccall f_2187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2187,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2190,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t0)[3];
t8=C_i_check_list_2(t7,lf[37]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2200,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2202,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t11,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_2202(t13,t9,t7);}

/* map-loop346 in k2185 in k2182 in k2179 in k2176 in k2173 in k2170 in k2167 in result-string */
static void C_fcall f_2202(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2202,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2231,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g352361 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1881(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2229 in map-loop346 in k2185 in k2182 in k2179 in k2176 in k2173 in k2170 in k2167 in result-string */
static void C_ccall f_2231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2231,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2202(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2202(t6,((C_word*)t0)[3],t5);}}

/* k2198 in k2185 in k2182 in k2179 in k2176 in k2173 in k2170 in k2167 in result-string */
static void C_ccall f_2200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
t2=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2188 in k2185 in k2182 in k2179 in k2176 in k2173 in k2170 in k2167 in result-string */
static void C_ccall f_2190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* argument-string */
static void C_fcall f_2063(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2063,NULL,3,t0,t1,t2);}
t3=C_i_length(t2);
t4=C_i_nequalp(t3,C_fix(1));
t5=(C_truep(t4)?lf[45]:lf[46]);
if(C_truep(C_i_zerop(t3))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[47]);}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2079,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* open-output-string */
t7=*((C_word*)lf[11]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k2077 in argument-string */
static void C_ccall f_2079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2079,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2082,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],t1);}

/* k2080 in k2077 in argument-string */
static void C_ccall f_2082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2082,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2085,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[49],((C_word*)t0)[5]);}

/* k2083 in k2080 in k2077 in argument-string */
static void C_ccall f_2085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2085,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2088,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[5]);}

/* k2086 in k2083 in k2080 in k2077 in argument-string */
static void C_ccall f_2088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2088,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2091,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[48],((C_word*)t0)[5]);}

/* k2089 in k2086 in k2083 in k2080 in k2077 in argument-string */
static void C_ccall f_2091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2091,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2094,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[5]);}

/* k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in argument-string */
static void C_ccall f_2094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2094,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2097,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[4]);}

/* k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in argument-string */
static void C_ccall f_2097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2097,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2100,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t0)[3];
t8=C_i_check_list_2(t7,lf[37]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2110,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2112,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t11,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_2112(t13,t9,t7);}

/* map-loop298 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in argument-string */
static void C_fcall f_2112(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2112,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2141,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g304313 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1881(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2139 in map-loop298 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in argument-string */
static void C_ccall f_2141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2141,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2112(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2112(t6,((C_word*)t0)[3],t5);}}

/* k2108 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in argument-string */
static void C_ccall f_2110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
t2=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in argument-string */
static void C_ccall f_2100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* typename */
static void C_fcall f_1881(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1881,NULL,3,t0,t1,t2);}
t3=t2;
t4=C_eqp(t3,lf[8]);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[29]);}
else{
t5=C_eqp(t3,lf[30]);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[31]);}
else{
if(C_truep(C_i_symbolp(t2))){
/* scrutinizer.scm:138: symbol->string */
t6=*((C_word*)lf[32]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,t2);}
else{
if(C_truep(C_i_pairp(t2))){
t6=C_i_car(t2);
t7=C_eqp(t6,lf[33]);
if(C_truep(t7)){
t8=C_i_cadr(t2);
t9=C_i_stringp(t8);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1927,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t9)){
t11=t10;
f_1927(t11,t9);}
else{
t11=C_i_cadr(t2);
t12=t10;
f_1927(t12,C_i_symbolp(t11));}}
else{
t8=C_eqp(t6,lf[26]);
if(C_truep(t8)){
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_i_cdr(t2);
t14=C_i_check_list_2(t13,lf[37]);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1998,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2000,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=t17,a[5]=t12,tmp=(C_word)a,a+=6,tmp));
t19=((C_word*)t17)[1];
f_2000(t19,t15,t13);}
else{
t9=C_eqp(t6,lf[40]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2042,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
t11=*((C_word*)lf[11]+1);
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}
else{
/* scrutinizer.scm:153: bomb */
t10=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t1,lf[43],t2);}}}}
else{
/* scrutinizer.scm:154: bomb */
t6=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,lf[44],t2);}}}}}

/* k2040 in typename */
static void C_ccall f_2042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2042,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2045,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[41],t1);}

/* k2043 in k2040 in typename */
static void C_ccall f_2045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2045,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2048,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* display */
t4=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[3]);}

/* k2046 in k2043 in k2040 in typename */
static void C_ccall f_2048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* map-loop243 in typename */
static void C_fcall f_2000(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2000,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2029,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g249258 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1881(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2027 in map-loop243 in typename */
static void C_ccall f_2029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2029,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2000(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2000(t6,((C_word*)t0)[3],t5);}}

/* k1996 in typename */
static void C_ccall f_1998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:148: string-intersperse */
t2=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[39]);}

/* k1925 in typename */
static void C_fcall f_1927(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1927,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[5]);
/* scrutinizer.scm:143: ->string */
t3=*((C_word*)lf[34]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[4],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1937,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* open-output-string */
t3=*((C_word*)lf[11]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1935 in k1925 in typename */
static void C_ccall f_1937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1937,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1940,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[36],t1);}

/* k1938 in k1935 in k1925 in typename */
static void C_ccall f_1940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1940,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1943,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1964,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(((C_word*)t0)[4]);
/* scrutinizer.scm:145: argument-string */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2063(t5,t3,t4);}

/* k1962 in k1938 in k1935 in k1925 in typename */
static void C_ccall f_1964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
t2=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1941 in k1938 in k1935 in k1925 in typename */
static void C_ccall f_1943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1943,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1946,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[35],((C_word*)t0)[4]);}

/* k1944 in k1941 in k1938 in k1935 in k1925 in typename */
static void C_ccall f_1946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1946,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1949,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1956,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cddr(((C_word*)t0)[3]);
/* scrutinizer.scm:146: result-string */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2147(t5,t3,t4);}

/* k1954 in k1944 in k1941 in k1938 in k1935 in k1925 in typename */
static void C_ccall f_1956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
t2=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1947 in k1944 in k1941 in k1938 in k1935 in k1925 in typename */
static void C_ccall f_1949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
t2=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* always-true */
static void C_fcall f_1840(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1840,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1844,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* scrutinizer.scm:124: always-true1 */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1808(3,t6,t5,t2);}

/* k1842 in always-true */
static void C_ccall f_1844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1844,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1847,a[2]=t1,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1854,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* open-output-string */
t4=*((C_word*)lf[11]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k1852 in k1842 in always-true */
static void C_ccall f_1854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1854,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1857,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[28],t1);}

/* k1855 in k1852 in k1842 in always-true */
static void C_ccall f_1857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1857,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1860,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[5]);}

/* k1858 in k1855 in k1852 in k1842 in always-true */
static void C_ccall f_1860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1860,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1863,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[27],((C_word*)t0)[4]);}

/* k1861 in k1858 in k1855 in k1852 in k1842 in always-true */
static void C_ccall f_1863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1863,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1866,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* write-char/port */
t3=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[4]);}

/* k1864 in k1861 in k1858 in k1855 in k1852 in k1842 in always-true */
static void C_ccall f_1866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1866,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1869,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* write-char/port */
t3=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[4]);}

/* k1867 in k1864 in k1861 in k1858 in k1855 in k1852 in k1842 in always-true */
static void C_ccall f_1869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1869,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1872,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1879,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm:131: pp-fragment */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4181(t4,t3,((C_word*)t0)[2]);}

/* k1877 in k1867 in k1864 in k1861 in k1858 in k1855 in k1852 in k1842 in always-true */
static void C_ccall f_1879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
t2=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1870 in k1867 in k1864 in k1861 in k1858 in k1855 in k1852 in k1842 in always-true */
static void C_ccall f_1872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1872,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1875,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* get-output-string */
t3=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1873 in k1870 in k1867 in k1864 in k1861 in k1858 in k1855 in k1852 in k1842 in always-true */
static void C_ccall f_1875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:126: report */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3956(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1845 in k1842 in always-true */
static void C_ccall f_1847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* always-true1 */
static void C_ccall f_1808(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1808,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1815,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=t3;
f_1815(t5,C_eqp(lf[26],t4));}
else{
t4=t3;
f_1815(t4,C_SCHEME_FALSE);}}

/* k1813 in always-true1 */
static void C_fcall f_1815(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[4]);
/* scrutinizer.scm:120: every */
t3=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t2);}
else{
t2=C_i_memq(((C_word*)t0)[4],lf[25]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_SCHEME_FALSE:C_SCHEME_TRUE));}}

/* variable-result */
static void C_fcall f_1735(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1735,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1742,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=t2,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1799,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm:105: get */
t7=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,((C_word*)t0)[3],t2,lf[23]);}

/* k1797 in variable-result */
static void C_ccall f_1799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1799,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1806,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* scrutinizer.scm:106: ##sys#get */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],lf[21]);}
else{
t2=((C_word*)t0)[3];
f_1742(t2,C_SCHEME_FALSE);}}

/* k1804 in k1797 in variable-result */
static void C_ccall f_1806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1742(t2,C_i_not(t1));}

/* k1740 in variable-result */
static void C_fcall f_1742(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1742,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[8]);}
else{
t2=C_i_assq(((C_word*)t0)[7],((C_word*)t0)[6]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1749,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* g158159 */
t4=t3;
f_1749(t4,((C_word*)t0)[8],t2);}
else{
/* scrutinizer.scm:117: global-result */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1648(t3,((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[4]);}}}

/* g158 in k1740 in variable-result */
static void C_fcall f_1749(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1749,NULL,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=C_eqp(lf[17],t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1759,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1763,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t5,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* open-output-string */
t7=*((C_word*)lf[11]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t5=C_i_cdr(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list1(&a,1,t5));}}

/* k1761 in g158 in k1740 in variable-result */
static void C_ccall f_1763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1763,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1766,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[20],t1);}

/* k1764 in k1761 in g158 in k1740 in variable-result */
static void C_ccall f_1766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1766,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1769,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1779,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm:114: real-name */
t4=*((C_word*)lf[19]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1777 in k1764 in k1761 in g158 in k1740 in variable-result */
static void C_ccall f_1779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
t2=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1767 in k1764 in k1761 in g158 in k1740 in variable-result */
static void C_ccall f_1769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1769,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1772,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[18],((C_word*)t0)[2]);}

/* k1770 in k1767 in k1764 in k1761 in g158 in k1740 in variable-result */
static void C_ccall f_1772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1772,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1775,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* get-output-string */
t3=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1773 in k1770 in k1767 in k1764 in k1761 in g158 in k1740 in variable-result */
static void C_ccall f_1775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:111: report */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3956(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1757 in g158 in k1740 in variable-result */
static void C_ccall f_1759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[8]);}

/* global-result */
static void C_fcall f_1648(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1648,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1652,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* scrutinizer.scm:84: ##sys#get */
t5=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[16]);}

/* k1650 in global-result */
static void C_ccall f_1652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1652,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1656,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* g108109 */
t3=t2;
f_1656(t3,((C_word*)t0)[2],t1);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[8]);}}

/* g108 in k1650 in global-result */
static void C_fcall f_1656(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1656,NULL,3,t0,t1,t2);}
t3=C_eqp(t2,lf[7]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1666,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1670,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* open-output-string */
t6=*((C_word*)lf[11]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1688,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(t2))){
t5=C_i_car(t2);
t6=t4;
f_1688(t6,C_eqp(t5,lf[7]));}
else{
t5=t4;
f_1688(t5,C_SCHEME_FALSE);}}}

/* k1686 in g108 in k1650 in global-result */
static void C_fcall f_1688(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1688,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1691,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1695,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* open-output-string */
t4=*((C_word*)lf[11]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list1(&a,1,((C_word*)t0)[3]));}}

/* k1693 in k1686 in g108 in k1650 in global-result */
static void C_ccall f_1695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1695,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1698,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[14],t1);}

/* k1696 in k1693 in k1686 in g108 in k1650 in global-result */
static void C_ccall f_1698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1698,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1701,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k1699 in k1696 in k1693 in k1686 in g108 in k1650 in global-result */
static void C_ccall f_1701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1701,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1704,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[13],((C_word*)t0)[3]);}

/* k1702 in k1699 in k1696 in k1693 in k1686 in g108 in k1650 in global-result */
static void C_ccall f_1704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1704,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1707,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* display */
t4=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[3]);}

/* k1705 in k1702 in k1699 in k1696 in k1693 in k1686 in g108 in k1650 in global-result */
static void C_ccall f_1707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1707,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1710,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[12],((C_word*)t0)[2]);}

/* k1708 in k1705 in k1702 in k1699 in k1696 in k1693 in k1686 in g108 in k1650 in global-result */
static void C_ccall f_1710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1710,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1713,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* get-output-string */
t3=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1711 in k1708 in k1705 in k1702 in k1699 in k1696 in k1693 in k1686 in g108 in k1650 in global-result */
static void C_ccall f_1713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:96: report */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3956(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1689 in k1686 in g108 in k1650 in global-result */
static void C_ccall f_1691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[8]);}

/* k1668 in g108 in k1650 in global-result */
static void C_ccall f_1670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1670,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1673,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[10],t1);}

/* k1671 in k1668 in g108 in k1650 in global-result */
static void C_ccall f_1673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1673,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1676,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* display */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1674 in k1671 in k1668 in g108 in k1650 in global-result */
static void C_ccall f_1676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1676,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1679,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(39),((C_word*)t0)[2]);}

/* k1677 in k1674 in k1671 in k1668 in g108 in k1650 in global-result */
static void C_ccall f_1679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1679,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1682,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* get-output-string */
t3=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1680 in k1677 in k1674 in k1671 in k1668 in g108 in k1650 in global-result */
static void C_ccall f_1682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm:91: report */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3956(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1664 in g108 in k1650 in global-result */
static void C_ccall f_1666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[8]);}

/* f_1529 in k1525 in k1522 */
static void C_ccall f_1529(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_1529r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1529r(t0,t1,t2,t3);}}

static void C_ccall f_1529r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
if(C_truep(C_fudge(C_fix(13)))){
t4=*((C_word*)lf[1]+1);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1539,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* display */
t6=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,lf[5],t4);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1537 */
static void C_ccall f_1539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1539,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1542,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_apply(6,0,t2,*((C_word*)lf[3]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1540 in k1537 */
static void C_ccall f_1542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[392] = {
{"toplevel:scrutinizer_2escm",(void*)C_scrutinizer_toplevel},
{"f_1524:scrutinizer_2escm",(void*)f_1524},
{"f_1527:scrutinizer_2escm",(void*)f_1527},
{"f_5783:scrutinizer_2escm",(void*)f_5783},
{"f_5787:scrutinizer_2escm",(void*)f_5787},
{"f_5902:scrutinizer_2escm",(void*)f_5902},
{"f_5790:scrutinizer_2escm",(void*)f_5790},
{"f_5889:scrutinizer_2escm",(void*)f_5889},
{"f_5892:scrutinizer_2escm",(void*)f_5892},
{"f_5895:scrutinizer_2escm",(void*)f_5895},
{"f_5796:scrutinizer_2escm",(void*)f_5796},
{"f_5857:scrutinizer_2escm",(void*)f_5857},
{"f_5865:scrutinizer_2escm",(void*)f_5865},
{"f_5804:scrutinizer_2escm",(void*)f_5804},
{"f_5816:scrutinizer_2escm",(void*)f_5816},
{"f_5823:scrutinizer_2escm",(void*)f_5823},
{"f_5826:scrutinizer_2escm",(void*)f_5826},
{"f_5829:scrutinizer_2escm",(void*)f_5829},
{"f_5832:scrutinizer_2escm",(void*)f_5832},
{"f_5835:scrutinizer_2escm",(void*)f_5835},
{"f_5838:scrutinizer_2escm",(void*)f_5838},
{"f_5841:scrutinizer_2escm",(void*)f_5841},
{"f_5844:scrutinizer_2escm",(void*)f_5844},
{"f_5847:scrutinizer_2escm",(void*)f_5847},
{"f_5810:scrutinizer_2escm",(void*)f_5810},
{"f_5875:scrutinizer_2escm",(void*)f_5875},
{"f_1547:scrutinizer_2escm",(void*)f_1547},
{"f_4969:scrutinizer_2escm",(void*)f_4969},
{"f_5732:scrutinizer_2escm",(void*)f_5732},
{"f_5742:scrutinizer_2escm",(void*)f_5742},
{"f_5730:scrutinizer_2escm",(void*)f_5730},
{"f_5720:scrutinizer_2escm",(void*)f_5720},
{"f_5585:scrutinizer_2escm",(void*)f_5585},
{"f_5638:scrutinizer_2escm",(void*)f_5638},
{"f_5656:scrutinizer_2escm",(void*)f_5656},
{"f_5689:scrutinizer_2escm",(void*)f_5689},
{"f_5669:scrutinizer_2escm",(void*)f_5669},
{"f_5647:scrutinizer_2escm",(void*)f_5647},
{"f_5586:scrutinizer_2escm",(void*)f_5586},
{"f_5594:scrutinizer_2escm",(void*)f_5594},
{"f_5597:scrutinizer_2escm",(void*)f_5597},
{"f_5626:scrutinizer_2escm",(void*)f_5626},
{"f_5629:scrutinizer_2escm",(void*)f_5629},
{"f_5632:scrutinizer_2escm",(void*)f_5632},
{"f_5620:scrutinizer_2escm",(void*)f_5620},
{"f_5600:scrutinizer_2escm",(void*)f_5600},
{"f_5603:scrutinizer_2escm",(void*)f_5603},
{"f_5606:scrutinizer_2escm",(void*)f_5606},
{"f_5609:scrutinizer_2escm",(void*)f_5609},
{"f_5612:scrutinizer_2escm",(void*)f_5612},
{"f_5616:scrutinizer_2escm",(void*)f_5616},
{"f_5461:scrutinizer_2escm",(void*)f_5461},
{"f_5547:scrutinizer_2escm",(void*)f_5547},
{"f_5550:scrutinizer_2escm",(void*)f_5550},
{"f_5553:scrutinizer_2escm",(void*)f_5553},
{"f_5556:scrutinizer_2escm",(void*)f_5556},
{"f_5559:scrutinizer_2escm",(void*)f_5559},
{"f_5563:scrutinizer_2escm",(void*)f_5563},
{"f_5464:scrutinizer_2escm",(void*)f_5464},
{"f_5539:scrutinizer_2escm",(void*)f_5539},
{"f_5489:scrutinizer_2escm",(void*)f_5489},
{"f_5496:scrutinizer_2escm",(void*)f_5496},
{"f_5499:scrutinizer_2escm",(void*)f_5499},
{"f_5502:scrutinizer_2escm",(void*)f_5502},
{"f_5505:scrutinizer_2escm",(void*)f_5505},
{"f_5508:scrutinizer_2escm",(void*)f_5508},
{"f_5511:scrutinizer_2escm",(void*)f_5511},
{"f_5514:scrutinizer_2escm",(void*)f_5514},
{"f_5517:scrutinizer_2escm",(void*)f_5517},
{"f_5520:scrutinizer_2escm",(void*)f_5520},
{"f_5470:scrutinizer_2escm",(void*)f_5470},
{"f_5343:scrutinizer_2escm",(void*)f_5343},
{"f_5439:scrutinizer_2escm",(void*)f_5439},
{"f_5350:scrutinizer_2escm",(void*)f_5350},
{"f_5391:scrutinizer_2escm",(void*)f_5391},
{"f_5399:scrutinizer_2escm",(void*)f_5399},
{"f_5397:scrutinizer_2escm",(void*)f_5397},
{"f_5353:scrutinizer_2escm",(void*)f_5353},
{"f_5375:scrutinizer_2escm",(void*)f_5375},
{"f_5379:scrutinizer_2escm",(void*)f_5379},
{"f_5356:scrutinizer_2escm",(void*)f_5356},
{"f_5363:scrutinizer_2escm",(void*)f_5363},
{"f_5249:scrutinizer_2escm",(void*)f_5249},
{"f_5293:scrutinizer_2escm",(void*)f_5293},
{"f_5296:scrutinizer_2escm",(void*)f_5296},
{"f_5321:scrutinizer_2escm",(void*)f_5321},
{"f_5299:scrutinizer_2escm",(void*)f_5299},
{"f_5302:scrutinizer_2escm",(void*)f_5302},
{"f_5305:scrutinizer_2escm",(void*)f_5305},
{"f_5309:scrutinizer_2escm",(void*)f_5309},
{"f_5270:scrutinizer_2escm",(void*)f_5270},
{"f_5285:scrutinizer_2escm",(void*)f_5285},
{"f_5267:scrutinizer_2escm",(void*)f_5267},
{"f_5234:scrutinizer_2escm",(void*)f_5234},
{"f_5064:scrutinizer_2escm",(void*)f_5064},
{"f_5073:scrutinizer_2escm",(void*)f_5073},
{"f_5076:scrutinizer_2escm",(void*)f_5076},
{"f_5079:scrutinizer_2escm",(void*)f_5079},
{"f_5085:scrutinizer_2escm",(void*)f_5085},
{"f_5216:scrutinizer_2escm",(void*)f_5216},
{"f_5212:scrutinizer_2escm",(void*)f_5212},
{"f_5158:scrutinizer_2escm",(void*)f_5158},
{"f_5165:scrutinizer_2escm",(void*)f_5165},
{"f_5168:scrutinizer_2escm",(void*)f_5168},
{"f_5171:scrutinizer_2escm",(void*)f_5171},
{"f_5174:scrutinizer_2escm",(void*)f_5174},
{"f_5184:scrutinizer_2escm",(void*)f_5184},
{"f_5177:scrutinizer_2escm",(void*)f_5177},
{"f_5180:scrutinizer_2escm",(void*)f_5180},
{"f_5088:scrutinizer_2escm",(void*)f_5088},
{"f_5108:scrutinizer_2escm",(void*)f_5108},
{"f_5141:scrutinizer_2escm",(void*)f_5141},
{"f_5121:scrutinizer_2escm",(void*)f_5121},
{"f_5089:scrutinizer_2escm",(void*)f_5089},
{"f_4877:scrutinizer_2escm",(void*)f_4877},
{"f_4958:scrutinizer_2escm",(void*)f_4958},
{"f_4845:scrutinizer_2escm",(void*)f_4845},
{"f_4574:scrutinizer_2escm",(void*)f_4574},
{"f_4584:scrutinizer_2escm",(void*)f_4584},
{"f_4607:scrutinizer_2escm",(void*)f_4607},
{"f_4609:scrutinizer_2escm",(void*)f_4609},
{"f_4681:scrutinizer_2escm",(void*)f_4681},
{"f_4639:scrutinizer_2escm",(void*)f_4639},
{"f_4600:scrutinizer_2escm",(void*)f_4600},
{"f_4591:scrutinizer_2escm",(void*)f_4591},
{"f_4532:scrutinizer_2escm",(void*)f_4532},
{"f_4201:scrutinizer_2escm",(void*)f_4201},
{"f_4526:scrutinizer_2escm",(void*)f_4526},
{"f_4522:scrutinizer_2escm",(void*)f_4522},
{"f_4518:scrutinizer_2escm",(void*)f_4518},
{"f_4476:scrutinizer_2escm",(void*)f_4476},
{"f_4483:scrutinizer_2escm",(void*)f_4483},
{"f_4508:scrutinizer_2escm",(void*)f_4508},
{"f_4486:scrutinizer_2escm",(void*)f_4486},
{"f_4489:scrutinizer_2escm",(void*)f_4489},
{"f_4492:scrutinizer_2escm",(void*)f_4492},
{"f_4495:scrutinizer_2escm",(void*)f_4495},
{"f_4498:scrutinizer_2escm",(void*)f_4498},
{"f_4501:scrutinizer_2escm",(void*)f_4501},
{"f_4504:scrutinizer_2escm",(void*)f_4504},
{"f_4281:scrutinizer_2escm",(void*)f_4281},
{"f_4300:scrutinizer_2escm",(void*)f_4300},
{"f_4427:scrutinizer_2escm",(void*)f_4427},
{"f_4469:scrutinizer_2escm",(void*)f_4469},
{"f_4430:scrutinizer_2escm",(void*)f_4430},
{"f_4433:scrutinizer_2escm",(void*)f_4433},
{"f_4436:scrutinizer_2escm",(void*)f_4436},
{"f_4439:scrutinizer_2escm",(void*)f_4439},
{"f_4442:scrutinizer_2escm",(void*)f_4442},
{"f_4445:scrutinizer_2escm",(void*)f_4445},
{"f_4448:scrutinizer_2escm",(void*)f_4448},
{"f_4451:scrutinizer_2escm",(void*)f_4451},
{"f_4454:scrutinizer_2escm",(void*)f_4454},
{"f_4457:scrutinizer_2escm",(void*)f_4457},
{"f_4307:scrutinizer_2escm",(void*)f_4307},
{"f_4326:scrutinizer_2escm",(void*)f_4326},
{"f_4357:scrutinizer_2escm",(void*)f_4357},
{"f_4364:scrutinizer_2escm",(void*)f_4364},
{"f_4403:scrutinizer_2escm",(void*)f_4403},
{"f_4367:scrutinizer_2escm",(void*)f_4367},
{"f_4370:scrutinizer_2escm",(void*)f_4370},
{"f_4373:scrutinizer_2escm",(void*)f_4373},
{"f_4376:scrutinizer_2escm",(void*)f_4376},
{"f_4379:scrutinizer_2escm",(void*)f_4379},
{"f_4382:scrutinizer_2escm",(void*)f_4382},
{"f_4385:scrutinizer_2escm",(void*)f_4385},
{"f_4388:scrutinizer_2escm",(void*)f_4388},
{"f_4391:scrutinizer_2escm",(void*)f_4391},
{"f_4339:scrutinizer_2escm",(void*)f_4339},
{"f_4310:scrutinizer_2escm",(void*)f_4310},
{"f_4769:scrutinizer_2escm",(void*)f_4769},
{"f_4777:scrutinizer_2escm",(void*)f_4777},
{"f_4779:scrutinizer_2escm",(void*)f_4779},
{"f_4806:scrutinizer_2escm",(void*)f_4806},
{"f_4286:scrutinizer_2escm",(void*)f_4286},
{"f_4204:scrutinizer_2escm",(void*)f_4204},
{"f_4208:scrutinizer_2escm",(void*)f_4208},
{"f_4234:scrutinizer_2escm",(void*)f_4234},
{"f_4237:scrutinizer_2escm",(void*)f_4237},
{"f_4243:scrutinizer_2escm",(void*)f_4243},
{"f_4246:scrutinizer_2escm",(void*)f_4246},
{"f_4249:scrutinizer_2escm",(void*)f_4249},
{"f_4231:scrutinizer_2escm",(void*)f_4231},
{"f_4211:scrutinizer_2escm",(void*)f_4211},
{"f_4214:scrutinizer_2escm",(void*)f_4214},
{"f_4227:scrutinizer_2escm",(void*)f_4227},
{"f_4217:scrutinizer_2escm",(void*)f_4217},
{"f_4220:scrutinizer_2escm",(void*)f_4220},
{"f_4181:scrutinizer_2escm",(void*)f_4181},
{"f_4191:scrutinizer_2escm",(void*)f_4191},
{"f_4199:scrutinizer_2escm",(void*)f_4199},
{"f_4189:scrutinizer_2escm",(void*)f_4189},
{"f_4091:scrutinizer_2escm",(void*)f_4091},
{"f_4095:scrutinizer_2escm",(void*)f_4095},
{"f_4100:scrutinizer_2escm",(void*)f_4100},
{"f_4175:scrutinizer_2escm",(void*)f_4175},
{"f_4130:scrutinizer_2escm",(void*)f_4130},
{"f_4138:scrutinizer_2escm",(void*)f_4138},
{"f_4167:scrutinizer_2escm",(void*)f_4167},
{"f_4123:scrutinizer_2escm",(void*)f_4123},
{"f_3970:scrutinizer_2escm",(void*)f_3970},
{"f_4036:scrutinizer_2escm",(void*)f_4036},
{"f_4049:scrutinizer_2escm",(void*)f_4049},
{"f_4052:scrutinizer_2escm",(void*)f_4052},
{"f_4076:scrutinizer_2escm",(void*)f_4076},
{"f_4055:scrutinizer_2escm",(void*)f_4055},
{"f_4058:scrutinizer_2escm",(void*)f_4058},
{"f_4068:scrutinizer_2escm",(void*)f_4068},
{"f_4061:scrutinizer_2escm",(void*)f_4061},
{"f_4011:scrutinizer_2escm",(void*)f_4011},
{"f_4014:scrutinizer_2escm",(void*)f_4014},
{"f_4027:scrutinizer_2escm",(void*)f_4027},
{"f_4017:scrutinizer_2escm",(void*)f_4017},
{"f_4020:scrutinizer_2escm",(void*)f_4020},
{"f_3973:scrutinizer_2escm",(void*)f_3973},
{"f_3980:scrutinizer_2escm",(void*)f_3980},
{"f_3983:scrutinizer_2escm",(void*)f_3983},
{"f_3996:scrutinizer_2escm",(void*)f_3996},
{"f_3986:scrutinizer_2escm",(void*)f_3986},
{"f_3989:scrutinizer_2escm",(void*)f_3989},
{"f_3956:scrutinizer_2escm",(void*)f_3956},
{"f_3968:scrutinizer_2escm",(void*)f_3968},
{"f_3964:scrutinizer_2escm",(void*)f_3964},
{"f_3875:scrutinizer_2escm",(void*)f_3875},
{"f_3929:scrutinizer_2escm",(void*)f_3929},
{"f_3932:scrutinizer_2escm",(void*)f_3932},
{"f_3935:scrutinizer_2escm",(void*)f_3935},
{"f_3938:scrutinizer_2escm",(void*)f_3938},
{"f_3941:scrutinizer_2escm",(void*)f_3941},
{"f_3944:scrutinizer_2escm",(void*)f_3944},
{"f_3947:scrutinizer_2escm",(void*)f_3947},
{"f_3950:scrutinizer_2escm",(void*)f_3950},
{"f_3922:scrutinizer_2escm",(void*)f_3922},
{"f_3907:scrutinizer_2escm",(void*)f_3907},
{"f_3910:scrutinizer_2escm",(void*)f_3910},
{"f_3913:scrutinizer_2escm",(void*)f_3913},
{"f_3916:scrutinizer_2escm",(void*)f_3916},
{"f_3919:scrutinizer_2escm",(void*)f_3919},
{"f_3903:scrutinizer_2escm",(void*)f_3903},
{"f_3551:scrutinizer_2escm",(void*)f_3551},
{"f_3658:scrutinizer_2escm",(void*)f_3658},
{"f_3793:scrutinizer_2escm",(void*)f_3793},
{"f_3679:scrutinizer_2escm",(void*)f_3679},
{"f_3707:scrutinizer_2escm",(void*)f_3707},
{"f_3627:scrutinizer_2escm",(void*)f_3627},
{"f_3496:scrutinizer_2escm",(void*)f_3496},
{"f_3530:scrutinizer_2escm",(void*)f_3530},
{"f_3286:scrutinizer_2escm",(void*)f_3286},
{"f_3351:scrutinizer_2escm",(void*)f_3351},
{"f_3459:scrutinizer_2escm",(void*)f_3459},
{"f_3292:scrutinizer_2escm",(void*)f_3292},
{"f_3310:scrutinizer_2escm",(void*)f_3310},
{"f_3336:scrutinizer_2escm",(void*)f_3336},
{"f_3317:scrutinizer_2escm",(void*)f_3317},
{"f_3298:scrutinizer_2escm",(void*)f_3298},
{"f_3304:scrutinizer_2escm",(void*)f_3304},
{"f_3014:scrutinizer_2escm",(void*)f_3014},
{"f_3101:scrutinizer_2escm",(void*)f_3101},
{"f_3120:scrutinizer_2escm",(void*)f_3120},
{"f_3157:scrutinizer_2escm",(void*)f_3157},
{"f_3184:scrutinizer_2escm",(void*)f_3184},
{"f_3125:scrutinizer_2escm",(void*)f_3125},
{"f_3106:scrutinizer_2escm",(void*)f_3106},
{"f_3005:scrutinizer_2escm",(void*)f_3005},
{"f_2947:scrutinizer_2escm",(void*)f_2947},
{"f_2976:scrutinizer_2escm",(void*)f_2976},
{"f_2980:scrutinizer_2escm",(void*)f_2980},
{"f_2777:scrutinizer_2escm",(void*)f_2777},
{"f_2913:scrutinizer_2escm",(void*)f_2913},
{"f_2917:scrutinizer_2escm",(void*)f_2917},
{"f_2861:scrutinizer_2escm",(void*)f_2861},
{"f_2872:scrutinizer_2escm",(void*)f_2872},
{"f_2876:scrutinizer_2escm",(void*)f_2876},
{"f_2812:scrutinizer_2escm",(void*)f_2812},
{"f_2819:scrutinizer_2escm",(void*)f_2819},
{"f_2755:scrutinizer_2escm",(void*)f_2755},
{"f_2715:scrutinizer_2escm",(void*)f_2715},
{"f_2246:scrutinizer_2escm",(void*)f_2246},
{"f_2252:scrutinizer_2escm",(void*)f_2252},
{"f_2659:scrutinizer_2escm",(void*)f_2659},
{"f_2688:scrutinizer_2escm",(void*)f_2688},
{"f_2657:scrutinizer_2escm",(void*)f_2657},
{"f_2614:scrutinizer_2escm",(void*)f_2614},
{"f_2643:scrutinizer_2escm",(void*)f_2643},
{"f_2603:scrutinizer_2escm",(void*)f_2603},
{"f_2287:scrutinizer_2escm",(void*)f_2287},
{"f_2529:scrutinizer_2escm",(void*)f_2529},
{"f_2533:scrutinizer_2escm",(void*)f_2533},
{"f_2539:scrutinizer_2escm",(void*)f_2539},
{"f_2401:scrutinizer_2escm",(void*)f_2401},
{"f_2439:scrutinizer_2escm",(void*)f_2439},
{"f_2511:scrutinizer_2escm",(void*)f_2511},
{"f_2464:scrutinizer_2escm",(void*)f_2464},
{"f_2501:scrutinizer_2escm",(void*)f_2501},
{"f_2477:scrutinizer_2escm",(void*)f_2477},
{"f_2404:scrutinizer_2escm",(void*)f_2404},
{"f_2429:scrutinizer_2escm",(void*)f_2429},
{"f_2427:scrutinizer_2escm",(void*)f_2427},
{"f_2390:scrutinizer_2escm",(void*)f_2390},
{"f_2293:scrutinizer_2escm",(void*)f_2293},
{"f_2298:scrutinizer_2escm",(void*)f_2298},
{"f_2324:scrutinizer_2escm",(void*)f_2324},
{"f_2336:scrutinizer_2escm",(void*)f_2336},
{"f_2332:scrutinizer_2escm",(void*)f_2332},
{"f_2237:scrutinizer_2escm",(void*)f_2237},
{"f_2147:scrutinizer_2escm",(void*)f_2147},
{"f_2169:scrutinizer_2escm",(void*)f_2169},
{"f_2172:scrutinizer_2escm",(void*)f_2172},
{"f_2175:scrutinizer_2escm",(void*)f_2175},
{"f_2178:scrutinizer_2escm",(void*)f_2178},
{"f_2181:scrutinizer_2escm",(void*)f_2181},
{"f_2184:scrutinizer_2escm",(void*)f_2184},
{"f_2187:scrutinizer_2escm",(void*)f_2187},
{"f_2202:scrutinizer_2escm",(void*)f_2202},
{"f_2231:scrutinizer_2escm",(void*)f_2231},
{"f_2200:scrutinizer_2escm",(void*)f_2200},
{"f_2190:scrutinizer_2escm",(void*)f_2190},
{"f_2063:scrutinizer_2escm",(void*)f_2063},
{"f_2079:scrutinizer_2escm",(void*)f_2079},
{"f_2082:scrutinizer_2escm",(void*)f_2082},
{"f_2085:scrutinizer_2escm",(void*)f_2085},
{"f_2088:scrutinizer_2escm",(void*)f_2088},
{"f_2091:scrutinizer_2escm",(void*)f_2091},
{"f_2094:scrutinizer_2escm",(void*)f_2094},
{"f_2097:scrutinizer_2escm",(void*)f_2097},
{"f_2112:scrutinizer_2escm",(void*)f_2112},
{"f_2141:scrutinizer_2escm",(void*)f_2141},
{"f_2110:scrutinizer_2escm",(void*)f_2110},
{"f_2100:scrutinizer_2escm",(void*)f_2100},
{"f_1881:scrutinizer_2escm",(void*)f_1881},
{"f_2042:scrutinizer_2escm",(void*)f_2042},
{"f_2045:scrutinizer_2escm",(void*)f_2045},
{"f_2048:scrutinizer_2escm",(void*)f_2048},
{"f_2000:scrutinizer_2escm",(void*)f_2000},
{"f_2029:scrutinizer_2escm",(void*)f_2029},
{"f_1998:scrutinizer_2escm",(void*)f_1998},
{"f_1927:scrutinizer_2escm",(void*)f_1927},
{"f_1937:scrutinizer_2escm",(void*)f_1937},
{"f_1940:scrutinizer_2escm",(void*)f_1940},
{"f_1964:scrutinizer_2escm",(void*)f_1964},
{"f_1943:scrutinizer_2escm",(void*)f_1943},
{"f_1946:scrutinizer_2escm",(void*)f_1946},
{"f_1956:scrutinizer_2escm",(void*)f_1956},
{"f_1949:scrutinizer_2escm",(void*)f_1949},
{"f_1840:scrutinizer_2escm",(void*)f_1840},
{"f_1844:scrutinizer_2escm",(void*)f_1844},
{"f_1854:scrutinizer_2escm",(void*)f_1854},
{"f_1857:scrutinizer_2escm",(void*)f_1857},
{"f_1860:scrutinizer_2escm",(void*)f_1860},
{"f_1863:scrutinizer_2escm",(void*)f_1863},
{"f_1866:scrutinizer_2escm",(void*)f_1866},
{"f_1869:scrutinizer_2escm",(void*)f_1869},
{"f_1879:scrutinizer_2escm",(void*)f_1879},
{"f_1872:scrutinizer_2escm",(void*)f_1872},
{"f_1875:scrutinizer_2escm",(void*)f_1875},
{"f_1847:scrutinizer_2escm",(void*)f_1847},
{"f_1808:scrutinizer_2escm",(void*)f_1808},
{"f_1815:scrutinizer_2escm",(void*)f_1815},
{"f_1735:scrutinizer_2escm",(void*)f_1735},
{"f_1799:scrutinizer_2escm",(void*)f_1799},
{"f_1806:scrutinizer_2escm",(void*)f_1806},
{"f_1742:scrutinizer_2escm",(void*)f_1742},
{"f_1749:scrutinizer_2escm",(void*)f_1749},
{"f_1763:scrutinizer_2escm",(void*)f_1763},
{"f_1766:scrutinizer_2escm",(void*)f_1766},
{"f_1779:scrutinizer_2escm",(void*)f_1779},
{"f_1769:scrutinizer_2escm",(void*)f_1769},
{"f_1772:scrutinizer_2escm",(void*)f_1772},
{"f_1775:scrutinizer_2escm",(void*)f_1775},
{"f_1759:scrutinizer_2escm",(void*)f_1759},
{"f_1648:scrutinizer_2escm",(void*)f_1648},
{"f_1652:scrutinizer_2escm",(void*)f_1652},
{"f_1656:scrutinizer_2escm",(void*)f_1656},
{"f_1688:scrutinizer_2escm",(void*)f_1688},
{"f_1695:scrutinizer_2escm",(void*)f_1695},
{"f_1698:scrutinizer_2escm",(void*)f_1698},
{"f_1701:scrutinizer_2escm",(void*)f_1701},
{"f_1704:scrutinizer_2escm",(void*)f_1704},
{"f_1707:scrutinizer_2escm",(void*)f_1707},
{"f_1710:scrutinizer_2escm",(void*)f_1710},
{"f_1713:scrutinizer_2escm",(void*)f_1713},
{"f_1691:scrutinizer_2escm",(void*)f_1691},
{"f_1670:scrutinizer_2escm",(void*)f_1670},
{"f_1673:scrutinizer_2escm",(void*)f_1673},
{"f_1676:scrutinizer_2escm",(void*)f_1676},
{"f_1679:scrutinizer_2escm",(void*)f_1679},
{"f_1682:scrutinizer_2escm",(void*)f_1682},
{"f_1666:scrutinizer_2escm",(void*)f_1666},
{"f_1529:scrutinizer_2escm",(void*)f_1529},
{"f_1539:scrutinizer_2escm",(void*)f_1539},
{"f_1542:scrutinizer_2escm",(void*)f_1542},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}
/* end of file */
