//local class 
#include<iostream>
using namespace std;
int main(){
    class student{
        private :
        int rollno;
        float marks;
        public:
        int set_data(int rno,float nm){
            rollno=rno;
            marks=nm;
        }
        int data(){
            cout<<"Rollno="<<rollno<<"\n Marks="<<marks<<endl;
        }

    };
    int rno;
    float nm;
    cout<<"Enter rollno:";
    cin>>rno;
    cout<<"Enter marks=";
    cin>>nm;
    student st;
    st.set_data(rno,nm);
    st.data();
}