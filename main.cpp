#include <iostream>
#include "main.h"

using namespace std;

int main(int argc, char** argv){
	if (argc!=2)
		print_documentation();
	else
		Layer thisLayer = readInput(argv[0]);

}

/*
	*

	*
	*

	*
	 *

	*
	*
	*

	**
	**
*/