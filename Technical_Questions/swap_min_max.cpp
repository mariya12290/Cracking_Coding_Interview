#include <iostream>

void SwapMinMax(int *arr, int size){
    int minIndex{};
 
    for(int i{0};i<size;++i){
        if(arr[i]<arr[minIndex]){
            minIndex =i;
        }
    }
    int maxIndex{};
     for(int i{0};i<size;++i){
        if(arr[i]>arr[maxIndex]){
            maxIndex =i;
        }
    }
    int temp = arr[minIndex];
    arr[minIndex]= arr[maxIndex];
    arr[maxIndex]=temp;

}
void print(int *arr, int size){

    for(int i{0};i<size;++i){
       std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}
int main(){


int arr[]{1,2,3,4,5,6,7,8};
print(arr,8);
SwapMinMax(arr,8);
print(arr,8);
}