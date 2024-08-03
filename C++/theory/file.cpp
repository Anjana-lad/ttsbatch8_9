// file handling to create a new txt file and write data to that file.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int rno;
    float marks;
    string name;
    ofstream fout;
    cout<<"Enter rollno:";
    cin>>rno;
    cout<<"Enter name:";
    cin.ignore();
    getline(cin, name);
    cout<<"Enter marks:";
    cin>>marks;
    fout.close();
    ifstream fin;
    fin.open("G:\\ttsbatch8_9\\C++\\details.txt");
    fin>>rno>>name>>marks;
    fin.close();
    cout<<"Rollno="<<rno<<endl;
    cout<<"Name="<<name<<endl<<"Marks="<<marks<<endl;
 }