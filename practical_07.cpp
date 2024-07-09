//WAP to that accepts number from user and displays all the factors of that number .
# include <iostreaam>
using namespace std ; 

int main(){
    int number ;
    cout<<"enter positive number :";
    cin>>number;
    cout<<"factors of "<<number<<"are :";
    for(int i=1;i<=number ;i++){
        if (number%i==0){
            cout<<i<<" ";
        }
    }
return 0;
}