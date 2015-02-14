/* 
 * File:   multiples_3_5.cpp
 * Author: Ryan
 *
 * Created on February 9, 2015, 2:41 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int sum = 0;
    int n = 0;
    int div3 = 0;
    int div5 = 0;
    int div15 = 0;
    
    cout << "Please enter ceiling: ";
    cin >> n;
    cout << "\n\n";
    
    n = n - 1;
    
    div3 = (n - (n % 3)) / 3;
    div5 = (n - (n % 5)) / 5;
    div15 = (n - (n % 15)) / 15;
    
    sum = 3 * (div3 * (div3 + 1))/2
        + 5 * (div5 * (div5 + 1))/2
        - 15 * (div15 * (div15 + 1))/2;
    
    cout << "Sum = " << sum << "\n";
    
    return 0;
}//main

