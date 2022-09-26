#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char arr[10];
    printf("Enter string");
    gets(arr);
    for(i=0;arr[i]!='\0';i++);
    printf("%d",i);
    return 0;
}
