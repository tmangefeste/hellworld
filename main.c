#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int nRandom;

srand(time(NULL));
nRandom = rand();
printf("random number: %i\n", nRandom);
return 0;
}

