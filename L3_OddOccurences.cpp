// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    
    int result = 0;
    
    for (int i = 0; i < A.size(); i++) {
        result = result ^ A[i];
    }
    
    return result;
}