#include <iostream>

using namespace std;

int main() {

    double f, m, a;
    char pick;

    cout << "What would you like to find?"
                    " Type F for force,"
                    " M, for mass, "
                    " or A for Acceleration: " << endl;

    cin >> pick;

    if (pick == 'A'){
        cout << "What is the force? " << endl;
        cin >> f;

        cout << "What is the mass? "
        << endl;
        cin >> m;

        a = f/m;

        cout << "The acceleration is "<< a<< endl;

    } else if (pick == 'F'){

        cout << "What is the acceleration? "
        << endl;
        cin >> a;

        cout << "What is the mass? "<<
                endl;
        cin >> m;

        f = m * a;
        cout << "The force is "
        << f << endl;
    }else if (pick == 'M'){
        cout << "What is the accelration?"
        << endl;
        cin >> a;

        cout << "What is the force? "
        << endl;
        cin >> f;

        m = f/a;
        cout << "The mass is "
        << m << endl;

    }
}