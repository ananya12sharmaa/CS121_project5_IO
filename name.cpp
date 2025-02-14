#include <iostream>
#include <string>

int main() {
    // Define a name (String)
    std::string name;

    std::cout << "Enter the name: ";

    // Get the input from std::cin and store into name
    std::getline(std::cin, name);

    std::cout << "Hello " << name << "!\n";

    return 0;
}
