#include <iostream>
using namespace std;
int arr[] = {10,21,3,41,50};
int main(){
for (int i =0; i<5; i++){
  cin >> arr[i];
  if (arr[i]%2 == 0){
    cout << arr[i] << "is even"<<'\n';
  }
}
}