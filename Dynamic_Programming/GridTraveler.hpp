//
//  GridTraveler.hpp
//  Dynamic_Programming
//
//  Created by Raphael Godoy on 16.03.22.
//

#ifndef GridTraveler_hpp
#define GridTraveler_hpp

#include <stdio.h>
#include <vector>
#include <map>

using namespace std;

class GridTraveler{
    map<vector<unsigned int>, unsigned long int> _memo = {{{1,1},1}};
public:
    // Constructor
    GridTraveler();
    
    // Methods
    unsigned long int calculate_all_paths(unsigned int x, unsigned int y);
    void show_all(unsigned int x, unsigned int y);
};

#endif /* GridTraveler_hpp */
