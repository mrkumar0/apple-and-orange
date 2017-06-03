#include <iostream>
#include<vector>
using namespace std;


int main(){
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
    }
    int app=0,org=0;
    for(vector<int>::iterator it=apple.begin();it!=apple.end();++it)
        if(*it>0 && (*it+a)>=s && (*it+a)<=t)
        app++;
    for(vector<int>::iterator it=orange.begin();it!=orange.end();++it)
        if(*it<0 && (*it+b)>=s && (*it+b)<=t)
        org++;
    cout << app<<endl<<org;
    return 0;
}
