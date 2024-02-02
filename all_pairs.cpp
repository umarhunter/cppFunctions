/// Umar Faruque
/// A function that takes an integer and outputs all its possible pairs

#include <iostream>
#include <vector>

int main() {
	int num{5};
	std::vector<char> integer_vec(num);

	for(int index = 0; index < num; ++index){
			integer_vec[index] = '-';}


	for(int index = 0; index < num; ++index){
		for(int inner = 0; inner < num; ++inner){
			std::cout << index;
		}
		std::cout << std::endl;
	}
	return 0;
}
