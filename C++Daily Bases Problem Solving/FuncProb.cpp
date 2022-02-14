#include <iostream>
using namespace std;

int highest(int a, int b, int c, int d)
{
    int max;
    if (a >b &&a>c &&a> d){
        max = a;
    }
    else if (b >a &&b>c &&b> d){
        max = b;
    }

    else if (c >a &&c>b &&c> d){
        max = c;
    }

    else if (d >a &&d>b &&d> c){
        max = d;
    }
    return max;
}
int main()
{
    int a, b, c, d;

    cin >>a>>b>>c>>d;

    int ans = highest(a, b, c, d);

    cout << ans;

    return 0;
}