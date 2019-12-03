// 3-60 60,70,65,85,95,88,100,75,50 자료의 평균과 분산, 표준편차를 출력하세요.
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
	printf("*평균 = %.3f\n",mean);
	printf("*분산 = %.3f\n",var);
	printf("*표준편차 = %.3f\n",stand);
}

