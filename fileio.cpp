//Project5 I/O file
//due Friday Feb14

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

//standard main
int main() 
{
    std::ifstream inFile("data.csv"); // Opening the file
    std::string currentLine;
    std::stringstream converter;
    std::string num1, num2, text;
    int one, two;//declaration
    
    while (std::getline(inFile, currentLine))//while loop to get each line as needed where getline has a boolean returntype 
    {
        converter.clear();//not interferring with older data, if any
        converter.str(currentLine);
        
        std::getline(converter, num1, ',');
        std::getline(converter, num2, ',');
        std::getline(converter, text);
        
        converter.clear();
        converter.str(num1);
        converter >> one; // Convert using stringstream
        
        converter.clear();
        converter.str(num2);
        converter >> two; // Convert using stringstream
        
        int sum = one + two;
        
	//for loop for printing the text string the desired number of times
        for (int i = 0; i < sum; i++) 
	{
            std::cout << text << " ";
        }//for loop closed
        std::cout << std::endl;//change to new line
    }//while loop close
    
    inFile.close(); // Close the file
    return 0;// ensuring successful execution of the file
}//main closed
