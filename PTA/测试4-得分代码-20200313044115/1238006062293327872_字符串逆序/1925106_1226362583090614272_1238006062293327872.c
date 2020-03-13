#include<stdio.h>
#include<string.h>
int main()
{
	char str1[81], str2[82];
    	gets(str1);
        	for (int i = strlen(str1) - 1; i >= 0; i--)
            	{
                		str2[strlen(str1) - 1 - i] = str1[i];
                        	}
                            	str2[strlen(str1)] = '\0';
                                	puts(str2);
                                    	return 0;
                                        }
                                        