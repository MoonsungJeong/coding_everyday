// 3-52 �л� �̸��� ����, ����, ���� ������ �� �� �Է¹ް�, �� �л��� �̸�, ����� ����ϼ���.
#include<stdio.h>
double avg(int scores[]){
	double sum;
	sum = (double)(scores[0]+scores[1]+scores[2])/3;
	return sum;
}

int main(){
	char name[3][100];
	int score[3][3];
	double average[3];
	int i;

	for(i=0; i<3; i++){
		printf("%d�� �л� �̸��� �Է��ϼ���: ",i+1);
		scanf("%s",&name[i]);
		printf("%d�� �л��� ���� ���� ���� ������ �Է��ϼ���(��; 90 90 90): ");
		scanf("%d %d %d", &score[i][0], &score[i][1], &score[i][2]);
		average[i] = avg(score[i]);
	}
	printf("-------------------------------\n");
	printf("�̸�              : ���       \n");
	printf("-------------------------------\n");
	for(i=0;i<3;i++)
		printf("%s            : %.2f \n",name[i],average[i]);


	return 0;
}

