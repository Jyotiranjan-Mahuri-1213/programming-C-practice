//wap to print fibonacci series
#include<stdio.h>
int main()
{
    int i,n1=0,n2=1,num,result;
    printf("enter the no of terms:\n");
    scanf("%d",&num);
    printf("fibonacci series :\n");
for(i=1;i<=num;++i){
    printf("%d\n",n1);
 result=n1+n2;
 n1=n2;
 n2=result;
  
}
return 0;
}