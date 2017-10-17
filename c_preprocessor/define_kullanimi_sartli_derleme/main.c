#include <stdio.h>
#include <stdint.h>

#define PROGRAM1

#ifdef PROGRAM1

int main()
{
	printf("PROGRAM 1 \n");
	return 0;
}



#elif PROGRAM2
int main()
{
	printf("PROGRAM 2 \n");

	return 0;
}

#else
#error PROGRAM TANIMI YAPILMADI!
#endif

