#include <iomanip>
// #include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin; using std::setprecision;
using std::cout; using std::string;
using std::endl; // using std::streamsize;
using std::vector; using std::sort;

int main()
{
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    cout << "Please enter your midterm and final exam grades: ";
    double midterm, final;
    cin >> midterm >> final;

    cout << "Enter all your homework grades, "
            "follwed by endoffile: ";
    

    double x;
    vector<double> homework;

    while (cin >> x){
        homework.push_back(x);
    }

    // vector<double>::size_type
    auto size = homework.size();

    if(size == 0){
        cout << endl << "you must enter your grades. "
                        "Please try again." << endl;
        return 1;
    }

    sort(begin(homework), end(homework));

    auto mid = size/2;
    double median = size % 2 == 0 ? (homework[mid] + homework[mid-1])/2
                                    :homework[mid];

    // double median;
    // if (size % 2 == 0)
    //     median = (homework[mid] + homework[mid-1])/2
    // else;
    //     median = homework[mid]

    //streamsize 
    auto prec = cout.precision();
    cout << "cout.precision(): " << prec << endl;
    
    cout << "Your final grade id " << setprecision(3)
        << 0.2 * midterm + 0.4 * final + 0.4 * median
        << setprecision(prec) << endl;
    return 0;
}