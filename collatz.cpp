// Umar F.
// This program will take positive inputs and show the output of the Collatz sequence.
#include <iostream>
#include <vector>

unsigned int collatz(unsigned int pos_int, std::vector<unsigned int>& list_vec){
    if(pos_int == 1)
        return pos_int;

    if(pos_int%2==0) {
        pos_int /= 2;
        list_vec.push_back(pos_int);
        return collatz(pos_int, list_vec);
    }
    else {
        pos_int *= 3;
        pos_int += 1;
        list_vec.push_back(pos_int);
        return collatz(pos_int, list_vec);
    }

}

int main(int argc, char* argv[]){
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <integer_argument>" << std::endl;
        return 1;
     }
    unsigned int x = std::atoi(argv[1]);

    std::vector<unsigned int> list_vec;
    list_vec.push_back(x);
    auto result = collatz(x, list_vec);

    std::cout << "Result: " << result << std::endl;
    for(const unsigned int index : list_vec) {
        std::cout << index << " ";
    }
    return 0;
}