void main(){
    double i,k=1,pi=0,eps;
    scanf("%le",&eps);
    for(i=0;k>=eps;i++)
    {
    k*=i==0?1:i/(i*2+1);
    pi+=k;
    }
    printf("pi=%.5f",pi*2);
    }
}