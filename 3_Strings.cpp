#include <iostream>
using namespace std;
int alphabet(char c){
    if ('A'<=c && c<='Z' || 'a'<=c && c<='z'){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    char ch[] {"12341"}; 
    int Count = sizeof(ch)/sizeof(ch[0]);
    for (int i = 0; i<Count; i++){
        cout << "ch[" << i << "] has " << alphabet(ch[i]) << endl; 
    }
    return 0;
}