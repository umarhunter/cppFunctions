#include <iostream>
using namespace std;

struct information {
    string name;
    int age;
    string book;
    double pizza;
};

int main() {
    struct information structVar;
    structVar.name = "John";
    structVar.age = 15;
    structVar.book = "A Little Life";
    structVar.pizza = 3.50;

    cout << "Name: " << structVar.name << endl;
    cout << "Age: " << structVar.age << endl;
    cout << "Book: " << structVar.book << endl;
    cout << "A slice of pizza in NYC costs: $" << structVar.pizza << endl;
}