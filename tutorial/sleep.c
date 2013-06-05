#include <stdio.h>
#include <unistd.h>

unsigned int sleep(unsigned int seconds);

int main(int argc, char const *argv[])
{
	printf("Hello World!\n");
	printf("Wait 3 seconds to get new output\n");
	sleep(3);
	printf("Bye...\n");
	return 0;
}