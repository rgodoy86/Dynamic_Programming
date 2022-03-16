//
//  GridTraveler.cpp
//  Dynamic_Programming
//
//  Created by Raphael Godoy on 16.03.22.
//

#include "GridTraveler.hpp"
#include <iostream>
#include <vector>
#include <map>

using namespace std;

// Constructor
GridTraveler::GridTraveler(){
}

// Methods
unsigned long int GridTraveler::calculate_all_paths(unsigned int x, unsigned int y){
    // Grid 0,y and x,0 returns 0 path
    if(x<=0 || y <=0) return 0;
    // Grid 1,1 returns 1 path
    if(x==1 && y==1) return 1;
    
    // Memoizing: Load pre existing path to avoid extra recursive steps
    if(_memo.count({x,y}) > 0) return _memo.at({x,y});
    // Add new value for the memoizing map
    _memo.insert({{x,y},calculate_all_paths(x-1,y) + calculate_all_paths(x,y-1)});
    // Return the sum of possible paths
    return calculate_all_paths(x-1,y) + calculate_all_paths(x,y-1);
}

void GridTraveler::show_all(unsigned int x, unsigned int y){
    // Calculate and print the amound of different paths
    cout << "Grid (" << x << "," << y << ") contains: " << calculate_all_paths(x,y) << " different paths" << endl;
}
