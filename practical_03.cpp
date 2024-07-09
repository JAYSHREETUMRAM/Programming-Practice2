// WAP to print number ,alphbets  and special character on  the screen.
#include <iostream>
using namespace std;

int mian (){
    cout<<"numbers :-";
    for(int i=1 ; i<=9 ; i++){
        cout<<i<<" ";      
    }
    cout<<endl;
    cout<<"Alphabets :";
    for (char i = 'A'; i <='Z' i++){ 
       cout<<i<<" ";
      }
   cout<<endl;
   cout<<"special character :";
   for (( char) i = 33; i < =47;i++){
    cout<<i<<" ";
   }

   return 0;
}
