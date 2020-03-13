int main()
{
int T, temp, k;
scanf("%d", &T);
temp = T % 90;//确定几个回合过去之后剩余多少分钟
k = T / 90;//确定过了几个回合，每90分钟重复一次
if (temp < 30 && temp > 0)
printf("^_^ %d\n", k * 270 + temp * 9);
else if (temp == 30)
printf("-_- %d\n", k * 270 + temp * 3);
else if (temp > 30 && temp < 45)
printf("@_@ %d\n", k * 270 + temp * 3);
else if (temp == 45)
printf("-_- %d\n", k * 270 + temp * 3);
else if (temp > 45 && temp <= 50)
printf("^_^ %d\n", k * 270 + 90 + (temp - 40) * 9);
else if (temp > 50 && temp < 60)
printf("^_^ %d\n", k * 270 + 180);
else if (temp == 60)
printf("-_- %d\n", k * 270 + temp * 3);
else if (temp > 60 && temp < 90)
printf("@_@ %d\n", k * 270 + temp * 3);
else
printf("-_- %d\n", k * 270 + temp * 3);
return 0;
}
