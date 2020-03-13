#include <stdio.h>
#include <string.h>
#define MAXS 15
void StringCount( char s[] )
{
    int length=strlen(s);
    int i,letter=0,blank=0,digit=0,other=0;
    for(i=0;i<length;i++)
    {
        if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z')
        {
            letter++;
        }
        else if(s[i]==' '||s[i]=='\n')
        {
            blank++;
        }
        else if(s[i]>='0'&&s[i]<='9')
        {
            digit++;
        }
        else
        {
            other++;
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
}
void ReadString( char s[] )
{
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%c",&s[i]);
    }
}

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}
