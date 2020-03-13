# include <stdio.h>
# include <stdio.h>

float f(float x)
{
    return (x!=0.0)?(1.0/x):(0.0);
}
int main()
{
    float x;
    if (scanf("%f",&x)==1)
    {
        printf("f(%.1f)=%.1f",x,f(x));
    }
    return 0;

}