int main()
{
char str[10];
int i=0,letter=0,blank=0,digit=0,other=0;
while(i<10)
{
str[i++]=getchar();
}
for(i=0;i<10;i++)
{
if(str[i]==' ')
{
blank++;
}
else if(str[i]=='\n')
{
blank++;
}
else if(str[i]>='0'&&str[i]<='9')
{
digit++;
}
else if(str[i]>='A'&&str[i]<='Z')
{
letter++;
}
else if(str[i]>='a'&&str[i]<='z')
{
letter++;
}
else 
{
other++;
}
}
printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
return 0;
}