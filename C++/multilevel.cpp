//multilevel inheritance:= In this inheritance we have one derived class which is the base class for another derived class.
#include<iostream>
using namespace std;

class Employee{
    protected:
    int eid;
    string name;
    public:
    int get_data(){
        cout<<"Enter id:";
        cin>>eid;
        cin.ignore();
        cout<<"Enter name:";
        getline(cin ,name);
    }
    int show(){
        cout<<"Eid="<<eid<<endl<<"Name="<<name<<endl;
    }
};

class Task:public Employee{
    protected:
    int task1,task2,total;
    public:
    int do_task(){
        get_data();
        cout<<"Enter task1&task2:";
        cin>>task1>>task2;
    }
    int show_task(){
        show();
        total=task1+task2;
        cout<<"Total task="<<total<<endl;
    }
};
class Appraisal:public Task{
   
    public:
    int get_details(){
        do_task();
        show_task();
    }
    int grades(){
        if(total>=80 && total<100){
            cout<<"Grade=A"<<endl;
        }
        else if(total>=50 && total<80){
            cout<<"grade=B"<<endl;
        }
        else if(total>=0 && total <50){
            cout<<"Grade=C"<<endl;
        }
    }
};

int main(){
    Appraisal app;
    app.get_details();
    app.grades();
}