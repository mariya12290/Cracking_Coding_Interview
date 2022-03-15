#include <iostream>

int CountWays(int n){
if(n<0){
    return 0;
}else if(n==0){
    return 1;
}
return CountWays(n-1)+CountWays(n-2)+CountWays(n-3);
}

int main(){

std::cout<<CountWays(3)<<std::endl;


    return 0;
}