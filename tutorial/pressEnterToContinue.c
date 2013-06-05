#include <stdio.h>

void PressEnterToContinue()
	{
		int c;
		fflush( stdout );
		do c = getchar(); while ((c != '\n') && (c != EOF));
	}

main()
	{
		printf("Hello, world!\n");
		printf("Press enter to continue\n");
		PressEnterToContinue();
		printf("Welcome to my life!\n");
		return 0;
	}