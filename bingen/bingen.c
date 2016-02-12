#include <stdio.h>
 
main()
{
	unsigned char buffer[] = "\x2a\xef\x44\x44\x44\x44\x44\x44\x44\x44\x44\x44\x44\x44\x4\x44\x44\x4\x44\x44\x4\x44\x44\x4\x44\x44\x4\x44\x44\x4\x44\x44\x4\x44\x44\x44";

	FILE *write_ptr;

	write_ptr = fopen("2.bin","wb");  // w for write, b for binary

	fwrite(buffer,sizeof(buffer),1,write_ptr); // write 10 bytes to our buffer

	return 0;
}

