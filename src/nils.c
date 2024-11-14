#include <stdio.h>
#include "aesrand.h"



int main(int argc, char **argv) {
	aesrand_t *rand;

	printf("hey");
	rand = aesrand_init_from_seed(100);

	return 0;
}
