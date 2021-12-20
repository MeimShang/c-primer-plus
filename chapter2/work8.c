# include <stdio.h>
void two();
void one_three();
void main()
{
printf("starting now: \n");
one_three();
printf("done! \n");
}

void one_three()
{
	printf("one \n");
	two();
	printf("three \n");
}

void two()
{printf("two \n");
}
