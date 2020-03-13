int main (){
	int a, b;
	char c;
	double p;
	
	scanf("%d %d %c", &a, &b, &c);
	
	if(b == 90){
		p = 1.0 * a * 6.95;
	}else if(b == 93){
		p = 1.0 * a * 7.44;
	}else if(b == 97){
		p = 1.0 * a * 7.93;
	}
	
	if(c == 'm'){
		p *= 0.95;
	}else if(c == 'e'){
		p *= 0.97;
	}
	printf("%.2lf", p);
	
	return 0;
}
