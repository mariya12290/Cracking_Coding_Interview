#include <iostream>


int fibonacci(int n){
    if(n==0){
        return 0;
    }
    int a=0;
    int b=1;
    for(int i=2;i<n;++i){
        int c= a+b;
        a=b;
        b=c;
    }
    return a+b;
}

int main(){


std::cout<<fibonacci(2)<<std::endl;
    return 0;
}