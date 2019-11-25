// 3-49 이름을 입력받아서 출력하는 과정을 10번 반복해서 진행하세요. 단, 입력한이름이 없으면 종료하고, 같은 이름이 입력된 적이 있으면
// "이미 존재하는 이름입니다."를 출력하세요.

#include<stdio.h>
#include<string.h>
char name_list[10][256];

int name_check(char *s){
	int i;
	for(i=0;i<10; i++){
		if(!(strcmp(s,name_list[i])))
			return 0;
	}
	return 1;
}
int main(){
	int i;
	char name[256];
	for(i=0; i<10; i++){
		printf("이름을 입력하세요: ");
		scanf("%s",name);
		if(!name_check(name)){
			i--;
			printf("이미 존재하는 이름입니다.\n");
		}else{
			strcpy(name_list[i],name);
			printf("입력한 이름: %s\n",name_list[i]);
		}
	}
	return 0;
}