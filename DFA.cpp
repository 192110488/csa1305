#include<stdio.h>
#include<string.h>	
int main()
{
	int table[4][2]={{1,3},{1,2},{1,2},{3,3}};
	int fst=2,pst=0,nst=0,invalid=0,i,l;
	char input[20];
	printf("Enter a string:");
	scanf("%s",input);
	l=strlen(input);
	for(i=0;i<l;i++)
	{
		if(input[i]=='a')
		nst=table[pst][0];
		else if(input[i]=='b')
		nst=table[pst][1];
		else
		invalid=l;
		pst=nst;
	}
	if(invalid==l)
	{
		printf("Invalid input");
	}
	else if(pst==fst)
		printf("Accept\n");
	else
		printf("Don't Accept\n");
}
