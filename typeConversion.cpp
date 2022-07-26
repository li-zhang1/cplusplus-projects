#include <iostream>

int main(){
//type conversion = conversion a value of one data type to another
//Implicit = automatic
//Explict = procede value with new data type(int)
double x = (int)3.14;
std::cout << x <<'\n';

char y = 100;
std::cout << y <<'\n';

std::cout << (char)100 << '\n';

int correct = 8;
int question = 10;
double score = correct / (double)question * 100;
std::cout << score << "%" << '\n';

double z = 8;
std::cout << z << '\n';
return 0;
}