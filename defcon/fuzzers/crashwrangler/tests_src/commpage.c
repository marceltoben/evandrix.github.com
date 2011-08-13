
#include <string.h>

//make sure that crashes in the comm page are handled properly.
int main() {
    char * ptr = (char*)0x22222222;
    memcpy(0,ptr, 100000);
}