
#include<bits/stdc++.h>
using namespace std;
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size() == 0)
        return -1;
    if(A.size() == 1)
        return 0;
    int arr[A.size()] = {0};
    for(int i = 0; i < A.size(); i++){
        arr[i] = A[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr+n);
    
    int a = arr[0];
    int count = 1;
    int max = 0;
    int value = 0;
    for(int i = 1; i < A.size(); i++){
        if(arr[i] == a){
            count++;
        } else{
            if(max < count){
                max = count; value = a;
            }
            a = arr[i];
            count = 1;
        }
        if(i == A.size()-1){
            if(max < count){
                max = count; value = arr[i];
            }
        }
    } 
    //cout<<max;
    if(max <= (A.size()/2)){
        return -1;
    } else{
        for(int i = 0; i < A.size(); i++){
            if(A[i] == value)
                return i;
        }
    }
    
}