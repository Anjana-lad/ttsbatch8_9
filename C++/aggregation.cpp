//Aggregation :- It is process in which one class defines another class as any entity reference. It is another way to reuse the class.It  is a form of association that represent HAS-A Relationship.

#include<iostream>
using namespace std;
class student{
public:
    int rollno;
    string name;
    public:
    student(string nm, int rno){
        name=nm;
        rollno=rno;
    }
    int display(){
        cout<<"Name="<<name<<endl;
        cout<<"Rollno="<<rollno<<endl;
    }
};
class Marks{
private:
    student *stud; // has-a relationship
    int m1,m2;
    public:
    Marks(int m1,int m2 ,student *stud){
        this->m1=m1;
        this->m2=m2;
        this->stud=stud;
    }
    int show(){
        cout<<"\n Student details:"<<endl;
        cout<<"Rollno="<<stud->rollno<<endl;
        cout<<"Name="<<stud->name<<endl;
        cout<<"Marks1="<<m1<<endl;
        cout<<"Marks2="<<m2<<endl;
    }
};
int main(){
    student s("Paras",74);
    Marks m(96,85,&s);
    m.show();
}