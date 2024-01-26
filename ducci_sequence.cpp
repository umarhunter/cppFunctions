// Umar F.
// This program will take positive inputs and show the output of the Ducci sequence.
#include <iostream>
#include <array>
#include <memory>

bool check_zero(const auto& array) {
    for(int index = 0; index < array.size(); ++index) {
        if(array[index]!=0)
            return false;
    }
    return true;
}

void ducci(auto& array){
    while(check_zero(array)==0) {
        int first_num = array[0];
        for(int index = 0; index < array.size(); ++index) {
            if(index == array.size()-1) {
                array[index] = abs(array[index]-first_num);
            }
            else {
                array[index] = abs(array[index]-array[index+1]);
            }
        }
    }
}

int main(){
    // Set a size
    constexpr int size = 4;

    // Initialize a new array
    std::array<int, size> array{};


    // Fill each element in list with an integer
    std::cout << "Original List: "; // display original list
    for(int index = 0; index < size; ++index) {
        array[index] = index+1;
        std::cout << index+1 << " ";
    }

    // run algorithm
    ducci(array);

    std::cout << "\nResult: "; // display result
    for(const int index : array) {
        std::cout << index << " ";
    }

    return 0;
}