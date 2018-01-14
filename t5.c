#include <stdio.h>
#include <string.h>

int main(int c, char *v[])
{
	const int buff_sz = 512;
	char buff[buff_sz];
	char expect[buff_sz];
	int digits[] = {193, 205, 49, 190, 260, 196, 276, 179, 188, 226, 281, 152, 230, 235, 141, 195, 38, 207, 158, 180, 14, 234, 235, 71, 125, 186, 79, 254, 290, 69, 191, 51, 18, 269, 294, 178, 197, 24, 246, 73, 30, 38, 132, 273, 167, 32, 46, 121, 91, 100, 168, 129, 134, 24, 203, 96, 229, 250, 204, 214, 223, 54, 291, 172, 255, 151, 219, 193, 57, 167, 146, 126, 156, 138, 250, 97, 61, 281, 63, 82, 40, 109, 159, 96, 65, 300, 253, 5, 52, 12, 89, 100, 98, 269, 147, 55, 197, 233, 22, 66, 0};

	for(int i = 0; digits[i]; ++i) {
		snprintf(buff, buff_sz, "%d ", digits[i]);
		strcat(expect, buff);
	}
		strcat(expect, "\n");

	fgets(buff, buff_sz, stdin);
	if(ferror(stdin)) {
		perror("Woops:");
		return 1;
	}
	if(strncmp(expect,buff,buff_sz) == 0)
		puts("Pass!");
	else
		puts("fail.");

	return 0;
}
