// 3-40 ù���� 1��, ��° ���� 2��, ��° ���� 4���� ���� �� �辿 �����Ͽ� ������ ��, 30��° �Ǵ� ����
// �����ؾ� �ϴ� �ݾ��� ����ϼ���.

#include<stdio.h>
#include<math.h>
int main(){
	unsigned int money=1;
	int i;
	for(i=1;i<30;i++){
		money *= 2;
	}
	printf("30��° ������ ��: %d��\n",money);
	return 0;
}