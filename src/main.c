#include <stdio.h>

int other()
{
	printf("other\n");
	fflush(stdout);
}

void input()
{
	char buffer[20];
	printf("input\n");
	fflush(stdout);
	scanf("%s", buffer);
	fflush(stdout);
	printf("%s", buffer);
}

int main()
{
	fflush(stdout);
	input();
	printf("input function done\n");
	return 0;
}
