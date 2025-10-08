#include<iostream>
using namespace std;
int main(){
    // variable dclaration
    int marks;
    cout<<"Enter your marks"<<endl;
    cin>>marks;
    if(marks>=90){
        cout<<"A+ Grade"<<endl;
    }
    else if(marks>=80){
        cout<<"A Grade"<<endl;
    }
    else if(marks>=70){
        cout<<"B Grade"<<endl;
    }
    else if(marks>=60){
        cout<<"C Grade"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }
    return 0;
}