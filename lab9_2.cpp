//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main () {
    ofstream dest;
    dest.open("C:\\Users\\lab302-30\\Desktop\\lab9-2562-2-Ponyapat-master\\cheerbook_copy.txt");
    dest <<"-------------------- SOTUS ---------------------" << endl;
    ifstream source;
    source.open("C:\\Users\\lab302-30\\Desktop\\lab9-2562-2-Ponyapat-master\\cheerbook.txt");
    string textline;
    while (getline(source,textline))
    {
       dest << textline << endl;
    }

    dest << "-------------------- SOTUS ---------------------";

       
    source.close();
    dest.close();
    return 0;

}