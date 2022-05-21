#include <iomanip>
#include <ios>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <stdexcept>

using std::cin; using std::setprecision;
using std::cout; using std::string;
using std::endl; using std::streamsize;
using std::domain_error;

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
    
    int count = 0;
    double sum = 0;

    double x;

    while (cin >> x){
        ++count;
        sum += x;
    }

    streamsize prec = cout.precision();
    cout << "Your final grade id " << setprecision(3)
        << grade(midterm, final, sum / count)
        << setprecision(prec) << endl;
    return 0;
}

double grade(double midterm, double final, double homework)
{
    return 0.2 * midterm + 0.4 * final + 0.4 * homework
}

double median(vector<double> vec)
{
    typedef vector<double>::size_type vec_sz;
    vec_sz size = vec.size()

    if(size == 0)
        throw domain_error("median of an empty vector");

    sort(vec.begin(), vec.end());
    vec_sz mid = size / 2;
    return size %2 == 0 ? (vec[mid]+vec[mid-1]) / 2 : vec[mid];
}