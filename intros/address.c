#include "stdio.h"
#include "string.h"

/**
 * main - access point
 * Return (0)
 */

struct address 
{
	unsigned int post;
	char *county;
	unsigned int houseno;
	char *estate;
}Homeadd;

int main(void)
{
	Homeadd.post = 98;
	Homeadd.county = "roy iganza";
	Homeadd.houseno = 33;
	Homeadd.estate = "new";

	printf("%u\t, %s\t, %u\t, %s\t", Homeadd.post, Homeadd.county, Homeadd.houseno, Homeadd.estate);

	return (0);
}
