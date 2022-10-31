#include<stdio.h>

int main()
{
	FILE *fp;
	char ch, newch[100];
	int i=0,j,COUNT=0;
	
	fp=fopen("myfile.txt", "r");
	if(fp==NULL)
	{
		perror("Error: ");
		return -1;
	}
	
	while(!feof(fp))
	{
		COUNT++;
		putchar(ch);
		newch[i]=ch;
		i++;
		ch=getc(fp);
	}
	printf("\n\n");
	printf("Reverse: \n");
	for(j=(COUNT-1);j>=0;j--)
	{
		ch = newch[j];
		printf("%c",ch);
	}
	printf("\n");
	return 0;
}
