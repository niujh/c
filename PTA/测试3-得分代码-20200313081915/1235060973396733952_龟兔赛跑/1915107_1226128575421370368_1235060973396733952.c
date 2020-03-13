int main()
{
    int T,t1=0,t2=0,s1=0,s2=0;
    bool rest=false;
    cin>>T;
    while(t1!=T)
    {
        s2+=3;
        if(!rest)
        {
            t2++;
            s1+=9;
        }
        t1++;
        if (t1%10==0&&rest==false)
        {
            if(s1>s2)
            {
                rest=true;
                t2+=30;
            }
        }
        if(t1==t2)
        {
            rest=false;

        }
    }
    if(s1>s2)
    {
        printf("^_^%d\n",s1);
    }
    else if(s2>s1)
    {
        printf("@_@%d\n",s2);
    }
    else
    {
        printf("-_-%d\n",s2);
    }
    return 0;
}