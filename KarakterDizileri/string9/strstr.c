
#include <stdio.h>
#include <string.h>

int main(void)
{
	const char *string1 = "C Programlama cok zevkli!";
	const char *string2 = "Programlama";
	

	printf("string1 = %s\n", string1);
	printf("string2 = %s\n", string2);

	/* string1 string'i icerisinde string2'nin bulunduðu yerden itibaren
	kalan kisim:*/
	printf("sonuc = %s\n", strstr(string1, string2));


	return 0;

}

