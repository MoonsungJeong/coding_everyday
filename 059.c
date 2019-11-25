// 3-50 이름 10개를 문자열 배열에 입력받고, 사전순서로 이름을 화면에 출력하세요.
// 사전순서는 'abc...', '가나다...' 순서이고 영문이 한글보다 먼저 와야 합니다.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char name_list[10][256];
void str_sort(char ** list){
	qsort(list, 10, sizeof(char[256]), strcmp);
}
int main(){
	 int i;
	 char name[256];

	 for(i=0; i<10; i++){
		 printf("%d번 이름을 입력하세요.: ",i);
		 scanf("%s", name);
		 strcpy(name_list[i],name);
	 }
	 str_sort((char**)name_list);

	 printf("\n[정렬된 이름 목록]\n");
	 for(i=0;  i<10; i++)
		 printf("%s\n",name_list[i]);
	 printf("<끝>");
     return 0;
}

