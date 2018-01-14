#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if(argc != 1) {
		fprintf(stderr, "usage: <exercise.exe> | %s\n", argv[0]);
			return 1;
	}
	const int buf_sz = 128;
	char string[] = "This is a string to print.";
	char expected[buf_sz];
	char got[buf_sz];

	sprintf(expected, "%s\n", string);
	fgets(got, buf_sz, stdin);

	if(strcmp(expected, got) == 0)
		puts("Pass!");
	else
		puts("fail.");

	return 0;
}
