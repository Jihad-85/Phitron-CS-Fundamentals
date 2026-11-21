#include<bits\stdc++.h>
using namespace std;

class Student{ 
 public:
   int ids;
   string  name;
   char	section;
   int	marks;
  
};

int main(){

    int n;
    cin >> n;

    for(int i = 1;i <= n;i++){

    Student sakib;
    Student rakib;
    Student akib;
   cin >> sakib.ids >> sakib.name >> sakib.section >> sakib.marks; 
   cin >> rakib.ids >> rakib.name >> rakib.section >> rakib.marks; 
   cin >> akib.ids >> akib.name >> akib.section >> akib.marks; 
     
     
    if(sakib.marks >= rakib.marks && sakib.marks >= akib.marks){
          
       cout << sakib.ids << " " << sakib.name << " " << sakib.section << " " << sakib.marks <<  endl;
    }
    else if(rakib.marks >=  sakib.marks && rakib.marks >= akib.marks){
        
       cout << rakib.ids << " " << rakib.name << " " << rakib.section << " " << rakib.marks <<  endl;
    }
    else {
        
       cout << akib.ids << " " << akib.name << " " << akib.section << " " << akib.marks <<  endl;
    }
   
 }

return 0;
}