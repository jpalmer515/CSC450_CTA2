#include <iostream>

//First Function, with a string length of 5
void fiveLength (const std::string adminMsg) {
    std::string inputOne;
    std::string inputTwo;
    int size = 5;

    while (true) {
        std::cout << adminMsg;
        std::cin >> inputOne >> inputTwo;

        if (inputOne.length() <= size && inputTwo.length() <= size) {
            std::cout << inputOne << inputTwo << "\n";
            return;
        }
        else {
            std::cout << "Invalid Input. Please enter two strings with a length of 5 or less. \n";
        }
    }
}

//Function with string length of 8
void eightLength (const std::string adminMsg) {
    std::string inputOne;
    std::string inputTwo;
    int size = 8;

    while (true) {
        std::cout << adminMsg;
        std::cin >> inputOne >> inputTwo;

        if (inputOne.length() <= size && inputTwo.length() <= size) {
            std::cout << inputOne << inputTwo << "\n";
            return;
        }
        else {
            std::cout << "Invalid Input. Please enter two strings with a length of 8 or less. \n";
        }
    }
}

//Function with string length of 20
void twentyLength (const std::string adminMsg) {
    std::string inputOne;
    std::string inputTwo;
    int size = 20;

    while (true) {
        std::cout << adminMsg;
        std::cin >> inputOne >> inputTwo;

        if (inputOne.length() <= size && inputTwo.length() <= size) {
            std::cout << inputOne << inputTwo << "\n";
            return;
        }
        else {
            std::cout << "Invalid Input. Please enter two strings with a length of 20 or less. \n";
        }
    }
}

//Main function to call the other functions
int main() {

    fiveLength("Please enter two strings with 5 characters or less. \n");
    eightLength("Please enter two strings with 8 characters or less. \n");
    twentyLength("Please enter two strings with 20 characters or less. \n");

    return 0;
}
