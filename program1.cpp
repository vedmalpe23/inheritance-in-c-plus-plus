#include <iostream>
#include <string>
using namespace std;


class vehicle
{
    public:
    string brand = "Amaze";
    void colour()
    {
        cout << "Red \n";
    }
};

class car: public vehicle
{
    public:
    string model = "BMW";
};

int main()
{
    car c1;
    c1.colour();
    cout << c1.brand << endl;
    cout << c1.model;
    return 0;
}
// OUTPUT
// Red
// Amaze
// BMW
