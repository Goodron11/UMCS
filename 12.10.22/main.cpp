#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
double a,b;
int main(){
    cin>>a>>b;
    cout<<"a="<<a<<'\n'<<"b="<<b<<'\n';
    double c;
    c=a;
    a=b;
    b=c;
    cout<<"a="<<a<<'\n'<<"b="<<b<<'\n';
    return 0;
}
