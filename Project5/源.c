#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	int input = 0;
	printf("ѧϰ���>>>\n");
	printf("�ú�Ŭ����>>(1/0):");
	scanf("%d", &input);
	if (input == 1)
		printf("��offer");
	else
		printf("�ؼ��ֵ�");

	return 0;
}

//int main()
//{
//	char arr[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr));
//	return 0;
//}