// you can use includes, for example:
// #include <algorithm>

#include <cmath>
#include <iostream>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // trim trailling 0s
    
    int rem = N;
    string N_bin = "";
    
    while (rem != 0) {
        if (rem % 2 == 0) {
            N_bin = "0" + N_bin;
        }
        else {
            N_bin = "1" + N_bin;
        }
        
        rem = rem / 2;
    }
    
    for (int i = (N_bin.length()-1); i >= 0; i--) {
        if (N_bin.at(i) == '0') {
            N_bin.erase(i);
        } 
        
        else {
            i = -1;
        }
        
    }
    
    int maxcount = 0;
    int count = 0;
    
    for (int i = 0; i < N_bin.length(); i++) {
        // if a zero, increment counter
        if (N_bin.at(i) == '0') {
            count++;
        }
        // if not a zero
        else {
            // and we have a new maximum, store it
            if (count > maxcount) {
                maxcount = count;
            }
            // if there is less remaining digits, stop now
            if ((N_bin.length() - i) < maxcount) {
                    i = N_bin.length();
                }
            
            // if we continue, reset counter
            count = 0;
        }
    }
    
    return maxcount;
}