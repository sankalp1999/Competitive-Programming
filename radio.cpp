#include <iostream>
#include <functional>
using namespace std;
void lambda()
{
    std::function <int(int, int)> fxsquare = [](int x, int y)->int{
    return x*x + y*y + 100;
    };
    cout << fxsquare(10, 20) << endl;
}
int main()
{
    lambda();
    return 0;


}
