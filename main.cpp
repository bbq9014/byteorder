#include "net.h"

int main(int argc, char *argv[]){
	FILE *fd1, *fd2;
	uint32_t a,b;
	
	printf("\n");
	fd1 = fopen(argv[1], "rb");
	fd2 = fopen(argv[2], "rb");
	fread(&a,1,4,fd1);
	fread(&b,1,4,fd2);
	printf("file1Num: %08x\n",ntohl(a));
	printf("file2Num: %08x\n",ntohl(b));
	printf("file1+2 : %08x\n",ntohl(a)+ntohl(b));
	fclose(fd2);
	fclose(fd1);
}
