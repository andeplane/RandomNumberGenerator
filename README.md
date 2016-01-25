# RandomNumberGenerator
A random number generator wrapping class. It uses c++11 to generate random numbers in a thread safe way.

c++11 random number generation supports many different generators which are thread safe. This static class wraps these commands into a simpler usage.

# Example
```c++
    int seed = 12345;
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
```
