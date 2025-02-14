//Project5 for File I/O
//due Friday Feb14

#include <iostream>
#include <fstream>
#include <string>

int main()
{
	inFile.open("data.csv");
	while(getline(inFile, currentLine))
	{
		converter.clear();
		converter.str(currentLine);

		getline(converter, int1,);
		getline();
		getline();

	}//loop ends
	

	
	return 0;
}//end main
