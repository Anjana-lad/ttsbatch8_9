//single inheritance. only one base class and its one child class.
//syntax: class class_name : access_modifier base_class_name
#include<iostream>
using namespace std;
class person{  //base/parent class
protected:
    int pid;
    string name;
    public:
    int get_det(){
        cout<<"Enter pid:";
        cin>>pid;
        cin.ignore();
        cout<<"Enter name:";
        getline(cin, name);
    }
    int show(){
          cout<<"Pid="<<pid<<"\n Name="<<name<<endl;
    }

};
class employee:public person{  //child/derived class
    public:
    int age;
    string gender;
    public:
    int get_emp(){
        get_det();
        cout<<"Enter age:";
        cin >>age;
        cin.ignore();
        cout<<"Enter gender:";
        getline(cin, gender);

    }
    int show_emp(){
        ``````````````````````` show();        
        cout<<"Age="<<age<<endl;
        cout<<"Gender="<<gender<<endl;
    }
};
int main(){
    employee emp;
    emp.get_emp();
    emp.show_emp();
}