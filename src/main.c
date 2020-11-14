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
	printf("&p\n", &other);
	fflush(stdout);
	input();
	return 0;
}
