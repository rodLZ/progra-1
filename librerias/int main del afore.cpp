int main(){
    int edad;
    string nombre;
    string ocupacion;
    float sueldo;
    cout<< "Nombre: ";
    cin >> nombre;
    cout<< "Edad: ";
    cin >> edad;
    cout<< "Ocupación: ";
    cin >> ocupacion;
    cout<< "Sueldo: ";
    cin >> sueldo;
    cout << "Te faltan "<< años(edad) << " años para tu jubilación"<<endl;
    cout << "En tu jubilación tendrás: $" << ahorros(edad, sueldo)<<endl;
    return 0;
}
