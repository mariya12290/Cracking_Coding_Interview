#include <iostream>

int fibonacci(int i){
    if(i==0){
        return 0;
    }
    if(i==1){
        return 1;
    }
    return fibonacci(i-1)+fibonacci(i-2);
}

int main(){

std::cout<<fibonacci(10)<<std::endl;

    return 0;
}