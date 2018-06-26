
#include <stdio.h>
#include <string.h>

int main(void)
{
	const char *string1 = "Ornek bir string 1235678";
	const char *string2 = "Ornek 1 string 1235678";
	const char *string3 = "1234567890";

	printf("string1 = %s\n", string1);
	printf("string2 = %s\n", string2);

	/* string1 string'i icerisinde string3'den herhangi bir karakter
	iceren ilk parcanin boyutu: */
	printf("sonuc = %u\n", strspn(string1, string3));


	printf("string1 = %s\n", string1);

	printf("sonuc = %u\n", strspn(string2, string3));

	return 0;

}