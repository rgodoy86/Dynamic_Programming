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
Fibonacci::Fibonacci(){}

/// Methods
// Find the N-th Fibonacci number
unsigned long int Fibonacci::find_fib(unsigned int n){
    if(Fibonacci::_memo.count(n) > 0) return _memo.at(n);
    
    if(n <= 1) return 0;
    if(n == 2) return 1;
    
    Fibonacci::_memo.insert({n,find_fib(n-1) + find_fib(n-2)});
    return find_fib(n-1) + find_fib(n-2);
    
    return 0;
}

// Print a list of N Fibonacci numbers
void Fibonacci::show_all(unsigned int n){
    Fibonacci::_memo.clear();
    Fibonacci::_memo.insert({{0,0}, {1,1}});
    
    Fibonacci::find_fib(n);
    
    cout << "Printing all fibonacci numbers until " << n << endl;
    for(auto it = _memo.begin(); it != _memo.end(); ++it){
        cout << "{ " << it->first << " , " << it->second << " }" << endl;
    }
    
}



// End Class
