#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ifstream fin("C:\\Users\\artem\\desktop\\11111.txt");
    ofstream fout("C:\\Users\\artem\\desktop\\11111.txt");

	string s;

    while (getline(fin, s)){
        fout << stoi(s) * 10 << endl;
    }

	fin.close();
	fout.close();

	return 0;
}
