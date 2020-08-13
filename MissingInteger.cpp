
int solution(vector<int> &A) {
    
    if(A.size() == 0)
        return 1;
    if(A.size() == 1 && A[0] == 1)
        return 2;
    
    int B[A.size()];
    for(int i = 0; i < A.size(); i++){
        B[i] = 0;
    }
    for(int i = 0; i < A.size(); i++){
        if(A[i] < 0 || A[i] > A.size())
            continue;
        int j = abs(A[i]);
        B[j-1] = 1;
        
    }
    for(int i = 0; i < A.size(); i++){
        
        //cout<<A[i]<<" ";
        if(B[i] == 0)
            return i+1;
    }
    return A.size() + 1;
    
}

#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int solution(vector<int> &A) {
    int A_Size = A.size();
    int a[A_Size];
    for(int i = 0; i < A_Size; i++)
        a[i] = 0;
    for(int i = 0; i < A_Size; i++){
        if(A.at(i) > 0 && A.at(i) <= A_Size){
            a[A.at(i) - 1] = A.at(i);
        }
    }
    bool isExist = false;
    for(int i = 0; i < A_Size; i++){
        if(a[i] == 0){
            isExist = true;
            return i+1;
        }
    }
    if(!isExist)
        return A_Size+1;
    
}