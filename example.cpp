

#include "perlin.h"
#include <iostream>

//Example usage
int main(int argc, char* argv[])
{
	Perlin perlin(721,65);
	for (float i = 0; i < 1000; i++) {
		std::cout<<perlin.perlin(i)<<std::endl;
	}
	return 0;
}

