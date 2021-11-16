#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

    string sentence;
    int i = 1;
    // gets input
    cout << "Enter a four letter word: " << endl;
    getline(cin, sentence); 

    // checks input is only four letters
    while (sentence.length() != 4){
        cout << "Error: Enter a four letter word:" << endl;
        getline(cin,sentence);
    }
    
    // changes word to love
    if (isalpha(sentence[0]) && isalpha(sentence[1]) && isalpha(sentence[2]) && isalpha(sentence[3])){

        if(isupper(sentence[0]))
            sentence[0] = 'L';
        else
            sentence[0] = 'l';
        sentence[1] = 'o';
        sentence[2] = 'v';
        sentence[3] = 'e';
    }
    
    // outputs new word
    cout << "The new four letter word: " << sentence;
    
}
