int main()
{
	char a[100000];
		gets(a);
//	printf("%s\n",a);
	char b[4]="250";
	char c[4];
	int n=1,i,l,k;
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]==' ')
		{
			n++;
		}
		else
		{
			if(a[i]!='-')
			{
				for(int j=0;j<3;j++)
				{
					c[j]=a[i+j];
				
				}
				if(strcmp(c,b)==0)
				{
					k=n;
					break;
				}
			 } 
			else if(a[i]=='-')
			{
				i++;
			}
			
			
		}
	}
	printf("%d",k);
}

