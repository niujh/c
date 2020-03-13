int main(void)
{
    doublex,y;
    printf("Enter x:\n")
    scanf("%if",&x);
    if (x!=0){
        y=1/x;
    }
    else {
        y=0;
    }
    printf("y=f(%f)=%.1f\n",x,y);
    return 0;
}