#include<stdio.h>
#include<string.h>
void main()
{
    char s[20];
    int i,a=0,d=0,c=0;
    printf("Enter the string");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ')
        {
            if((s[i]>='A' && s[i]<='Z')|| (s[i]>='a' && s[i]<='z'))
            a++;
            else if(s[i]>='0' && s[i]<='9')
            d++;
            else 
            c++;
        }
    }
    printf("No of alphabet in the string= %d\n",a);
    printf("No of digits in the string= %d\n",d);
    printf("No of special characters in the string= %d\n",c);

}