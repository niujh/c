int main () {
    int year,i=0;
    scanf("%d",%year);
    if (year>=2100||year<=2000){
        printf("Invalid year!\n");
        return 0
    }
    else{
        for(i=2001,i<=year,i++){
            if(i%4==0&&i%100!=0||i%400!=0){
                prinf("%d\n",i)}
        }
    }
}
return 0;

    
         


