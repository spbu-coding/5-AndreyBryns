#include <stdio.h>

int other()
{
	printf("other");
	fflush(stdout);
}

void input()
{
	char buffer[10];
	scanf("%s", buffer);
	printf("%s", buffer);
}

int main()
{
	input();
	return 0;
}
