#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;
int main()
{

        double N = 0;
        double sum = 0;
        double sum_of_square = 0;
        string textline;
        ifstream source("score.txt");
        while (getline(source,textline))
        {
                sum += atof(textline.c_str());
                sum_of_square += pow(atof(textline.c_str()),2);
                N ++;
        }
        cout << "Number of data = " << N << "\n";
        cout << setprecision(3);
        
        cout << "Mean = " << (1/N)*sum << "\n";

        cout << "Standard deviation = " << sqrt(((1/N)*sum_of_square)-pow((1/N)*sum,2));
}