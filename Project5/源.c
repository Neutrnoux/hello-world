#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	int input = 0;
	printf("学习编程>>>\n");
	printf("好好努力吗？>>(1/0):");
	scanf("%d", &input);
	if (input == 1)
		printf("好offer");
	else
		printf("回家种地");

	return 0;
}

//int main()
//{
//	char arr[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr));
//	return 0;
//}