
#include <stack>
int solution(vector<int> &H) {
    stack<int> st;
    int numBlock =0;
    
        // note: H[i] is the ith height of the wall
        for(int i=0; i< H.size(); i++){
        
            // step 1: "stack is not empty" AND "from high to low"
            // then, "pop" (it is the key point, be careful)
            while( st.empty() == false && st.top() > H[i] ){
                st.pop();
            }
            // step 2: if the stack is empty
            if( st.empty() ){
                numBlock++;     // add a block
                st.push(H[i]);  // push the height
            }
            // step 3: the height is the same: do nothing
            else if( st.top() == H[i] ){
            } 
            // step 4: from low to high 
            else if( st.top() < H[i] ){
                numBlock++;    // add a block
                st.push(H[i]); // push the height
            }
        }
        
        return numBlock;
}