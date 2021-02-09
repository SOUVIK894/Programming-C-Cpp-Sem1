#include<stdio.h>

int main(int argc,char*argv[])
{
	int i,j,k=1;
	printf("\t S\t M\t T\t W\t T\t F\t S\t \n\n\n");
	for(i=1;i<=31;i++)
	{
		if(i<=31)
		{
			printf("\t %d",i);
			k++;
			if(k==8||k==15||k==22||k==29)
			{
				printf("\n");
			}
		}
	}
	printf("\n\n\n\n\n\n\n\n\n");
	return 0;
}
