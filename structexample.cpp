#include <iostream> // basic library for output
using namespace std; // removes the necessity of declaring std before declarations

struct information { // we declare a structure with the given name information
    string name;
    int age;
    string book;
    double pizza;
};
blah blah blah blah blah






int main() { // c++ main function 
    struct information structVar;
    structVar.name = "John";
    structVar.age = 15;
    structVar.book = "A Little Life";
    structVar.pizza = 3.50;
    // our outputs 
    cout << "Name: " << structVar.name << endl;
    cout << "Age: " << structVar.age << endl;
    cout << "Book: " << structVar.book << endl;
    cout << "A slice of pizza in NYC costs: $" << structVar.pizza << endl;
}
