#include <stdio.h>


int main(int argc, char *argv[])
{
	char buff[256];

	int err;
	while(buff == fgets(buff, 256, stdin))
		;
	if(ferror(stdin)) {
		perror("Woops:");
		return 1;
	}
	if(feof(stdin)) {
		puts("Pass!");
		return 0;
	}
	// unreachable
	return 2;
}
