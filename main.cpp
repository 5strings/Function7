//
//  main.cpp
//  Function3 C++
//
//  Created by Eun Jae Lee on 30/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//

#include <iostream>
using namespace std;

int addtion();

int main(int argc, const char * argv[]) {

    int c;
    c = addtion();
    cout<<"Answer is "<<c<<"\n";
}

int addtion(){

    int a,b;
    cout<<"Enter two numbers to additon: \n";
    cin>>a>>b;
    return (a+b);
}
