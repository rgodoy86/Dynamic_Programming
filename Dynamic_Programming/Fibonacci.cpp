//
//  Fibonacci.cpp
//  Dynamic_Programming
//
//  Created by Raphael Godoy on 09.03.22.
//

#include "Fibonacci.hpp"
#include <iostream>
#include <map>

using namespace std;

/// Constructor
Fibonacci::Fibonacci(){};

/// Methods
// Find the N-th Fibonacci number
unsigned long int Fibonacci::find_fib(unsigned int n){
    // Return fib(0)=0
    if(n == 0) return 0;
    // Return fib(1)=1
    if(n == 1) return 1;
    // Memoizing: Load pre existing path to avoid extra recursive steps
    if(_memo.count(n) > 0) return _memo.at(n);
    
    // Add new value for the memoizing map
    _memo.insert({n,find_fib(n-1) + find_fib(n-2)});
    // Return the sum of possible paths
    return find_fib(n-1) + find_fib(n-2);
}

// Print a list of N Fibonacci numbers
void Fibonacci::show_all(unsigned int n){
    _memo.clear();
    _memo.insert({{0,0}, {1,1}});
    
    find_fib(n);
    
    cout << "Printing all fibonacci numbers until " << n << endl;
    for(auto it = _memo.begin(); it != _memo.end(); ++it){
        cout << "{ " << it->first << " , " << it->second << " }" << endl;
    }
}

// End Class

