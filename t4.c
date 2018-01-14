#include <stdio.h>
#include <string.h>

int main(int c, char *v[])
{
	char buff[128];
	char expect[128];
	int digits[] = {27, 28, 14, 22, 24, 35, 3, 18, 10, 14, 0};

	for(int i = 0; digits[i]; ++i) {
		snprint(buff, 128, "%d ", digits[i]);
		strcat(expect, buff);
	}

	fgets(buff, 128, stdin);
	if(ferror(stdin)) {
		perror("Woops:");
		return 1;
	}
	if(strncmp(expect,buff,128) == 0)
		puts("Pass!");
	else
		puts("fail.");

	return 0;
}
