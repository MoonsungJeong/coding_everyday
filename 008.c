// 8번 "대한민국"과 "만세"를 입력받고, 두 내용을 합쳐서 "대한민국 만세"처럼 출력하세요.
// 세가지 방법이 있다.
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
	printf("처음 문자열을 입력하세요: ");
	scanf("%s", str1);
	printf("다음에 연결할 문자열을 입력하세요: ");
	scanf("%s", str2);
	printf("결과: %s %s\n", str1, str2);
	*/

	//2
	/*
	printf("처음 문자열을 입력하세요: ");
	scanf("%s", str1);
	printf("다음에 연결할 문자열을 입력하세요: ");
	scanf("%s", str2);
	strcat(str1, " ");
	strcat(str1, str2);
	printf("결과: %s\n",str1);
	*/

	//3
	/*
	printf("처음 문자열을 입력하세요: ");
	scanf("%s", str1);
	printf("다음에 연결할 문자열을 입력하세요: ");
	scanf("%s", str2);
	sprintf(str, "%s %s",str1,str2);
	printf("%s\n", str);
	*/
	return 0;
}