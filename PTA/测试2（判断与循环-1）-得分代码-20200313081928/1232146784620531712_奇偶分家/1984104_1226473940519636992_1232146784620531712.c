int main(){
    int n ;
    int a[1001];
    int i;
    int ji = 0,ou = 0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        if(a[i]%2==0)
            ou++;
        else
            ji++;
    }
    printf("%d %d\n",ji,ou);
    return 0;
}