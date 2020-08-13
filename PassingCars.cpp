
int solution(vector<int> &A) {
    
    if(A.size() == 0 || A.size() == 1)
        return 0;
    int zerocount = 0;
    int no_pair = 0;
    for(int i = 0; i < A.size(); i++){
        if(no_pair > 1000000000){
            no_pair = -1;
            break;
        }
        if(A[i] == 0){
            zerocount++;
        }
        else if(A[i] == 1){
            no_pair += zerocount;
        }
    }
    return no_pair;
}