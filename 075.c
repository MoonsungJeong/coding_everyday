// 3-66 성과 이름을 입력바독 가장 끝 이름을 *로 바꿔서 출력하세요.
// 예를들어, '홍길동' 이름을 입력하면 '홍길*' 형식으로 출력합니다.
// 힌트 영문일 때와 한글일 때를 고려합니다. 한글은 첫 바이트가 0x80보다 크다는 점을 이용하여 영문과 구분할 수 있습니다.
#include<stdio.h>
#include<string.h>

int main(){
	int i,len=0;
	char name[100];
	while(len<3){
		printf("당신의 이름을 입력하세요(세 글자 이상): ");
		scanf("%s",name);
		len = strlen(name);
	}
	printf("이름의 길이 : %d \n",len);
	for(i=0;i<len;i++)
		printf("이름의 %d번째 문자 %c\n",i,*(name+i));


	if((unsigned char)name[len-2] > 0x80){
		name[len -2] = '*';
		name[len -1] = '\0';
	}else
		name[len -1] = '*';

	printf("당신의 이름은(끝 자는 * 대체): %s\n",name);
	return 0;
}

