#include <iostream>
using namespace std;
class Student{
  private:
  string Name;
  int cls;
  public:
   
  
    void setStudent(string s, int c){
      Name = s;
      cls =c;}
      void getStudent(){
    cout << "The Student name is " << Name<<". The class is "<<cls<<endl;}


};
int main() {
    Student s1;
    Student s2;
    Student s3;
    s1.setStudent("Ananya", 11);
    s1.getStudent();
    s1.setStudent("Anushka", 12);
    s1.getStudent();
    s1.setStudent("Harshita", 13);
    s1.getStudent();

    return 0;
}