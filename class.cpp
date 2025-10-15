#include <iostream>
using namespace std;
class Student{
  public:
  string Name;
  int Reg_no;
  string email;
  int year;  
  
  void getDetail(){
    cout << "The Student name is " << Name<<" The year is "<<year<<endl;
  }


};
int main() {
    Student s1;
    s1.Name = "Ananya";
    s1.year = 2;
    s1.getDetail();
    return 0;
}