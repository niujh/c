int main()
{
    int a[1000];
    int n,m,q=0,b=0;
    scanf("%d",&n);
    for(m=0;m<n;m++)
    {
        scanf("%d",&a[m]);
    }
    for(m=0;m<n;m++)
    {
        if(a[m]%2==0)
        {
            b+=1;
        }
        else
        {
            q+=1;
        }
    }
    printf("%d %d",q,b);
}