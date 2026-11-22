#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void media  (int x, int y, float &m)
{
    m=sqrt(x*y);
    return;
}
int main()
{
    int x,y; 
    float mediaGeometrica;
    
    cin >> x; 
    while (x < 0){
        cin >> x;
    }
    cin >> y;
    while(y < 0){
        cin >> y;
    }
     media (x, y, mediaGeometrica);
    
    cout << fixed << setprecision(2);
    cout << "Media: " << mediaGeometrica << endl;
    return 0;
}
