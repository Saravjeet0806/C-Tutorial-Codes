#include <iostream>
using namespace std;
void print(int n){
    if(n==0){
        return ;  //base case
    }
    cout<<n<<endl; // processing 
    print(n-1); //recursive relation      tail recursion 
}
int main(){
int n;
cin>>n;
print(n);

return 0;
}