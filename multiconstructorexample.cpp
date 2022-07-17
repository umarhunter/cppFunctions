#include <iostream>

struct whatTruth { // user-defined type class named whatTruth that contains constructors that initialize based off the variable in main (var1)
    whatTruth() { std::cout << "No operation given."; }

    whatTruth(char c) {
        std::cout << "Character: " << c;
    }
    whatTruth(int x) {
        std::cout << "Integer: " << x;
    }
    whatTruth (bool b) {
        if(b) {
            std::cout << "True: " << b;}
        else
            std::cout << "False: " << b;
    }
};

int main() {
    whatTruth var1{false};
}