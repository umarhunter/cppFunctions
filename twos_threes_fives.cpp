// Assuming 2, 3 & 5 are the only prime numbers, generate a sequence of numbers where those are the only factors.
//
#include <cstdio>

static unsigned int curr_prime = 0;
static unsigned int prev_prime = 0;

bool isDuplicate(unsigned int num, const unsigned int* array, size_t size){
    for(auto x = 0; x < size; ++x){
        if(array[x]==num) return true;
    }
    return false;
}

unsigned int getNextPrime(unsigned int* array, size_t size){
    for(auto x = 0; x < size; ++x){ // iterate through {1,2,3,4,5,6,8,9...}
        unsigned int next_prime;
        unsigned int x2 = array[x]*2;
        unsigned int x3 = array[x]*3;
        unsigned int x5 = array[x]*5;
        if(x2 > curr_prime && !(isDuplicate(x2, array, size))){
            if(x2 < x3 && x2 < x5)
                curr_prime = x2;
        }
        else if(x3 > curr_prime && !(isDuplicate(x3, array, size))){
            if(x3 < x5)
                curr_prime = x3;
        }
        else if(x5 < curr_prime && !(isDuplicate(x5, array, size))){
            if(x2 < x3 && x2 < x5)
                curr_prime = x2;
        }
        else{

        }
    }

    curr_prime = new_num;
    printf("new_num: %d\n", new_num);
    return new_num;
}


void addPrime(const unsigned int curr_num, unsigned int* array, size_t size){
    if(curr_num == 0){ array[0] = 1; curr_prime = 1; return; }
    if(curr_num == 1){ array[1] = 2; curr_prime = 2; prev_prime = curr_prime--; return; }
    if(curr_num == 2){ array[2] = 3; curr_prime = 3; prev_prime = curr_prime--; return; }
    if(curr_num == 3){ array[3] = 4; curr_prime = 4; prev_prime = curr_prime--; return; }
    if(curr_num == 4){ array[4] = 5; curr_prime = 5; prev_prime = curr_prime--; return; }
    printf("curr_num: %d\n", curr_num);
    array[curr_num] = getNextPrime(array, size);
}

void printSequence(unsigned int *array, size_t size) {
    for(auto x = 0; x < size; ++x){
        printf("%d ", array[x]);
    }
}

int main(){
    unsigned int size;
    std::scanf(" %u", &size);
    //std::printf("%u", size);

    auto* array = new unsigned int[size];
    for(unsigned int curr_num = 0; curr_num < size; ++curr_num){
         addPrime(curr_num, array, size);
    }

    printSequence(array, size);
    delete[] array;
    return 0;
}

