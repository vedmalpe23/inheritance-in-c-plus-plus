#include <iostream>
#include <string>
using namespace std;

// First Base Class
class Electronics {
public:
    string brand = "Realme";
    void model() {
        cout << "14 pro plus" << endl;
    }
};

// Second Base Class
class Specs {
public:
    string battery = "8000 mAh";
    void colour() {
        cout << "Pearl white" << endl;
    }
};

// Derived Class
class Smartphone : public Electronics, public Specs {
public:
    string sim = "Dual SIM";
};

int main() {
    Smartphone phone;

    // From Specs
    phone.colour();                   

    // From Electronics
    cout << phone.brand << endl;       
    phone.model();                    

    // From Smartphone + Specs
    cout << "SIM: " << phone.sim << endl;
    cout << "BATTERY: " << phone.battery << endl;

    return 0;
}
/*OUTPUT:
Pearl white
Realme
14 pro plus
SIM: Dual SIM
BATTERY: 8000 mAh
*/
