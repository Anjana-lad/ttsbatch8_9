//encapsulation :binding data member and function into a single unit.
#include<iostream>
using namespace std;
class student{
    private:
    int rollno;
    string name;
    public:
    int set_rollno(int rno){
        rollno=rno;
    }
    int get_r_no(){
        cout<<"Enter rollno:";
        cin>>rollno;
    }
    int set_name(string nm){
        name=nm;
    }
    int get_nm(){
        cin.ignore();
        cout<<"Enter name:";
        getline(cin, name);
    }
    int show(){
        cout<<"Rollno="<<rollno<<"\n Name="<<name<<endl;
    }
};

int main(){
    student stud,s;
    s.set_name("Kevin");
    s.set_rollno(102);
    s.show();
     stud.get_r_no();
    stud.get_nm();
    stud.show();
}