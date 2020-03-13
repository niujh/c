#include<stdio.h>
#include<math.h>
int main()
{
	int i, d = 0;
	float j, c;
	do {
		printf("1-Ball\n2-Cylinder\n3-Cone\nother-Exit\nPlease enter your command:\n");
		scanf("%d", &i);
		if (i == 1)
		{
			printf("Please enter the radius:\n");
			d = 1;
		}
		else if ((i == 2) || (i == 3))
		{
			d = 2;
			printf("Please enter the radius and the height:\n");
		}
		else
			break;
		if (d == 1)
		{
			scanf("%f", &j);
			printf("%.2f\n", ((4.0 / 3) * 3.141592654) * pow(j,3));
		}
		else if ((d == 2) && (i == 2))
		{
			scanf("%f %f", &j, &c);
			printf("%0.2lf\n", 3.141592654 * pow(j,2) * c);
		}
		else if ((d == 2) && (i == 3))
		{
			scanf("%f %f", &j, &c);
			printf("%0.2lf\n", (1.0 / 3) * 3.141592654 * pow(j,2) * c);
		}
	} while (getchar() != '0');
	return 0;
}