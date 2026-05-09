#include<stdio.h>
int swap(int* a ,int* b);
int swap (int*a,int*b)
{
    int t= *a;
    *a=*b;
    *b=t;
    return 0;

}
int main()
{
    int x=3;
    int y=5;
    swap(&x,&y);
    printf("the swapped value is %d %d\n",x,y);
    return 0;
}