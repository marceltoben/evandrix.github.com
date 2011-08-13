
int main() {
    
#if defined (__ppc__) || defined (__ppc64__)
    return 0;
#elif defined (__i386__) 
    __asm__("mov $0x77777777, %eax\n\t"
            "call *%eax"
    );
#elif defined (__x86_64__)
    __asm__("mov $0x7777777777777777, %rax\n\t"
        "call *%rax"
    );
#else
#error Unknown architecture
#endif
}