#include <iostream>
#include <fstream>

using namespace std;

int main() {
    /**
     * When you work with outer world in program
     * you use streams that cover your program
     * simple example of stream is @cin and @cout
     * they are functions of big streams that called
     * @istream and @ostream
     *
     * when you want to read something from file
     * you create var of type @fstream and use it
     * like @cin and @cout
     */

    /**
     * let`s read simple number from file (ios::in)
     */

    fstream file("../input.txt", ios::in);
    int a;
    file >> a;
    int b;
    file >> b;

//    cout << a << " " << b << endl;
    file.close();
    /**
     * Writing to file (ios::out)
     */

    fstream outFile("../output.txt", ios::out);

    outFile << "Fuck this shit ";
    outFile << "hey";
    outFile << endl;
    outFile << "you";
    file.close();
    /**
     * KOSTUL if you want to read mass from file
     * you first write in file size of the mass,
     * and than elements
     */

    int size;

    fstream massFile("../input.txt", ios::in);
    massFile >> size;
    int* mass = new int[size];
    for(int i=0 ;i<size; i++){
        massFile >> mass[i];
    }

    for(int i = 0; i<size; i++){
        cout << mass[i] << " ";
    }
    massFile.close();
    return 0;
}
