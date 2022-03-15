#include <iostream>


int fib(int i, int *memo){
       if(i==0||i==1){
           return i;
       }
       if(memo[i]==0){
           memo[i]= fib(i-1, memo)+fib(i-2,memo);
       }
       return memo[i];
}

int main(){

int memo[6]{};
std::cout<<fib(5,memo)<<std::endl;


    return 0;
}