//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;

int main () {
    int count =0;
    float sum = 0;
    float mean = 0;
    float psum = 0;
    float sd = 0; 
    string textline;
    ifstream source("score.txt");
    while (getline(source,textline))
    {
        sum += atof(textline.c_str());
        psum = psum + pow(atof(textline.c_str()),2);;
        count++;
    }

    mean = sum/count;
    cout << "Number of data = " << count << endl;
    cout << "Mean = " << mean << endl;
    cout << "Standard Deviation = "<< sqrt((psum/count)-pow(mean,2));
    source.close();
    return 0;

}