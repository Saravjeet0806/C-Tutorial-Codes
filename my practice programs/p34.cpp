#include <iostream>
using namespace std;
int update(int n){
    n++;
    return n;
}
int main(){
int n=5;
update(n);
cout<<n;
n++;
cout<<n;
return 0;
}