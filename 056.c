// 3-47 "3...1...4"와 "1...9..2..2..1"에 나오는 숫자 합을 구해 출력하세요.

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
	int i,sum=0;
	char * s1 = "3...1...4";
	char * s2 = "1...9..2..2..1..5";

	for(i=0; i< strlen(s1);i++){
		if(isdigit(*(s1+i))){
			sum += atoi(s1+i);
		}
	}
	for(i=0; i< strlen(s2);i++){
		if(isdigit(*(s2+i))){
			sum += atoi(s2+i);
		}
	}
	printf("숫자의 합은 %d입니다.\n",sum);
	return 0;
}