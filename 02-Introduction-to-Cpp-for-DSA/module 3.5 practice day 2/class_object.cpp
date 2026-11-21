#include<bits\stdc++.h>
using namespace std;

class Student{ 
 public:
  string  name;
  int	roll;
  char	section;
  int	math_marks;
  int   cls;

  Student(string n,int r,char s,int mt,int c){
   
    name = n;
    roll = r;
    section = s;
    math_marks = mt;
    cls = c;
   }
};

int main(){
  
    Student jihad("jihad",5,'C',85,9);
    Student tamima("tamima",10,'A',95,9);
    Student jeba("jeba",7,'B',80,9);
     
    if(jihad.math_marks > tamima.math_marks && jihad.math_marks > jeba.math_marks){
       
        cout << jihad.name << " " << jihad.math_marks << endl;
    }
    else if(jeba.math_marks > tamima.math_marks && jeba.math_marks > jihad.math_marks){

        cout << jeba.name << " " << jeba.math_marks << endl;

    }
    else{
         cout << tamima.name << " " << tamima.math_marks << endl;
    }
   cout << jihad.name << " " << jihad.roll <<" " << jihad.section <<" "<< jihad.math_marks <<" "<< jihad.cls << endl;
   cout << tamima.name << " " << tamima.roll <<" " << tamima.section <<" "<< tamima.math_marks <<" "<< tamima.cls << endl;
   cout << jeba.name << " " << jeba.roll <<" " << jeba.section <<" "<< jeba.math_marks <<" "<< jeba.cls << endl;

return 0;
}