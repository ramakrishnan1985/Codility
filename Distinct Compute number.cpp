
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    int minusmax = 0;
    int plusmax = 0;
    
    for(int i = 0; i < A.size(); i++){
        if(A[i] < 0){
            if(minusmax < abs(A[i]))
                minusmax = abs(A[i]);
            
        } else if(A[i] > 0){
            if(plusmax < A[i])
                plusmax = A[i];
        }
        else if(A[i] == 0){
            minusmax++;
        }
    }
    //cout<<minusmax;
    int B[minusmax+1] = {0};
    int C[plusmax] = {0};
    for(int i = 0; i < A.size(); i++){
        if(A[i] <= 0){
            int min = abs(A[i]);
            B[min] = 1;
            
        } else{
            C[A[i] - 1] = 1;
        }
    }
    int X = 0;
    for(int i = 0; i < minusmax + 1; i++){
        //cout<<B[i];
        if(B[i] == 1)
            X++;
    }
    for(int i = 0; i < plusmax; i++){
        if(C[i] == 1)
            X++;
    }
    return X;
    
}

Task 2


// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <bits/stdc++.h> 
using namespace std; 
int solution(vector<int> &A) {
    if(A.size() <3)
        return 0;
    // write your code in C++14 (g++ 6.2.0)
    int arr[A.size()] = {0};
    for(int i = 0; i < A.size(); i++){
        arr[i] = A[i];
        //cout<<arr[i]<<" ";
    }
    //cout<<endl;
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    // Print the array 
    
  
    // Sort the array 
    sort(arr, arr + n); 
  
    
    int max1 = arr[n-1] * arr[n-2] * arr[n-3];
    int max2 = arr[0] * arr[1] * arr[n-1];
    if(max1 > max2)
        return max1;
    else
        return max2;
}
