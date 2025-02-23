# CS121_project5_IO

## Goal
The goal of Project #5 is to familiarise with fstream class, inputting data, parsing it using stringstream (and how it is different from string class) and conversion of that data to display a desired format of output!

## Initial Understanding 
Files are used to store data permanently, in maybe .csv or .txt format. We can access, i.e., read that file, breakdown into meaningful concepts and sotring in desired/needed data structural formats and maybe computing with it. This is known as file parsing. 

By definition, "A Stream is an abstraction that represents a device on whihc input and output operations are performed. In other words, it can be represented as a souce or destination of characters of indefinite length".

The main issue solved here is that when the input contains a whitespace, it goes to trash memory. In our file parsing case, csv files we need the get the two int values, and a string. We need to bring the file as a "stream" without the leaving behind of essential data that can be potentially left out. 

## Peudocode/Algorithm

```
/*beginnning by including the classes/predefined functions we will be needing in this program*/
Include iostream //for the input or output of "streams" of data
Include fstream //for filehandling : reading or writing files
Include sstream //specifically for parsing the data from csvfile and convert to desired int or str data type
Include string //to use std::string class will dealing with string

start the main function definition
{
    opening the data.csv //using ifstream
    declare string variable named currentLine to get one line from the file at a time
    declare stringstream type variable named converter to parse the stream from file
    variables of string type to initially get the separated string of 2 numbers and one string

    begin while loop(indefinite) using getline(filename, variable currentLine to store that line)
    //the return type of getline is boolean, so if it gets the line, the loop block runs
    {
        clear converter of error flags
        convert the currentLine to string type and store in converter
        //from the hoped format: int,int,str
        use getline() to  get 1st number in num1 separated by ,
        use getline() to  get 2nd number in num2 separated by ,
        use getline() to  get string in text //delimiter not to be worried

        clear converter again
        convert num1 to string
        save it in int one

        clear converter again
        convert num2 to string
        save it in int two
        //text is already a string

        add one and two and store in sum varaiable
        use for loop beginning with 0 and less than sum with ++ increment//definite since we know end is sum
            print with cout the text and space
        close for loop
    }close while loop
    close the file
    return 0 to ensure correct running of main
}close main 
        
```
## Learning Outcomes
- [x] File handling and parsing with fstream
- [x] new functions learnt
- [x] Difference between sstream and string
- [x] parallels between fstream iostream
- [x] execute a new concept in a cool way

![https://cplusplus.com/reference/iostream/fstream/]

*Making pseudocode was fun. Thank you for feedback Nolan :tada:.*

*Document created with <3 by Ananya Sharma.*
