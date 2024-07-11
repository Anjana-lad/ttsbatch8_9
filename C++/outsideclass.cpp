// function defining outside the class.
//syntax: return_type classname :: member_function_name()
#include<iostream>
using namespace std;
class employee{
    public: 
    int eid;  
    string name;
    public:
    int get_data();
    int show();
};
//class close
  int employee :: get_data(){  //defining member function outside the class.
        cout<<"Enter id:";
        cin>>eid;
        cout<<"Enter name:";
        //cin>>name;
        cin.ignore();
        getline(cin, name);
    }
    int employee :: show(){   //member function
        cout<<"Eid="<<eid<<"\n Name="<<name<<endl;
    }

int main(){
    employee emp,e2; //emp is my object
    emp.get_data();
    emp.show(); // object.member_function_name() => dot(.) is member access operator.
    e2.get_data();
    e2.show();
}