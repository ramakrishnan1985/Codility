
#include <math.h>
int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    int sqrtN = sqrt(N);
    int perimeter = (1 * 2) + (N * 2); // perimeter = (A*2)+(B*2)
    
    for(int i = sqrtN; i > 0; i--){ // from the one closest to sqrt(N)
        if( N % i ==0){             // key point: "N % i ==0"
            int A = i;
            int B = N/i;
            perimeter = (A * 2) + (B * 2);
            break;                  // be careful: break from the for-loop
        }
    }
    
    return perimeter;
}