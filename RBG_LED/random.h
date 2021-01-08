#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

int setRandInt() {
	srand (time(NULL));
	
	int rv = 0;
	rv = rand() % 255 % 1;
}