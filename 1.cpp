#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
double ans=0;
int n;
int main(){
    cin>>n;
    for(int i=0;i<n;++i){
        ans+=double(double(1)/double((i+1)));
    }
    cout<<ans<<'\n';
}
