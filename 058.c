// 3-49 �̸��� �Է¹޾Ƽ� ����ϴ� ������ 10�� �ݺ��ؼ� �����ϼ���. ��, �Է����̸��� ������ �����ϰ�, ���� �̸��� �Էµ� ���� ������
// "�̹� �����ϴ� �̸��Դϴ�."�� ����ϼ���.

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
		printf("�̸��� �Է��ϼ���: ");
		scanf("%s",name);
		if(!name_check(name)){
			i--;
			printf("�̹� �����ϴ� �̸��Դϴ�.\n");
		}else{
			strcpy(name_list[i],name);
			printf("�Է��� �̸�: %s\n",name_list[i]);
		}
	}
	return 0;
}