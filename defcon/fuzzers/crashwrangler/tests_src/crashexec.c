int main() {
	void (*fp)() = (void(*)())0x51515151;
	(*fp)();
	
}