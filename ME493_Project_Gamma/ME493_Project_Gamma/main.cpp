//
//  main.cpp
//  ME493_Project_Gamma
//
//  Created by Cruz Kerver on 3/28/17.
//  Copyright © 2017 Autonomy. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <assert.h>
#include <string.h>
#include <random>
#include <ctime>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <limits>

#define CKRAND ((double)rand()/RAND_MAX)
#define PI 3.1415296

using namespace std;

class city{
public:
    double x;
    double y;
    void init();
};

class policy{
public:
    int num_city;
    void init();
    void eval();
    double fitness();
    void mutate();
};

void city::init(){
    x = rand()% 100;
    y = rand()% 100;
};

void policy::init(){
    num_city = 10;
    vector<city> city_list;
    for(int i=0; i<num_city; i++){
        city c;
        c.init();
        city_list.push_back(c);
    };
};

int main(){
    
    srand(time(NULL));
    rand(); //Throwing out first value because it sucks
    
    //Defining how many cities are being tested
    int num_cities;
    cout << "How many cities are being tested?  ";
    cin >> num_cities;
    
    return 0;
};
