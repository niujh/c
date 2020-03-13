int main(void){
char c;
int dight=0,letter=0,blank=0,other=0;
                                	
while(1){
c=getchar(); 
                                            	
if(c==' '||c=='\n'){
blank ++;
}else if('0'<=c&& c <='9'){
dight++;
}else if('a'<=c&&c<='z'||'A'<=c&&c<='Z'){
letter++;
}else{
other++;
}
                                                                                                    	
if(letter+blank+dight+other==10){
printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,dight,other);
break;
}
}
return 0;
}
    