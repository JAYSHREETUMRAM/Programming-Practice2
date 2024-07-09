#include<iostream.h>
#include<conio.h>
using namespace std;
class Time
{
    private:
    int
    hour, minute, second;
    public:
    Time
    {
        hour=minute=second=0;
    }
    void input()
    {
        cout<<"Enter hour:"
    <<endl;
    cin>>hour;
    cout<<"Enter minute:"
    <<emndl;
    cin>>minute;
    cout<<"Enter second:"
    <<endl;
    cin>>second;
    }
    void display()
    {
        cout<<endl<<"hour:"
        <<hour<<endl;
        cout<<"minute:"
        <<minute<<endl;
        cout<<"second:"
        <<second<<endl;
    }
};
void main()
{
    clrscr();
    Time obj1,obj2;
    obj1.input();
    obj2.input();
    obj1.display();
    obj2.display();
    getch();
}

