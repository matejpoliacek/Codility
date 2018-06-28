// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    
    int sum = 0;
    
    for (int i = 0; i < A.size(); i++) {
        sum += A[i];
    }
    
    int forward_sum = 0;
    int remaining_sum = sum;
    
    vector<int> diff(A.size()-1);
    
    for (int i = 0; i < diff.size(); i++) {
        forward_sum += A[i];
        remaining_sum -= A[i];
        diff[i] = abs(remaining_sum - forward_sum);
    }
    
    int result = sum;
    
    for (int i = 0; i < diff.size(); i++) {
        if (diff[i] < result) {
            result = diff[i];
        }
    }
    
    return result;
}