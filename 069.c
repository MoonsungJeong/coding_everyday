// 3-60 60,70,65,85,95,88,100,75,50 �ڷ��� ��հ� �л�, ǥ�������� ����ϼ���.
//
#include<stdio.h>
#include<math.h>
int main(){
	int i,count,sum=0;
	double mean=0, var=0, stand=0; 
	int scores[] = {60,70,65,85,95,88,100,75,50};
	count = sizeof(scores) / sizeof(int);
	
	for(i=0; i<count; i++){
		sum +=scores[i];
		printf("%d ",scores[i]);
	}
	printf("\n\n");
	mean = (double)sum/count;
	for(i=0; i<count; i++){
		var += pow(mean-scores[i],2);
	}
	var = var/count;
	stand= sqrt(var);
	printf("*��� = %.3f\n",mean);
	printf("*�л� = %.3f\n",var);
	printf("*ǥ������ = %.3f\n",stand);
}

