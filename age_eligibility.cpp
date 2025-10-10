#include <iostream>
using namespace std;
int main() {
    int age;
    cin >> age;
    (age > 18)? cout << "eligible to vote" : cout << "not eligible to vote";
    return 0;
}