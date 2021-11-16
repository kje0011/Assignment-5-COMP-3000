#include <iostream>

using namespace std;

int main() {
    char sentence[101];
    char preChar = ' ';

    cout << "Enter a sentence" << endl;
    cin.getline(sentence, 101);
    int i = 0;
    while(sentence[i] != '\0'){
        sentence[i] = tolower(sentence[i]);
        i++;
    }
    sentence[0] = toupper(sentence[0]);
    if(i<101){
        sentence[i] = '.';

    }

    cout << "The sentence entered: " << sentence << endl;
    return 0;
}