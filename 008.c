// 8�� "���ѹα�"�� "����"�� �Է¹ް�, �� ������ ���ļ� "���ѹα� ����"ó�� ����ϼ���.
// ������ ����� �ִ�.
// 1.printf
// 2.strcat
// 3.sprintf

#include<stdio.h>
#include<string.h>
int main(){
	char str[20]="";
	char str1[20]="";
	char str2[20]="";
	//1
	/*
	printf("ó�� ���ڿ��� �Է��ϼ���: ");
	scanf("%s", str1);
	printf("������ ������ ���ڿ��� �Է��ϼ���: ");
	scanf("%s", str2);
	printf("���: %s %s\n", str1, str2);
	*/

	//2
	/*
	printf("ó�� ���ڿ��� �Է��ϼ���: ");
	scanf("%s", str1);
	printf("������ ������ ���ڿ��� �Է��ϼ���: ");
	scanf("%s", str2);
	strcat(str1, " ");
	strcat(str1, str2);
	printf("���: %s\n",str1);
	*/

	//3
	/*
	printf("ó�� ���ڿ��� �Է��ϼ���: ");
	scanf("%s", str1);
	printf("������ ������ ���ڿ��� �Է��ϼ���: ");
	scanf("%s", str2);
	sprintf(str, "%s %s",str1,str2);
	printf("%s\n", str);
	*/
	return 0;
}