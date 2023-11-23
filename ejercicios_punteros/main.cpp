
#include <iostream>

int main(){
    int a;
    int *b=&a;

    a = 5;

    *b = 7;
    std:: cout<<a<< std::endl;
    return 0;
}