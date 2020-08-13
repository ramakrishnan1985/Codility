
#include <iostream>
#include <string.h>
using namespace std;

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    
    int len = strlen(S.c_str());
    vector<int> Result;
    int a[len] = {0};
    for(int i = 0; i < len; i++){
        if(S[i] == 'A') a[i] = 1;
        if(S[i] == 'C') a[i] = 2;
        if(S[i] == 'G') a[i] = 3;
        if(S[i] == 'T') a[i] = 4;
    }
    
    int max = 0;
    for(int i = 0; i < (int)P.size(); i++){
        
        max = 5;
        for(int j = P[i]; j <= Q[i]; j++){
            if(max > a[j]) max = a[j];
        }
        Result.push_back(max);
    }
    return Result;
}

#include <iostream>
#include <string.h>
using namespace std;
vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    // write your code in C++14 (g++ 6.2.0)
    int len = strlen(S.c_str());
    int A[len+1] = {0};
    int C[len+1] = {0};
    int G[len+1] = {0};
    int T[len+1] = {0};
    
    for(int i = 0; i < len; i++){
        if(S[i] == 'A'){
            A[i+1] = A[i] + 1;
            C[i+1] = C[i];
            G[i+1] = G[i];
            T[i+1] = T[i];
        }
        else if(S[i] == 'C'){
            A[i+1] = A[i];
            C[i+1] = C[i] + 1;
            G[i+1] = G[i];
            T[i+1] = T[i];    
        }
        else if(S[i] == 'G'){
            A[i+1] = A[i];
            C[i+1] = C[i];
            G[i+1] = G[i] + 1;
            T[i+1] = T[i];   
        }
        else if(S[i] == 'T'){
            A[i+1] = A[i];
            C[i+1] = C[i];
            G[i+1] = G[i];
            T[i+1] = T[i] + 1;   
        }
    }
    vector<int> Result;
    for(int i = 0; i < P.size(); i++){
        int Adiff = A[Q[i] + 1] - A[P[i]];
		int Cdiff = C[Q[i] + 1] - C[P[i]];
		int Gdiff = G[Q[i] + 1] - G[P[i]];
		
        if(Adiff > 0){
            Result.push_back(1);
            
        }
        
        else if(Cdiff > 0){
            Result.push_back(2);
            
        }
        
        else if(Gdiff > 0){
            Result.push_back(3);
            
        }
        else{
            Result.push_back(4);
            continue;
        }
    }
    return Result;
}
