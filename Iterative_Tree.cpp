#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cin >> input;  // Read input string

    for (int i = 0; i < input.size(); i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << input[j];  // Print left part
        }
        for (int j = i - 1; j >= 0; j--) {
            std::cout << input[j];  // Print right part (reverse)
        }
        std::cout << std::endl;  // Move to the next line
    }
    return 0;
}
// If the input is ABC the result will be 
// A  
// ABA  
// ABCBA  
