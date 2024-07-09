//WAP that to calculate area of circle, square, rectangle,and triangle using switch case statements.
# include <iostream>>
using namespace std;

int main (){
    int choice ;
    double area,length,width,radius,base,heigth;
    cout<<"choose 1. circle\n";
    cout<<"choose 2. sqaure\n";
    cout<<"choose 3. rectangle\n";
    cout<<"choose 4. triangle\n";
    cin>>choice;

    switch (choice){
        case 1 : cout<<"enter radius of circle :";
                 cin>>redius;
                area = 3.14*radius*radius;
                cout<<"area of circle:"<<area;
                break;
        case 2 : cout<<"enter length of square :";
               cin>>length;
               area = length*widgth;
               cout<<"area of sqaure :"<<area;
               break;
        case 3 : cout<<"enter length & width of rectangle";
               cin>>length>>width;
               area = length*width;
               cout<<"area of rectangle  :"<<area;
               break;
        case 4 : cout<<<"enter base & heigth of triangle :";
                cin>>base>>heigth;
                area =0.5*base*heigth:;
                cout<<"area of triangle :"<<area;
                break;
        default : cout<<"pleas select given option ";

    }

    return 0;
}              
            

            
         










    }










}