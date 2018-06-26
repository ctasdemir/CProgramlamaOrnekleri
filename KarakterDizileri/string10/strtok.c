
#include <stdio.h>
#include <string.h>

int main(void)
{
	/* initialize array string */
	char string[] = "This-is-a-sentence-with 7 tokens";
	char *tokenPtr; /* create char pointer */

	printf("%s\n%s\n\n%s\n",
		"The string to be tokenized is:", string,
		"The tokens are:");

	tokenPtr = strtok(string, "-"); /* begin tokenizing sentence */

		/* continue tokenizing sentence until tokenPtr becomes NULL */
	while (tokenPtr != NULL) {
		printf("%s\n", tokenPtr);
		tokenPtr = strtok(NULL, "-"); /* get next token */

	} /* end while */
}