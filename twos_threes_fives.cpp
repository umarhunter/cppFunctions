#include <cstdio>
#include <deque>
#include <algorithm>
#include <unordered_set>

int main() {
    unsigned int size;
    std::scanf(" %u", &size);

    std::deque<unsigned> primes;
    std::unordered_set<unsigned> seen; // tracking duplicates

    // insertion of initial primes 2,3,5
    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(5);

    // inserting primes already generated
    seen.insert(2);
    seen.insert(3);
    seen.insert(5);

    printf("1 "); // first prime :)
    for(unsigned int index = 0; index < size; ++index)
    {
        unsigned int min = primes.front(); // the front of the dequeue should contain the minimum prime number
        printf("%u ", min);
        primes.pop_front();

        unsigned int multiples[] = {2 * min, 3 * min, 5 * min};
        for (unsigned int multiple : multiples) {
            if (seen.find(multiple) == seen.end()) { // if our min is NOT a duplicate
                primes.push_back(multiple);
                seen.insert(multiple);
            }
        }

        // Ensure the deque remains sorted
        std::sort(primes.begin() + index, primes.end());
    }

    return 0;
}
