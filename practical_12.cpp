// WAP which should work like a streln function using  UDF .
# include <iostream>
using namespace std ;

//user-defined function to calculate string length 
int stringlength( const char* str){
    int length = 0;
//loop trougth the string untill the null terminator is encountered 
while  (* str != '/0'){
    length++;
    str++ ; // move to the next character 
}
return length ;
}

int main (){
    //Declare and initialize a string 
    const char* str ="hello,wold!";

    //calculated the length of the string using the user -defined function 
    int length = stringlength(str)

    // dispaly the length of the string 
    cout <<"length of the string :"<< length << endl;

    return 0;
}