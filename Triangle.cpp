
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size() < 3)
        return 0;
    int B[A.size()] = {0};
    for(int i = 0; i < A.size(); i++){
        B[i] = A[i];
        //cout<<B[i]<<" "<<endl;
    }
    int n = sizeof(B) / sizeof(B[0]);
    sort(B, B+n);
    
    for(int i = A.size()-1; i >= 2; i--){
        //cout<<"\n"<<i;
        long a = B[i]; //cout<<" "<<a;
        long b = B[i-1];
        long c = B[i-2];
        //cout<<"  "<<a<<" "<<b<<" "<<c;
        if(a + b > c){
            if(a + c > b){
                if(c + b > a){
                    return 1;     
                }    
            }
        }
    }
    return 0;
}