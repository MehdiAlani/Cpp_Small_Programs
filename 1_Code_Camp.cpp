#include <iostream>
using namespace std;
int main(){
    int v = 4324;
    cout << &v << endl;
    for (size_t i = 0;i<50;i++){
        cout << "Hey bro How are you ?"<<endl;
    } 
    long double Vi[] {41,43,432,4343,908,899,890};
    auto long_Vi {sizeof(Vi)/sizeof(Vi[0])} ;
    for (size_t i =0;i<long_Vi;++i){
        cout<<"Vi["<<i<<"]:"<<Vi[i]<<endl;
    }
    int Clk=0;
    /*while (true){
        Clk++;
        int i;
        char hey[] {'f','d'};
        cout << hey << endl; 
        cout << i << endl;
        i = 43;
        hey[3] = 'f';
        cout << Clk << endl;
    }*/
    while (true){
        continue;
    }
}