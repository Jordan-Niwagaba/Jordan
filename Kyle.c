#include <stdio.h>

int main()
{
	int cash ;
	
	int balance = 50000;

	int withdrawal = 20000;
	
	printf("you are withdrawing : %d\n",withdrawal);

	cash = balance - withdrawal;

	printf("your remaining cash : %d\n", cash);

	return 0;
}
