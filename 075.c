// 3-66 ���� �̸��� �Է¹ٵ� ���� �� �̸��� *�� �ٲ㼭 ����ϼ���.
// �������, 'ȫ�浿' �̸��� �Է��ϸ� 'ȫ��*' �������� ����մϴ�.
// ��Ʈ ������ ���� �ѱ��� ���� ����մϴ�. �ѱ��� ù ����Ʈ�� 0x80���� ũ�ٴ� ���� �̿��Ͽ� ������ ������ �� �ֽ��ϴ�.
#include<stdio.h>
#include<string.h>

int main(){
	int i,len=0;
	char name[100];
	while(len<3){
		printf("����� �̸��� �Է��ϼ���(�� ���� �̻�): ");
		scanf("%s",name);
		len = strlen(name);
	}
	printf("�̸��� ���� : %d \n",len);
	for(i=0;i<len;i++)
		printf("�̸��� %d��° ���� %c\n",i,*(name+i));


	if((unsigned char)name[len-2] > 0x80){
		name[len -2] = '*';
		name[len -1] = '\0';
	}else
		name[len -1] = '*';

	printf("����� �̸���(�� �ڴ� * ��ü): %s\n",name);
	return 0;
}

