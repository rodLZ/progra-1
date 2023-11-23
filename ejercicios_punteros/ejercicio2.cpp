
#include <iostream>

int main(){
    int a[]={1,2,3,4,5};
    int * p = a;
    for(int i = 0; i < 5; i++) {
        std::cout << * p << std::endl;
         p++;
    }
    return 0;
};;