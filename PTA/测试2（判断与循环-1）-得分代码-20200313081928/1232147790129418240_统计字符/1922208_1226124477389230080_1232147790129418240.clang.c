#include<stdio.h>

int main()

{

    int i, letter, digit, other, blank;

    char ch;

	

    digit=0,letter=0,other=0;

    for(i=0;i<10;i++)

    {

	ch=getchar();

	if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))

		letter++;

	else if(ch>='0'&&ch<='9')

		digit++;

	else if(ch==' '||ch=='\n')

		blank++;

	else

		other++;

    }

    printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);

	

    return 0;

}