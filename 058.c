// 3-48 ���� �� ���� ��Ģ ���� ��ȣ�� �Է¹޾Ƽ� ����� ����� ����մϴ�. ��, ���������� 0���� 
// ���� ��, "0���� ���� �� �����ϴ�." ���� �޽����� ����ϼ���.

#include<stdio.h>

int main(){
	int num1, num2, op;
	printf("��Ģ���꿡 ����� ó�� ������ �Է��ϼ���: ");
	scanf("%d",&num1);
	printf("��Ģ���� ��ȣ 1~4�� �Է��ϼ���(1:'+', 2:'-', 3:'/', 4:'*'): ");
	scanf("%d", &op);
	printf("��Ģ���꿡 ����� ���� ������ �Է��ϼ���: ");
	scanf("%d", &num2);

	switch(op){
	case 1:
		printf("%d + %d = %d\n",num1,num2,num1+num2);
		break;
	case 2:
		printf("%d - %d = %d\n",num1,num2,num1-num2);
		break;
	case 3:
		if(num2 == 0){
			printf("0���� ���� �� �����ϴ�.\n");
			break;
		}else{
			printf("%d / %d = %d\n",num1,num2,num1/num2);
			break;
		}
	case 4:
		printf("%d * %d = %d\n",num1,num2,num1*num2);
		break;
	}
	return 0;
}