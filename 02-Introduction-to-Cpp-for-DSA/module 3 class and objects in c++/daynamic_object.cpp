#include<bits\stdc++.h>
using namespace std;

class Student{
 public:
 int roll;
 int cls;
 double gpa;

   Student(int roll,int cls,double gpa){

    this->roll = roll;
    this->cls = cls;
    this->gpa = gpa;
   
   }


};


int main(){
  
    Student rahim(3,5,4.5);
    Student* hamim = new Student(10,9,3.6);

    cout << rahim.roll << " " << rahim.cls <<" " << rahim.gpa << endl;
    cout << hamim->roll << " " << hamim->cls <<" " << hamim->gpa << endl;

return 0;
}