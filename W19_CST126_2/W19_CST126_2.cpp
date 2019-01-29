// W19_CST126_2.cpp : Bottles!
//

#include "pch.h"
#include "Collection.h"

int main()
{
	std::cout << "Please enter the input file name including extension: " << std::flush;
	
	std::string fileName;
	std::cin >> fileName;
	std::ifstream inputFile{fileName};

	std::cout << std::endl;

	if (!inputFile.fail())
	{
		Collection openCollection{ inputFile };
		openCollection.printCollection();
	}
}

//  Here are my steps.  Your steps are likely to be smaller.  
//  Read from the file and print it out.
//  Add bottle class including .h / .cpp. 
//  change the read of the file to fill a single bottle.
//  move the print to the bottle class and print my single bottle.
//  made my print look nicer.  
//  made a constant for the maximum number of bottles.  
//  add a global array of bottles.   The globalness of this is just temporary. 
//  added a collection struct including .h / .cpp
//  moved my global array / size into the struct.
//  added a "Add Bottle" function to my collection struct.  
//  add a global variable for my collection.  
//  moved collection variable into the main program and passed it into my file reading function.
//  Added total value function to collection / added it to print.

