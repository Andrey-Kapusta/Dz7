#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	system("chcp 1251");
	Task7();
	return 0;
}

int Task7()
{
	int c;
	printf("������� ����� ������\n");
	scanf("%d", &c);
	switch (c)
	{
	case 1:
	case 2:
	case 12:
		printf("������ ����");
		break;
	case 3:
	case 4:
	case 5:
		printf("������ �����");
		break;
	case 6:
	case 7:
	case 8:
		printf("������ ����");
		break;
	case 9:
	case 10:
	case 11:
		printf("������ �����");
		break;
	default:
		printf("����� �������� ����� ������\n");
	}
}