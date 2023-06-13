#include <iostream>
using namespace std;
template <class T>
T multi(T a,T b){
return a * b;
}
class parOrdenado{
public:
int a; int b;
parOrdenado(int a, int b){
this->a =a;
this->b = b;
}
};
parOrdenado operator * (parOrdenado a, parOrdenado b){
 return parOrdenado(a.a*b.a,a.b*b.b);
}
int main(){
parOrdenado par1(3,4);
parOrdenado par2(5,6);
parOrdenado result = par1*par2;
parOrdenado result2 = multi(par1,par2);
int resultado = multi(2,3);
cout<<result.a<<" "<<result.b<<endl;
cout<<resultado<<endl;
return 0;
}
