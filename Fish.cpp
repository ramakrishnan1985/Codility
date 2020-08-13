
#include <stack>
int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size() == 0 || B.size() == 0)
        return 0;
    
    stack<int> AS;
    stack<int> BS;
    for(int i = 0; i < A.size(); i++){
        if(BS.empty()){
            BS.push(B[i]);
            AS.push(A[i]);
        }
        else if(B[i] == 0){
            {
                if(AS.top() > A[i]){
                    
                } else if(AS.top() == A[i]){
                    BS.push(B[i]);
                    AS.push(A[i]);
                } else{
                    while(AS.top() < A[i]){
                        BS.pop();
                        AS.pop();
                    }
                    BS.push(B[i]);
                    AS.push(A[i]);
                }
            }
            
        } else if(B[i] == 1){
            BS.push(B[i]);
            AS.push(A[i]);
        }
    }
    return BS.size();
}
