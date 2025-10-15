#include <iostream>
int main() {
    int n=6;
    int arr[n]={1,2,3,4,5,6};
    for (int i=2;i<n;i++){
      arr[i]=arr[i+1];
    }
    n--;
    for (int i=0;i<n;i++){
    std::cout << arr[i]<<" ";
    }
    return 0;
}