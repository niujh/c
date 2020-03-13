#include<stdio.h>

int main(){
    double distance;
	int minute;
	double fare = 0;
	scanf("%lf%d", &distance, &minute);
	if(minute >= 5)
		fare = (minute / 5) * 2;
	if(distance <= 3) {
		fare += 10;		
	}
	else if(distance <= 13) {
		if(distance - 10 > 0)
			fare += 10 + 7 * 2 + (distance - 10) * 3;
		else
			fare += 10 + (distance - 3) * 2;
	}
	else {
		fare += 10 + 7 * 2 + (distance - 10) * 3;
	}
	printf("%d\n", (int)(fare + 0.5));
	return 0;
}
