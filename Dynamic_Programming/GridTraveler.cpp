//
//  GridTraveler.cpp
//  Dynamic_Programming
//
//  Created by Raphael Godoy on 16.03.22.
//

#include "GridTraveler.hpp"
#include <iostream>

using namespace std;

// Constructor
GridTraveler::GridTraveler(){
}


// Methods
unsigned int GridTraveler::calculate_all_paths(unsigned int x, unsigned int y){
    if(x<=0 || y <=0) return 0;
    if(x==1 && y==1) return 1;
    
    return calculate_all_paths(x-1,y) + calculate_all_paths(x,y-1);
}

void GridTraveler::show_all(unsigned int x, unsigned int y){
    cout << "Grid (" << x << "," << y << ") contains: " << calculate_all_paths(x,y) << " different paths" << endl;
    
    
}
