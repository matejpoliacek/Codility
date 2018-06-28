// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    
    int result = ((A.size()+2) * (A.size()+1))/ 2;

    for (int i = 0; i < A.size(); i++) {
        result -= A[i];
    }
    
    return result;
    
}