// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int vector<int> solution(vector<int> &A, int K); {
    
    for (int i = 0; i < K; i++) {
        
		int prev = A[0];
		int current = 0;
			
        for (int j = 1; j < A.size(); j++) {
            
			current = A[j];
			A[j] = prev;
			prev = current;            
        }
        
        A[0] = prev;
    }
    
    return A;    
}

