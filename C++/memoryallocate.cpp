//In C++ dynamic memory allocation is used using new keyword and deallocate using delete keyword.
//syntax:for allocating:=  data_type* pointer_variable = new data_type{value};
//for deallocation:=       delete pointer_variable;

// #include<iostream>
// using namespace std;
// int main(){
//     int *ptr=NULL;
//     float *ptr2= new float {253.6};
//     ptr= new int;
//     *ptr=45;
   
//     cout<<"Value="<<*ptr<<endl;
//     cout<<"Ptr2="<<*ptr2<<endl;
   
//     delete ptr;
//     delete ptr2;

//      cout<<"Memory deallocated"<<endl;
// }

// C++ program to store GPA of n number of students and display it
// where n is the number of students entered by the user

#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter total number of students: ";
    cin >> num;
    float* ptr;
    
    // memory allocation of num number of floats
    ptr = new float[num];
    
    cout << "Enter GPA of students." << endl;
    for (int i = 0; i < num; ++i) {
    cout << "Student" << i + 1 << ": ";
    cin >> *(ptr + i);
    }
    
    cout << "\nDisplaying GPA of students." << endl;
    for (int i = 0; i < num; ++i) {
    cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
    }
    
    // ptr memory is released
    delete[] ptr;
    ptr = nullptr;

    return 0;
}