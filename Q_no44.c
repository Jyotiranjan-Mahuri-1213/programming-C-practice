#include<stdio.h>
int main()
{
    char ch;
    printf("enter an alphabet:\n");
    scanf("%c",&ch);
    if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
    {
    printf("vowel");
    }
    else 
    printf("consonant");
    return 0;
}
    