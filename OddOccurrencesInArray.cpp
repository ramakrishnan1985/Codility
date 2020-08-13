
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size() == 0 )
        return 0;
    if(A.size() == 1)
        return A[0];
    int max = 0;
    for(int i = 0; i < A.size(); i++){
        //cout<<"\nA : "<<A[i];
        if(max < A[i])
            max = A[i];
    }
    //cout<<"\nMax 1 : "<<max;
    int B[max];
    for(int i = 0; i < max; i++)
        B[i] = 0;
    //cout<<"\nMax 2 : "<<max;
    for(int i = 0; i < A.size(); i++){
        if(B[A[i]-1] > 0)
            B[A[i]-1] = 0;
        else
            B[A[i]-1] = A[i];
    }
    //cout<<"\nMax 3 : "<<max;
    for(int i = 0; i < max; i++){
        if(B[i] > 0){
            //cout<<"\nMax 4 : "<<i;
            return B[i];
        }    
    }
    return 0;
}

int solution(vector<int> &A) {
    if(A.size() == 0)
        return 0;
    if(A.size() == 1)
        return A[0];
    int x = A[0];
    for(int i = 1; i < A.size(); i++){
        x = x ^ A[i];
    }
    return x;
}

