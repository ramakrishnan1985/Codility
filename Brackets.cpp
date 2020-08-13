

#include <string.h>
#include <iostream>
#include <vector>
using namespace std;

class stack_
{
    vector<char> stackvec;
    public:
    stack_(){}
    void push(char);
    bool pop(char);
    int stacklength();
};

void stack_::push(char ch){
    stackvec.push_back(ch);
}
bool stack_::pop(char ch){
    if(stackvec.size() > 0){
        if(stackvec[stackvec.size()-1] == ch){
            stackvec.pop_back();
            return true;
        }else{
            return false;
        }
    }
    return false; 
}
int stack_::stacklength(){
    return stackvec.size();
}

int solution(string &S) {
    int len = strlen(S.c_str());
    if(len == 0)
        return 1;
    if(strcmp(S.c_str(), "") == 0)
        return 1;
    //cout<<S;
    stack_ obj;
    for(int i = 0; i < len; i++){
        char ch = S[i];
        bool result = true;
        if(ch == '(')
            obj.push(ch);
        else if(ch == '{')
            obj.push(ch);
        else if(ch == '[')
            obj.push(ch);
        else if(ch == ')'){
            result = obj.pop('(');
        }
        else if(ch == '}'){
            result = obj.pop('{');
        }
        else if(ch == ']'){
            result = obj.pop('[');
        }
        if(!result)
            return 0;
    }
    //cout<<obj.stacklength();
    if(obj.stacklength() == 0)
        return 1;
    return 0;
}

----

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
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
            st.push(S[i]);
        } else if(S[i] == '['){
            st.push(S[i]);
        } else if(S[i] == '{'){
            st.push(S[i]);
        } else if(S[i] == ')'){
            if(st.top() == '(')
                st.pop();
            else
                return 0;
        } else if(S[i] == ']'){
            if(st.top() == '[')
                st.pop();
            else
                return 0;
        } else if(S[i] == '}'){
            if(st.top() == '{')
                st.pop();
            else
                return 0;
        }
    }
    if(st.empty())
        return 1;
    else
        return 0;
}
