//
//  GridTraveler.hpp
//  Dynamic_Programming
//
//  Created by Raphael Godoy on 16.03.22.
//

#ifndef GridTraveler_hpp
#define GridTraveler_hpp

#include <stdio.h>
using namespace std;

class GridTraveler{
public:
    // Constructor
    GridTraveler();
    
    // Methods
    unsigned int calculate_all_paths(unsigned int x, unsigned int y);
    void show_all(unsigned int x, unsigned int y);
    
    
};








#endif /* GridTraveler_hpp */
