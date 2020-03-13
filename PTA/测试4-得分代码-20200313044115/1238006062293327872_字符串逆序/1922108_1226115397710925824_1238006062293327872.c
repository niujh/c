int main()
{
    char line[125];
    int i;
    gets(line);
    for(i=0;line[i]!='\0';i++);
      for(i=i-1; i>=0;i--)
    {
        printf("%c",line[i]);
    }
}