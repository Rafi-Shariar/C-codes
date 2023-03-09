#include<stdio.h> //  5-2 module ; choclate problem.
int main (){

	int n;
	printf("enter number of choclates :");  scanf("%d",&n);

	int choc=n;
	int pack=n;

	while (pack>=4)
	{
		choc += (pack/4);
		pack = (pack/4) + (pack%4);
	}

	printf("%d", choc);
	


	return 0;
}