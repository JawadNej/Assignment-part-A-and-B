#include <iostream>
#include <stdexcept>
using namespace std;

char character(char start, int offset) {
    if (!isalpha(start)) {
        throw invalid_argument("InvalidCharacterException: Start is not a letter.");
    }

    char target = start + offset;

    if (!isalpha(target)) {
        throw out_of_range("InvalidRangeException: Target is not a letter.");
    }

    return target;
}

int main() {
    try {
        cout << "character('a', 1) returns: " << character('a', 1) << endl;
        // Uncomment the lines below to test additional cases
        // std::cout << "character('a', -1) returns: " << character('a', -1) << std::endl;
        // std::cout << "character('Z', -1) returns: " << character('Z', -1) << std::endl;
        // std::cout << "character('?', 5) returns: " << character('?', 5) << std::endl;
        // std::cout << "character('A', 32) returns: " << character('A', 32) << std::endl;
    }
    catch (const invalid_argument& e) {
        cerr << e.what() << endl;
    }
    catch (const std::out_of_range& e) {
        cerr << e.what() << endl;
    }

    return 0;
}