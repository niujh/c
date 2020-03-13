int main()
{
    int a,i,q,c;
    char b;
    scanf("%d %c",&a,&b);
    c=a/2;
    for(q=1;q<=c;q++)
    {
        for(i=1;i<=a;i++)
        {
            printf("%c",b);
        }
        printf("\n");
    }
}