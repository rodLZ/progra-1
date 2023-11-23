
#include <iostream>
void ModificarVariables(int * ptr){
    *ptr = 12;
}
int main(){
    int variable = 5;
    ModificarVariables(&variable);
    std::cout<<variable<< std:: endl;
    return 0;
}