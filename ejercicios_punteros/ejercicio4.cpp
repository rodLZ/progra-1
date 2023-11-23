#include <iostream>

int main(){
    const char* mes = "hellow world";
    std::cout<<*mes<<std::endl;
    for(int i = 0; i<12;i++){  //para eso es el ++ para que aparesca
        std::cout<<*mes<<std::endl;
        mes++;
    }
    return 0;
}