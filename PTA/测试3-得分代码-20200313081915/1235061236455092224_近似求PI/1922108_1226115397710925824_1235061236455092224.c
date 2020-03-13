int main()
{
    double eps = 0, sum = 1;
    double top = 1, low = 1;
    double index = 1;
    scanf("%le", &eps);
     
    while( (top/low) >= eps )
    {
        top *= index;
        low *= (index*2+1);
        sum += (top/low);
        //printf("%lf\n", sum);
        index++;
    }
    sum *= 2;
     
    printf("PI = %.5lf", sum);
    return 0;
}