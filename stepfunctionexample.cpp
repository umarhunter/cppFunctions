#include <iostream>
using namespace std;

int function(int x) { //this is the step function. Here, we are setting a domain for the possible outputs.
    int number;
    if(x > 0) {
        number = 1;
    }
    else if(x < 0) {
        number = -1;
    }
    else { number = 0; }
    return number; //this will return the values to the calling function main
}

int main() {
    int firstnum = function(5); // firstnum is greater than 0
    int secondnum = function(0); // secondnum is exactly 0
    int thirdnum = function(-5); // thirdnum is less than 0
    cout << "firstnum = " << firstnum << endl; //outputs
    cout << "secondnum = " << secondnum << endl;
    cout << "thirdnum = " << thirdnum << endl;
}
