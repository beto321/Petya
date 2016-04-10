#include <iostream>

using namespace std;

int main()
{
    int p, m, c, k,r,v;
    int pk, mr, cv, min;
    while(true){
        cin >> p >> m >> c >> k >> r >> v;
        if(p==0 && m == 0 && c==0 && k==0 && r==0&&v==0){
            break;
        }
        pk=p/k;
        mr=m/r;
        cv=c/v;
        min = pk < cv ? pk : mr;
        min = min < cv? min : cv;
        cout << min << endl;
    }

    return 0;
}
