#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
ll a,b,c;
int main(){
    cin>>a>>b>>c;
   cout<<max(c,max(a,b))<<'\n';
    return 0;
}