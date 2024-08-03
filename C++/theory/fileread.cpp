#include<iostream>
#include<fstream>
using namespace std;
int main(){
string str;  
    ifstream fin;
    fin.open("G:\\ttsbatch8_9\\C++\\theory\\class.txt");
   while(!fin.eof()){
    getline(fin,str);
     cout<<str<<endl;
   }

      fin.close();
}