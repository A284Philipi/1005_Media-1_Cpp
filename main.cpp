#include <iostream>

using namespace std;

int main()
{
    double A, B, MEDIA;
    cin >>A;
    cin >>B;
    MEDIA = ((A*3.5)+(B*7.5))/11;
    cout.precision(5);
    cout << fixed << "MEDIA = " << MEDIA <<endl;
    return 0;
}
