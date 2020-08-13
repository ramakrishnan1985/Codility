int solution(int X, int Y, int D) {
    if(X >= Y)
        return 0;
    if(D == 0)
        return 0;
    
    int num1 = Y - X;
    int num2 = num1 / D;
    int num3 = num1 % D;
    if(num3 > 0)
        num2++;
    
    return num2;
}


Task 2 
PermMissingElem  -  Find the missing element in a given permutation.

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size() == 0)
        return 1;
    int B[A.size()];
    for(int i = 0; i < A.size(); i++){
        B[i] = 0;
    }
    for(int i = 0; i < A.size(); i++){
        if(A[i] <= A.size())
        B[A[i] - 1] = 1;
    }
    for(int i = 0; i < A.size(); i++){
        if(B[i] == 0)
            return i+1;
    }
    return A.size() + 1;
}

Task 3
TapeEquilibrium  -  Minimize the value |(A[0] + ... + A[P-1]) - (A[P] + ... + A[N-1])|.

int solution(vector<int> &A) {
    
    if(A.size() == 0 || A.size() == 1)
        return 0;
    if(A.size() == 2){
        unsigned int C = abs(A[0] - A[1]);
        return C;
    }
        
    int B[A.size()];
    int C[A.size()];
    int num1 = 0;
    for(int i = 0; i < A.size(); i++){
        num1 = num1 + A[i];
        B[i] = num1;
        //cout<<B[i]<<" ";
    }
    //cout<<endl;
    num1 = 0;
    for(int i = A.size()-1, j = 0; i >= 0; j++, i--){
        num1 = num1 + A[i];
        C[j] = num1;
        //cout<<C[j]<<" ";
    }
    unsigned int diff = 0;
    //cout<<endl;
    for(int i = A.size()-2, j = 0; i >= 0; j++, i--){
        unsigned int x = abs(C[i] - B[j]);
        if(j == 0)
            diff = x;
        else if(diff > x)
            diff = x;
        //cout<<diff<<" ";
    }
    return diff;
}

int solution(vector<int> &A) {
    if(A.size() == 0)
        return 0;
    if(A.size() == 1)
        return 1;
    if(A.size() == 2)
        return abs(A.at(0) - A.at(1));
        
        
    int sum = 0;
	int asize = A.size();
	int a[asize];
    for(int i = 0; i < (int)A.size(); i++){
        sum = sum + (A.at(i));
		a[i] = sum;
		//cout<<a[i]<<" ";
    }
    //cout<<endl;
	int b[asize];
	int revsum = 0;
    for(int i = asize-1, j = 0; i >= 0 && j < asize; i--, j++){
        revsum = revsum + (A.at(i));
		b[j] = revsum;
		//cout<<b[j]<<" ";
    }
    //cout<<endl;
	int diff = abs(sum);
	
	for(int i = asize-2, j = 0; i >= 0 && j < asize -1; i--, j++){
	    //cout<<"a : "<<a[j]<<"  b : "<<b[i]<<"   mid : ";
		int mid = abs(a[j] - b[i]);
		//cout<<mid<<endl;
		if(j == 0)
			diff = mid;
		if(diff > mid )
			diff = mid;
	}
	
    //cout<<"\ndiff : "<<diff;
    return diff;
}