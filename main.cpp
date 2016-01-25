#include <iostream>
#include "random.h"

using namespace std;

int main(int numberOfArguments, char **arguments)
{
    int seed = 12345;
    if(numberOfArguments > 1) {
        seed = atoi(arguments[1]);
    }
    Random::seed(seed);
    cout << "Here are some random numbers based on seed " << seed << ":" << endl;
    cout << "Random int: " << Random::nextInt(0,10) << endl;
    cout << "Random double: " << Random::nextDouble() << endl;
    cout << "Random float: " << Random::nextFloat() << endl;
    cout << "Random long: " << Random::nextLong(0,10) << endl << endl;

    Random::randomSeed();
    cout << "Choosing random seed based on clock." << endl;
    cout << "Random int: " << Random::nextInt(0,10) << endl;
    cout << "Random double: " << Random::nextDouble() << endl;
    cout << "Random float: " << Random::nextFloat() << endl;
    cout << "Random long: " << Random::nextLong(0,10) << endl << endl;
    return 0;
}
