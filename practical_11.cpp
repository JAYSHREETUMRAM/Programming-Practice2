// WAP that accepts number from keyword and find its factorial.
# include <iostream.h>
using namespace std ;

int main (){
      int number ,fact=1;
      cout<<"enter any positive number :";
      cin>>number ;
      for( int i=1;i<=number;i++) {
        fact*=i;
      }
    cout<<"Factorial of number is :"<<fact;
    return 0;
}