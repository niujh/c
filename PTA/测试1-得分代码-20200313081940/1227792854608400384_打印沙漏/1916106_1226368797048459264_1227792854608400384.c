#include <stdio.h>
void print(int i, int j,char c)		
{
	for (int k = (i - j) / 2; k > 0; k--) {//符号前有(i-j)/2个空格
		putchar(' ');
	}
	for (int k = j; k > 0; k--) {
		putchar(c);
	}
	putchar('\n');
}
int main()
{
	int N,i,n;
	char c;
	scanf("%d %c", &N,&c);
	for (i = 1,n = 0; ; ) {
		if (i == 1) 
			n = 1;
		else
			n += i * 2;
		if (n>N-2*(i+2))
			break;
		i += 2;
	}
	//i为沙漏的第一行或最后一行中的符号数(最大值)
	for (int j = i; j >= 1; j -= 2) {//打印沙漏上半部分（包括中间）
		print(i, j, c);	
	}
	for (int j = 3; j <= i; j += 2) {//下半部分
		print(i, j, c);
	}
	printf("%d", N-n);
	return 0;
}
