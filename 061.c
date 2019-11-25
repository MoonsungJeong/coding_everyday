// 3-52 학생 이름과 국어, 영어, 수학 점수를 세 번 입력받고, 각 학생의 이름, 평균을 출력하세요.
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
		printf("%d번 학생 이름을 입력하세요: ",i+1);
		scanf("%s",&name[i]);
		printf("%d번 학생의 국어 영어 수학 점수를 입력하세요(예; 90 90 90): ");
		scanf("%d %d %d", &score[i][0], &score[i][1], &score[i][2]);
		average[i] = avg(score[i]);
	}
	printf("-------------------------------\n");
	printf("이름              : 평균       \n");
	printf("-------------------------------\n");
	for(i=0;i<3;i++)
		printf("%s            : %.2f \n",name[i],average[i]);


	return 0;
}

