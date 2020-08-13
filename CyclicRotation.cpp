vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    //int incr = A.size() % K;
    if(K == 0 || K == A.size())
        return A;
	if(A.size() == 1)
		return A;
	if(A.size() == 0
		return A;
	if(K > A.size())
		K = K % A.size();
    vector<int> B;
    for(int i = A.size() - K; i < A.size(); i++){
        B.push_back(A.at(i));
    }
    for(int i = 0; i < A.size() - K; i++){
        B.push_back(A.at(i));
    }
    return B;
}


vector<int> solution(vector<int> &A, int K) {

	if(K == 0)
		return A;
	if(K == A.size())
		return A;
	if(A.size() == 0)
		return A;
	if(A.size() == 1)
		return A;
	if(K > A.size())
		K = K % A.size();
    int a[K];
    int size = A.size();
    for(int i = size - K, j = 0; i < size; i++, j++){
        a[j] = A.at(i);
    }
    vector<int> B;
    for(int i = 0; i < K; i++)
        B.push_back(a[i]);
    for(int i = 0; i < size - K; i++)
        B.push_back(A[i]);
        
    return B;
}
