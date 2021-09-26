#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#include <cstring>
using namespace std;

int main(){
    long long x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x2 = abs(x2 - x1);
    y2 = abs(y2 - y1);
    long long ans = min(x2,y2);
    ans += abs(x2 - y2);
    cout << ans << endl;
    return 0;
}
