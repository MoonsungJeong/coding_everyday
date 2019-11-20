// 3-46 전화번호를 '02-123-1234' 형식으로 입력받고, 그 중에서 숫자만 출력하세요.

#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
	/*
	int i;
	char number[12]={0};
	scanf("%s",number);
	printf("'-' 등을 제외한 전화번호: ");
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
	printf("전화번호를 '-'를 포함하여 입력하세요.: ");
	scanf("%s", phone);
	for(i=0; i < (int)strlen(phone); i++){
		if(isdigit(phone[i])){
			*p = phone[i];
			p++;
		}
	}
	*p = '\0';
	printf("\n'-' 등을 제외한 전화번호: %s\n",phone);
	return 0;
}