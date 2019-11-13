#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "how many elements in your array?" << endl;
    cin >> a;
    int b[a];
    for(int c=0; c<a; c++)
    {
        int d;
        cout << "enter array element " << c << endl;
        cin >> d;
        b[c] = d;
    }
    return 0;
}
