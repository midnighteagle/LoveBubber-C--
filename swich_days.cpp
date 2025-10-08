#include<iostream>
using namespace std;
int main(){
    // Variable declation of days name acoriding to number
    int day;
    cout<<"Enter the day number: "<<endl;
    // yaha par user se input le rahe hai days ka
    cin>>day;
    // yaha par switch case ka use kr rhe hai to print the days name
    switch(day){
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"Wednesday"<<endl;
            break;
        case 4:
            cout<<"Thursday"<<endl;
            break;
        case 5:
            cout<<"Friday"<<endl;
            break;
        case 6:
            cout<<"Saturday"<<endl;
            break;
        case 7:
            cout<<"Sunday"<<endl;
            break;
        default:
            cout<<"Invalid day number"<<endl;
            break;
    }
}