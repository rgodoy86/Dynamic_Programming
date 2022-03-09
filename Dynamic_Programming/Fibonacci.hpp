//
//  Fibonacci.hpp
//  Dynamic_Programming
//
//  Created by Raphael Godoy on 09.03.22.
//

#ifndef Fibonacci_hpp
#define Fibonacci_hpp

#include <stdio.h>
#include <map>

using namespace std;

class Fibonacci{
private:
    map<int,unsigned long int> _memo = {{0,0}, {1,1}};

public:
    // Constructor and Destructor
    Fibonacci();
    
    // Utility
    unsigned long int find_fib(unsigned int n);
    void show_all(unsigned int n);
};

#endif /* Fibonacci_hpp */
