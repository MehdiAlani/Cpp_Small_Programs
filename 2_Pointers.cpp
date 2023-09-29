#include <iostream>
using namespace std;
int main() {
    int i = 0;
    while (true){
        int *pointer {new int(i)};
        cout << pointer << "On the Count" << i <<endl;
        i++;
}
}
