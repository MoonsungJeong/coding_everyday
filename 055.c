// 3-46 ��ȭ��ȣ�� '02-123-1234' �������� �Է¹ް�, �� �߿��� ���ڸ� ����ϼ���.

#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
	/*
	int i;
	char number[12]={0};
	scanf("%s",number);
	printf("'-' ���� ������ ��ȭ��ȣ: ");
	for(i=0;i<12;i++){
		if(number[i] == '-')
			continue;
		printf("%c",number[i]);
	}
	printf("\n");
	return 0;
	*/
	int i;
	char * p;
	char phone[256];

	p = phone;
	printf("��ȭ��ȣ�� '-'�� �����Ͽ� �Է��ϼ���.: ");
	scanf("%s", phone);
	for(i=0; i < (int)strlen(phone); i++){
		if(isdigit(phone[i])){
			*p = phone[i];
			p++;
		}
	}
	*p = '\0';
	printf("\n'-' ���� ������ ��ȭ��ȣ: %s\n",phone);
	return 0;
}