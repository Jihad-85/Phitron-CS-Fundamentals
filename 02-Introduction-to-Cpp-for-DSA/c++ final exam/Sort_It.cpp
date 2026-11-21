 #include<bits\stdc++.h>
 using namespace std;
 
class Student
{
    public:
    string name;
    int cls;
   
    char sec;
    int id;
    int math_mark;
    int eng_mark;
    int t_mark;
    
    
};

bool cmp(Student a, Student b)
{
    
        if (a.t_mark > b.t_mark) {
            return true;
        } else if(a.t_mark < b.t_mark){
            return false;
        }

        else {
         if (a.id < b.id){
          return true;
         } 
         else {
            return false;
         }
      
       }
}

int main()
{

    int n;
    cin>>n;

    Student arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i].name>>arr[i].cls>>arr[i].sec>>arr[i].id>>arr[i].math_mark>>arr[i].eng_mark;
        arr[i].t_mark = arr[i].math_mark + arr[i].eng_mark;

    }


    sort(arr, arr+n, cmp);
     
    for(int i=0; i<n; i++) {
        cout<<arr[i].name<<" "<<arr[i].cls<<" "<<arr[i].sec<<" "<<arr[i].id<<" "<<arr[i].math_mark<<" "<<arr[i].eng_mark<<" "<<endl;
    }

    

    
    
    return 0;
}