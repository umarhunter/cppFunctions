// Property of Umar Faruque (markhunter)
// This program will print out which C++ version your compiler has decided to use. Use it for debugging issues with compilers.
// Newer C++ standards will be added as they are released.
#include <iostream>

int main() {
    if(__cplusplus > 202002L) std::cout << "C++23\n";
    else if(__cplusplus == 202002L) std::cout << "C++20\n";
    else if(__cplusplus == 201703L) std::cout << "C++17\n";
    else if(__cplusplus == 201402L) std::cout << "C++14\n";
    else if(__cplusplus == 201103L) std::cout << "C++11\n";
    else if(__cplusplus == 199711L) std::cout << "C++98\n";
    else if(__cplusplus < 199711L) std::cout << "Pre-98\n";
    else std::cout << "Unknown Standard";
    return 0;
}
