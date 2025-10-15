#include <iostream>
using namespace std;
class Student{
  public:
  string Name;
  int cls;  
  
    void setStudent()
    {
    cout << "The Student name is " << Name<<endl;}


};
int main() {
    Student s[4];
    s[0].Name = "Ananya";
    s[1].Name = "Rashmi";
    s[2].Name ="Anushka";

    for (int i=0; i<3; i++){
      s[i].setStudent();
    }
    return 0;
}

//By taking inputs
#include <iostream>
using namespace std;
class Student{
  public:
  string Name;
  int cls;  
  
    void setStudent()
    {
    cout << "The Student name is " << Name<<endl;}


};
int main() {
    Student s[4];
    for (int i=0;i<4;i++){
        cin>>s[i].Name;
    }

    for (int i=0; i<4; i++){
      s[i].setStudent();
    }
    return 0;
}