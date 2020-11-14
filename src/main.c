#include <stdio.h>

int other()
{
	printf("other");
	exit(0);
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
	printf("input done");
	return 0;
}
