
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size() == 0)
        return 1;
    if(A.size() == 1 && A[0] == 1)
        return 1;
    if(A.size() == 1 && A[0] != 1)
        return 0;
    int B[A.size()] = {0};
    for(int i = 0; i < A.size(); i++){
        if(A[i] > 0 && A[i] <= A.size())
            B[A[i] - 1] = 1;
    }
    for(int i = 0; i < A.size(); i++){
        if(B[i] == 0)
            return 0;
    }
    return 1;
    
}

int solution(vector<int> &A) {
    int size = A.size();
    int a[size];
    for(int i = 0; i < size; i++){
        a[i] = 0;
    }
    for(int i = 0; i < size; i++){
        if(A.at(i) <= size)
            a[A.at(i) - 1] = A.at(i);
    }
    
    for(int i = 0; i < size; i++){
        
        if(a[i] != i + 1)
            return 0;
    }
    return 1;
}
