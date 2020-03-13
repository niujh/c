int main(int argc, char **argv){
    int x,t=0;
    while(1)
    {
        scanf("%d",&x);
        t++;
        if(x==250){
            printf("%d\n",t);
            break;
        }
    }
    return 0;
}