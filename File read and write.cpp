#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string data;

    // Write to file
    ofstream outfile("example.txt");
    if (outfile.is_open()) {
        outfile << "This is a line.\n";
        outfile << "This is another line.\n";
        outfile.close();
        cout << "Data written to file." << endl;
    } else {
        cout << "Unable to open file for writing." << endl;
    }

    // Read from file
    ifstream infile("example.txt");
    if (infile.is_open()) {
        cout << "Reading from file:" << endl;
        while (getline(infile, data)) {
            cout << data << endl;
        }
        infile.close();
    } else {
        cout << "Unable to open file for reading." << endl;
    }

    return 0;
}
