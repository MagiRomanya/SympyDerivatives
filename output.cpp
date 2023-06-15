#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Hello World" << std::endl;
    double k, L, L0, x1,x2, y1,y2,z1,z2;
    double a[3][3] = 

{{alpha*k - L0*alpha*k/L + L0*alpha*k*pow(x1 - x2, 2)/pow(L, 3), L0*alpha*k*(x1 - x2)*(y1 - y2)/pow(L, 3), L0*alpha*k*(x1 - x2)*(z1 - z2)/pow(L, 3)}, {L0*alpha*k*(x1 - x2)*(y1 - y2)/pow(L, 3), alpha*k - L0*alpha*k/L + L0*alpha*k*pow(y1 - y2, 2)/pow(L, 3), L0*alpha*k*(y1 - y2)*(z1 - z2)/pow(L, 3)}, {L0*alpha*k*(x1 - x2)*(z1 - z2)/pow(L, 3), L0*alpha*k*(y1 - y2)*(z1 - z2)/pow(L, 3), alpha*k - L0*alpha*k/L + L0*alpha*k*pow(z1 - z2, 2)/pow(L, 3)}};
    return 0;
}
