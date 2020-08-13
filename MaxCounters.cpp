
vector<int> solution(int N, vector<int> &A) {
    vector<int> B;
    if(N == 0)
        return B;
    if(A.size() == 0)
        return B;
    
    int a[N];
    
    for(int i = 0; i < N; i++)
        a[i] = 0;
    
	int min = 0;
    int max = 0;
    
    for(int i = 0; i < A.size(); i++){
        //<<"\nT"<<A[i];
        if(A[i] == N + 1){
            /*for(int j = 0; j < N; j++){
                a[j] = max;
            }*/
			min = max;
        }
        else {
			if(a[A[i] - 1] < min)
				a[A[i] - 1] = min;
            a[A[i] - 1] = a[A[i] - 1] + 1;
            
            if(max < a[A[i] - 1])
                max = a[A[i] - 1];   
        }
    }
    
    for(int i = 0; i < N; i++){
        if(a[i] < min)
            a[i] = min;
    }
    
    for(int i = 0; i < N; i++)
        B.push_back(a[i]);
    return B;
    // write your code in C++14 (g++ 6.2.0)
}
