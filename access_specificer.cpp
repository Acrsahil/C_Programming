#include<iostream>
#include<string.h>
using namespace std;
class sahil{
    public: 
    string name;
    int roll_no,slass;
    
    void student(string username,int roll,int grade ){
        name = username;
        roll_no = roll;
        slass = grade;
        
    }
    void print(){
        cout<<endl<<"Your name: "<<name<<endl<<"Your roll_no:"<<roll_no<<endl<<"Your class: "<<slass<<endl;
    }
};
int main(){
    sahil obj;
    string name;
    int roll_no;
    int slass;
    
    cout<<"Enter the username>>";
    cin>>name;
    cout<<"Enter the roll_no>>";
    cin>>roll_no;
    cout<<"Enter the class>>";
    cin>>slass;


    obj.student(name,roll_no,slass);
    obj.print();

return 0;
}