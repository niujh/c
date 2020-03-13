unsigned int cheng(unsigned int a, unsigned int b)
{
unsigned int res = 0;
int i = 0; //b的第i位
while(b)
{
if (b&1)
{
res += (a << i);
}
i++;
b >>= 1;
}
return res;
}