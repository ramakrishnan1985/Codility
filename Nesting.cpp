
#include<stack>
#include<string.h>
using namespace std;
int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    if(strcmp(S.c_str(),"") == 0)
        return 1;
    stack<char> st;
    int len = strlen(S.c_str());
    if(len == 1)
        return 0;
    for(int i = 0; i < len; i++){
        if(S[i] == '('){
            st.push('(');
        }
        else if(S[i] == ')'){
            if(st.empty()){
                return 0;
            }else if(st.top() == '('){
                st.pop();
            } else{
                return 0;
            }
        }
    }
    if(st.empty())
        return 1;
    else
        return 0;
}
