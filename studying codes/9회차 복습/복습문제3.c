#include <stdio.h>

void outArr(int arr[],int len);
void ArrayReverse(int a1[],int a2[],int a3[],int l1, int l2, int l3);
void outArr2(int arr[],int len);

int main(void)
{
    int Test1[10]={10,20,30,40,50,60,70,80,90,100};
    int Test2[6]={112,110,108,106,14,12};
    int Test3[7]={18,35,1024,23,68,51,51};

    int len1=sizeof(Test1)/sizeof(int);
    int len2=sizeof(Test2)/sizeof(int);
    int len3=sizeof(Test3)/sizeof(int);

    printf("Test1");
    outArr(Test1,len1);
    printf("Test2");
    outArr(Test2,len2);
    printf("Test3");
    outArr(Test3,len3);
    puts("");

    ArrayReverse(Test1,Test2,Test3,len1,len2,len3);

    printf("Test1");
    outArr2(Test1,len1);
    printf("Test2");
    outArr2(Test2,len2);
    printf("Test3");
    outArr2(Test3,len3);
    return 0;
}

void outArr(int arr[],int len)
{
    int i;
    printf(" contains %d items: ",len);
    for(i=0;i<len;i++)
        printf("%d ",arr[i]);
    puts("");
}

void ArrayReverse(int a1[],int a2[],int a3[],int l1, int l2, int l3)
{
    int i;
    for(i=0;i<l1/2;i++)
    {
        int tmp;
        tmp=a1[i];
        a1[i]=a1[l1-i-1];
        a1[l1-i-1]=tmp;
    }
    for(i=0;i<l2/2;i++)
    {
        int tmp;
        tmp=a2[i];
        a2[i]=a2[l2-i-1];
        a2[l2-i-1]=tmp;
    }
    for(i=0;i<l3/2;i++)
    {
        int tmp;
        tmp=a3[i];
        a3[i]=a3[l3-i-1];
        a3[l3-i-1]=tmp;
    }
}

void outArr2(int arr[],int len)
{
    int i;
    printf(" after Reverse: ");
    for(i=0;i<len;i++)
        printf("%d ",arr[i]);
    puts("");
}