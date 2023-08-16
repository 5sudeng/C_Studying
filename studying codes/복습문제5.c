#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct StuInfo
{
    char Name[10];
    int IDNo;
    int Exam[2];
    int Sum;
    float Average;
    struct StuInfo *NextPtr;
}StuInfo;

void PrintAllName(StuInfo Node);
float AverageScore(StuInfo Node);
StuInfo *BestStudent(StuInfo Node);

int main(void)
{
    StuInfo Head;
    Head.NextPtr = NULL;
    char StuName[10];
    int StuNo, Exam1, Exam2;
    FILE *fPtr;
    fPtr = fopen("lab12_datafile.txt","r");
    
    while(!feof(fPtr))
    {
        StuInfo *NewNode;
        NewNode = (StuInfo *)malloc(sizeof(StuInfo));
        NewNode->NextPtr = Head.NextPtr;
        Head.NextPtr = NewNode;

        fscanf(fPtr, "%s %d %d %d", StuName,&StuNo,&Exam1,&Exam2);
        strcpy(NewNode->Name,StuName);
        
    }

    fclose(fPtr);
    return 0;
}