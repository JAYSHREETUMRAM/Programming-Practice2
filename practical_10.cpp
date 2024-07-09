// WAP to count number of word in a sentence.
# include <iostream>
using namespace std ;

int count word ( string sentence ) {
    // Initialize a stringstream with the sentence
    stringstream ss(sentence);
    string word ;
    int count = 0;

    // count words in the sentence 
    while (ss >> word ){
        cout++;

    }
     return count ;
}
 int main (){
     string sentence;
     cout <<" Enter a sentence:";
     getline ( cin, sentences );

     int wordcount = countwords (sentence);
     cout << " number of words in the sentence :"<< wordcount << endl;

     return 0;
 }