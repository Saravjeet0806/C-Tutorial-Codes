#include <iostream>
using namespace std;
class A {
    int a;
    public: 
    void setData(int a){
        this->a=a;

    }
    void getData(void){
        cout<<"The value of a is "<<a<<endl;
    }
};

int main(){
A a;
a.setData(4); //a.setData(4).getData(); can also be used
a.getData();
return 0;
}