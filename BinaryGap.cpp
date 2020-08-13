1. BinaryGap
Find longest sequence of zeros in binary representation of an integer.

// Example program
#include <iostream>
#include <vector>
#include<bitset>
using namespace std;

int solution(int N)
{ 
  int O[32];//The output array
  bitset<32> A = N;//A will hold the binary representation of N 
  for(int i=0,j=31;i<32;i++,j--)
  {
     //Assigning the bits one by one.
     O[i]=A[j];
  }
  vector<int> bitvec;
    for(int i = 0; i < 32; i++)
    {
        
        bitvec.push_back(O[i]);
    }
  for(int i = 0; i < 32; i++)
    cout<<bitvec.at(i);
    
    bool oneexist = false;
    bool secondexist = false;
    bool zeroexist = false;
    int count = 0;
    int max = 0;
    
    for(int i = 0; i < 32; i++){
            if(bitvec.at(i) == 1)
            {
                if(oneexist && zeroexist)
                    secondexist = true;
                oneexist = true;
                if(count > 0){
                    if(max < count)
                        max = count;
                    count = 0;
                }          
                
            }
            if(bitvec.at(i) == 0){
                if(oneexist){
                    zeroexist = true;
                    count++;
                }
            }
    }
    if(max == 0 && count > 0 && secondexist)
        max = count;
    cout<<"\nmax : "<<max;
  return max;

}

