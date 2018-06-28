// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    
    vector<int> counts(A.size(), 0);
    int result = 1;
    
    for (int i = 0; i < A.size(); i++) {
        if (A[i] > A.size()) {
            result = 0;
        } else {
            counts[A[i]-1] = counts[A[i]-1] + 1; 
        }
    }
    
    if (result == 1) {
        for (int i = 0; i < counts.size(); i++) {
            if (counts[i] != 1) {
                result = 0;
                i = A.size();
            }
        }
    }
    
    return result;
}