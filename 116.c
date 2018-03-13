 #include<stdio.h>
 #include<string.h>
void main()
{
    char a[1000],b[1000];
    printf("Enter two number:");
    scanf("%s %s",a,b);
    strcat(a,b);
    printf("%s",a);
}
    
