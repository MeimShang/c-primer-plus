# include <stdio.h>
void smile();
void main()
{
	for(int i=0; i<3;i++)
	{
		smile();
	}
	printf("\n");

	for(int i=0; i<2;i++)
	{smile();}
	printf("\n");

	smile();
	printf("\n");
}
void smile()
{
printf("Smile!");
}
