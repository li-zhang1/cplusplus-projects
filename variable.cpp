//integer (whole number)
//double ( number including decimal)
//char (single character)
//bollean (true false)
//string(objects that represents a sequence of text)

//The const keyword specifies that a variable's value is connstant
//tells the compiler to prevent anything from modifying it
//read only


//namespace = provide a solution for preventing name conflict in large projects.
//Each entity needs a unique name.
//a namespace allows for identically named entities 
//as long as the namespace are different.

//typedef = reserved keyword used to create an addtional name
//(alias) for another data type
//new identifier for an existing type 
//helps with readability and reduce typos.


#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;

// typedef std::string text_t;
/////using text_t = std::string;
// typedef int number_t;
//using number_t = int;
namespace first
{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    //pairlist_t pairlist;

    //////text_t firstName = "Janet";
    //////std::cout << firstName <<'\n';

    //int x = 0;
    using namespace first;
    std::cout << x <<'\n';
    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;
    std::cout << circumference << "cm" <<'\n';

    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    //int x; //declaration
    //x = 5; //assignment
    // int x = 5;
    std::cout << x << '\n';

    int y = 6;
    std::cout << y <<'\n';
    int sum = x + y;
    std::cout << sum <<'\n';
    int age = 21;
    int year = 2023;
    int day = 7;

    double price = 10.99;
    std::cout << price << '\n';
    double gpa = 2.5;
    double tempreture = 25.1;

    char grade = 'A';
    char initial = 'B';
    char dollarSign = '$';
    std::cout << initial << '\n';

    bool isStudent = true;
    bool power = false;
    bool forSale = true;

    std::string name = "Janet";
    std::cout << name << '\n';
    std::string workday = "Friday";
    std::string food = "pizza";
    std::string address = "123 Fake st.";

    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old.";
    return 0;
}