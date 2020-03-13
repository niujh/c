 #include<stdio.h>
 double fact(int n);

 int main() {
     int m,n;
     int c;
      scanf("%d%d",&m,&n);
      c=(int)(fact(n)/(fact(m)*fact(n-m)));
      printf("result = %d",c);
}

 double fact(int n) {
    double p=1.0;
     while(n) {
         p *= n;
         n--;
     }
     return p;
}
