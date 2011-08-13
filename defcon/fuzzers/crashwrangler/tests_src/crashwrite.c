//cause a trivial crash
int main () {
	char * ptr = (char*) 0x61616161;
	ptr[0]=0;
}