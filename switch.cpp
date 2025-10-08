#include<iostream>
using namespace std;
int main(){
    // variable declaration
    int marks;
    cout<<"Enter your marks: "<<endl;
    // take input from user yaha par
    cin>> marks;
    // use switch case to print the grade
    switch(marks){
        case 90 ... 100:
            cout<<"A+ Grade"<<endl;
            break;
        case 80 ... 89:
            cout<<"A Grade"<<endl;
            break;
        case 70 ... 79:
            cout<<"B Grade"<<endl;
            break;
        case 60 ... 69:
            cout<<"C Grade"<<endl;
            break;
        default:
            cout<<"Fail"<<endl;
            break;
    }
    return 0;
}