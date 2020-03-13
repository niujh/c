int main()
{
    float s;
    int t,p;
    scanf("%f %d",&s,&t);
    if(s<=3){
        p=(int)(10+(t/5)*2+0.5);
    }
    else if(s<=10){
        p=(int)(10+(s-3)*2+(t/5)*2+0.5);
    }
    else{
        p=(int)(10+14+(s-10)*3+(t/5)*2+0.5);
    }
    printf("%d\n",p);
    return 0;
}
