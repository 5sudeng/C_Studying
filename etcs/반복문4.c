#include <stdio.h>

int InputScore(void);
char GetGrade(int, int, int);

int main(void){
    int a, b, c;
    char grade;
    for(int i = 0; i<5;i++){
        a = InputScore();
        b = InputScore();
        c = InputScore();
        grade = GetGrade(a,b,c);
        printf("학점은 %c입니다.\n",grade);
    }
    return 0;
}


int InputScore(void){
    int score;
    do{
        printf("점수를 입력하세요. : ");
        scanf("%d",&score);
    } while(score<0);
    return score;
}

char GetGrade(int a, int b, int c){
    double avg = (a+b+c)/(float)3;
    char grade;
    if (avg >= 90)
        grade = 'A';
    else if (avg >= 80)
        grade = 'B';
    else if (avg >= 70)
        grade = 'C';
    else 
        grade = 'F';
    return grade;
}