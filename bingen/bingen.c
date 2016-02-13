#include <stdio.h>
 
main()
{
	//unsigned char buf2[] = "\x2a\xef";
	unsigned char buf2[] = "\xad\x88\x04\x08";
	FILE *write_ptr;

	write_ptr = fopen("4","w+b");  // w for write, b for binary

	fwrite(buf2,sizeof(buf2),1,write_ptr);

	return 0;
}

