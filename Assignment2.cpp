#include <iostream>
#include <string>

// Function to reverse the input string
std::string reverseString(const std::string& input) {
    std::string reversed;
    for (int i = input.length() - 1; i >= 0; --i) {
        reversed += input[i];
    }
    return reversed;
}

int main() {
    std::string inputString;

    // Prompt the user to enter a string
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    // Call the reverseString function to reverse the string
    std::string reversedString = reverseString(inputString);

    // Display the reversed string
    std::cout << "Reversed string: " << reversedString << std::endl;

    return 0;
}