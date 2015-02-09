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
    
    cout << "Please enter ceiling: ";
    cin >> n;
    cout << "\n\n";
    
    for (int i = 0; i < n; i++) {
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    }//for
    
    cout << "Sum = " << sum << "\n";
    
    return 0;
}

