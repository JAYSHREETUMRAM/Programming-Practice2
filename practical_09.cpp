//WAP that accept 9 number in form of matrix and display transpose of that matrix .

# include <iostream> 
using namespace std ;

 int main (){
    // Declare a 3x3 matrix
    int matrix[3][3];

    //Accept input for the matrix 
    cout << "enter 9 numbers for the matrix:"<<endl;
    for(int i = 0; i < 3; i++){
        cin>> matrix[i][j];

    }
     }

     //display  the orignal matrix 
     cout<< "original matrix:"<<endl
     for(int i =o ; i < 3 ; i++){
        for( int j =0; j < 3; j++){
            cout <<  matrix[1][j] <<" ";
        }
        cout << endl
     }

     //calculate and display the transpose of the matrix
     cout<< "transpose matrix :"<< endl
     for (int i = 0; i < 3; i++){
        for ( int j = 0; j < 3; j++){
            cout << matri[j][i] <<" ";
        }
        cout << endl
     }
     
     return 0;
}
     
