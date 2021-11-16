#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

void mergeAndSort(ifstream &int1, ifstream &int2, ofstream &out);

int main() {

    int int1 = 0, int2 = 0, out = 0;

    // input and outout files
    ifstream infile1("file1.txt"),
    infile2("file2.txt");

    ofstream outfile1("file3.txt");

    // checks inout files
    if (!infile1 || !infile2) {
        cout << "The file isn not an input file." << endl;
        exit(1);
    }

    // function
    mergeAndSort( infile1,infile2, outfile1);

}

void mergeAndSort(ifstream &int1, ifstream &int2, ofstream &out) {
    int x=0;
    vector<int> merged;

    // merges files
    while (int1 >> x){
    
        merged.push_back(x);

    }
    while (int2 >> x){
       merged.push_back(x); 
    }

    // sorts files
    sort(merged.begin(), merged.end());

    if(!out){
        cout << "Error: Cannot open file." << endl;
        exit(1);
    }
    
    // outputs to output file
    for(int i=0; i<merged.size(); i++){
        out << merged[i]<<" ";
    }
}
