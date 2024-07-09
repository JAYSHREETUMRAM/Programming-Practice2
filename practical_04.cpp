// WAP to that accept age in year from user as input and display his age in month and day:
# include <iostream>
using namespace std;

int main(){
    int age ;
    cout<<"Enter your age :";
    cin>>age;
    cout<<"your age in month :"<<age*12<<endl;
    cout<<"your age in days :"<<age*365<<endl;
    return 0;
}