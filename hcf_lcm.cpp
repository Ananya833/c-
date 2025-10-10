#include <iostream>
using namespace std;
int num1 = 2;
int hcf, lcm, num2 = 3;

int a= num1;
int b=num2;

int main(){
  while(b!=0){
  int temp = b;
  b = a%b;
  a = temp;
}
hcf = a;
lcm = (num1*num2)/hcf;
cout << "HCF: " << hcf;
cout << "LCM: " << lcm;
}
