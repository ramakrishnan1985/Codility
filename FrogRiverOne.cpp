

int solution(int X, vector<int> &A) {
    if(A.size() == 0)
        return -1;
    if(X == 0)
        return -1;
    // write your code in C++14 (g++ 6.2.0)
    int B[X];
    for(int i = 0; i < X; i++){
        B[i] = -1;
    }
    for(int i = 0; i < A.size(); i++){
        if(B[A[i]-1] == -1)
            B[A[i]-1] = i;
    }
    int max = -2;
    for(int i = 0; i < X; i++){
        //cout<<B[i]<<" ";
        if(B[i] == -1)
            return -1;
        if(max < B[i] )
            max = B[i];
    }
    return max;
}


int solution(int X, vector<int> &A) {
    int size = A.size();
    int a[size];
    for(int i = 0; i < X; i++){
        a[i] = -1;
    }
    for(int i = 0; i < size; i++){
        if(A.at(i) <= size && a[A.at(i) - 1] == -1)
            a[A.at(i) - 1] = i;
    }
    
    //cout<<endl;
    int max = 0;
    for(int i = 0; i < X; i++){
        //cout<<a[i]<<" "<<max<<" :";
        if(max < a[i])
            max = a[i];
        //cout<<max<<" "<<endl;
    }
    for(int i = 0; i < X; i++){
        if(a[i] == -1)
            return -1;
    }
    return max;
}
