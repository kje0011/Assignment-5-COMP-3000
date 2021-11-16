#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // variables
    char cont = ' ';
    string question = " ", answer = " ";

    // loads file
    ifstream infile("answers.txt");
    if(!infile) {
        cout << "Error: Could not find file." << endl;
        exit(1);
    }
    // do while loop to read in line from file
    do {
        // enter question
        cout << "Enter a question: " << endl;
        getline(cin, question);

        // outputs answer
        getline(infile, answer);
        if(infile.eof()) {
            infile.close();
            infile.open("answers.txt");
            getline(infile,answer);
        }
        cout << "Answer: " << answer << endl;
        cout << "Do you want to ask another question? Enter Y to continue. ";
        cin >> cont;
        cin.ignore();
    }
    while (cont == 'Y' || cont == 'y');

    infile.close();
    return 0;

}