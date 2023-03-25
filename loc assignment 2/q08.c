#include<stdio.h>
#include<string.h>
void main()
{
    char s[20];
    int i,c=0,v=0;
    printf("Enter the string");
    gets(s);
    for(i=0; s[i]!='\0'; i++)
    {
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
        {
        if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u' || s[i]=='A' || s[i]=='E' ||s[i]=='I' 
        || s[i]=='O' || s[i]=='U')
        v++;
        else
        c++;
        }

    } 
    printf("No of consonants in the string=%d\n",c);
    printf("No of vowels in the string=%d\n",v);
}