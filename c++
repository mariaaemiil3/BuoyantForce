#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double weight;
    double radius;
    const double Y=62.4;
    const double Pi=3.14159;
    double volume;
    double BuoyantForce;
    cout << "Enter the weight:" ;
    cin >> weight;
    cout << "Enter the radius of the sphere:" ;
    cin >> radius;
    volume = (4.0/3.0)*Pi* pow(radius,3);
    cout << "Volume equals " << volume << endl;
    BuoyantForce = volume * Y;
    cout << "Buoyant Force equals " << BuoyantForce << endl;
    if (BuoyantForce >= weight){
        cout << "The sphere will float!" << endl;
    }else{
        cout << "The sphere will sink!!!" << endl;
    }


    return 0;
}
