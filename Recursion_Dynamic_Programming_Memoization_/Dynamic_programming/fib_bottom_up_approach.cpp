#include <iostream>


int fib(int n){

    int* memo =new int[n];
        memo[0]=0;
        memo[1]=1;
    for(int i=2;i<n;++i){
        memo[i]= memo[i-1]+memo[i-2];
    }
    return memo[n-1]+memo[n-2];
    
}

int main(){

std::cout<<fib(2)<<std::endl;



    return 0;
}