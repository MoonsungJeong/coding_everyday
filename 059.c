// 3-50 �̸� 10���� ���ڿ� �迭�� �Է¹ް�, ���������� �̸��� ȭ�鿡 ����ϼ���.
// ���������� 'abc...', '������...' �����̰� ������ �ѱۺ��� ���� �;� �մϴ�.
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
		 printf("%d�� �̸��� �Է��ϼ���.: ",i);
		 scanf("%s", name);
		 strcpy(name_list[i],name);
	 }
	 str_sort((char**)name_list);

	 printf("\n[���ĵ� �̸� ���]\n");
	 for(i=0;  i<10; i++)
		 printf("%s\n",name_list[i]);
	 printf("<��>");
     return 0;
}

