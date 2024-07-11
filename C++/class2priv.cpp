//class with private data member
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
    int set_name(string nm){
        name=nm;
    }
    int show(){
        cout<<"Rollno="<<rollno<<"\n Name="<<name<<endl;
    }
};

int main(){
    student stud;
    stud.set_rollno(25);
    stud.set_name("Abhi");
    stud.show();
}