double fact(int n);
double oddfact(int n);
 
int main(void)
{
	int i;
	double eps, x, sum = 0;
	scanf("%le", &eps);
 
	for (i = 0; (x = fact(i) / oddfact(i)) >= eps; i++)
		sum += x;
	sum += fact(i) / oddfact(i);
	
	printf("PI = %.5lf", sum * 2);
	return 0;
}
 
double fact(int n)
{
	if (n == 0) return 1;
	return n*fact(n - 1);
}
 
double oddfact(int n)
{
	if (n == 0) return 1;
	return (2 * n + 1)*oddfact(n - 1);
}