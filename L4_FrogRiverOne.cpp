// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int X, vector<int> &A) {
    
    int result = -1;
    int sum = 0;
    vector<int> covered(X, 0);
    
    for (int i = 0; i < A.size(); i++) {
        if (covered[A[i]-1] == 0) {
            covered[A[i]-1] = 1;
            sum++;
            
            if (sum == X) {
                result = i;
                i = A.size();
            }
        }
    }

    return result;
}