
#include <stdio.h>
#include <string.h>

int main(void)
{
	/* initialize char pointer */
	const char *string1 = "damlaya damlaya gol olur";

	int c = 'd'; 

	printf("string1 de %c karakterinin son goruldugu \nyerden itibaren" \
		" kalan kisim:%s\n",c,strrchr(string1, c));

	return 0; /* indicates successful termination */

} /* end main */
