
#include <string>
#include <iostream>
#include "fraction_class.h"
#include <sstream>

using namespace std;



int main()
{
    fraction x, y(3, 5), z(y);

    cout << x.Tostring() << "  " << y.Tostring() << "  " << z.Tostring() << endl;

    fraction sum_total = fraction(1, 9).add(fraction(1, 6));
    cout << sum_total.Tostring() << endl;

    cout << fraction(3, 4).compare(fraction(3, 4)) << " ";
    cout << fraction(2, 3).compare(fraction(1, 2)) << " ";
    cout << fraction(1, 4).compare(fraction(2, 4)) << " ";
    cout << fraction(3, 5).compare(fraction(2, 6)) << " ";
    cout << fraction(1, 7).compare(fraction(1, 3)) << " " << endl;

}



