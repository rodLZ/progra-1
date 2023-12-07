#include <iostream>
#include <string>

class Poliza {
public:
    Poliza(){
        this->nombre = "N/A";
        this->CURP = "N/A";
        this->birthday = "N/A";
        this->dedu = 0;
        this->monto = 0;
        this->id = 0;
    }
    Poliza(std::string nombre, std::string CURP, std::string birthday, int dedu, int monto, int id) {
        this->nombre = nombre;
        this->CURP = CURP;
        this->birthday = birthday;
        this->dedu = dedu;
        this->monto = monto;
        this->id = id;
    }

    void setBirthday(std::string birthday) {
        this->birthday = birthday;
    }
    void setDedu(int dedu) {
        this->dedu = dedu;
    }
    void setMonto(int monto) {
        this->monto = monto;
    }
    void setId(int id) {
        this->id = id;
    }

    std::string getNombre() {
        return nombre;
    }
    std::string getCURP() {
        return CURP;
    }
    std::string getBirthday() {
        return birthday;
    }

    int getDedu() {
        return dedu;
    }
    int getMonto() {
        return monto;
    }
    int getId() {
        return id;
    }

private:
    std::string nombre;
    std::string CURP;
    std::string birthday;
    int dedu;
    int monto;
    int id;
};

class SeguroDeVida : public Poliza {
public:
    SeguroDeVida(std::string nombre, std::string CURP, std::string birthday, int dedu, int monto, int id, std::string enfermedades, std::string TdS)
            : Poliza(nombre, CURP, birthday, dedu, monto, id) {
        this->enfermedades = enfermedades;
        this->TdS = TdS;
    }

    std::string getEnfermedades() {
        return this->enfermedades;
    }
    std::string getTdS() {
        return this->TdS;
    }

    void setEnfermedades(std::string enfermedades) {
        this->enfermedades = enfermedades;
    }
    void setTdS(std::string TdS) {
        this->TdS = TdS;
    }

private:
    std::string enfermedades;
    std::string TdS;
};

class SeguroDeCarro : public Poliza {
public:
    SeguroDeCarro(std::string Kilometraje, std::string modelo, std::string num_serie, std::string nombre, std::string CURP, int monto)
            : Poliza(nombre, CURP, "N/A", 0, monto, 0) {
        this->Kilometraje = Kilometraje;
        this->modelo = modelo;
        this->num_serie = num_serie;
    }

    std::string getKilometraje() {
        return this->Kilometraje;
    }
    std::string getModelo() {
        return this->modelo;
    }
    std::string getNumSerie() {
        return this->num_serie;
    }

    void setNumSerie(std::string num_serie) {
        this->num_serie = num_serie;
    }
    void setKilometraje(std::string Kilometraje) {
        this->Kilometraje = Kilometraje;
    }
    void setModelo(std::string modelo) {
        this->modelo = modelo;
    }

private:
    std::string Kilometraje;
    std::string modelo;
    std::string num_serie;
};

class SeguroDeHouse : public Poliza {
public:
    SeguroDeHouse(std::string tamaño, std::string ubi, std::string anti, std::string nombre, std::string CURP, int monto)
            : Poliza(nombre, CURP, "N/A", 0, monto, 0) {
        this->tamaño = tamaño;
        this->ubi = ubi;
        this->anti = anti;
    }

    std::string getTamaño() {
        return this->tamaño;
    }
    std::string getUbi() {
        return this->ubi;
    }
    std::string getAnti() {
        return this->anti;
    }

    void setTamaño(std::string tamaño) {
        this->tamaño = tamaño;
    }
    void setUbi(std::string ubi) {
        this->ubi = ubi;
    }
    void setAnti(std::string anti) {
        this->anti = anti;
    }

private:
    std::string tamaño;
    std::string ubi;
    std::string anti;
};

void imprimirInformacionPoliza(const Poliza& poliza) {
    std::cout << "Nombre: " << poliza.getNombre() << std::endl;
    std::cout << "CURP: " << poliza.getCURP() << std::endl;
    std::cout << "Fecha de nacimiento: " << poliza.getBirthday() << std::endl;
    std::cout << "Deducible: " << poliza.getDedu() << std::endl;
    std::cout << "Monto: " << poliza.getMonto() << std::endl;
    std::cout << "ID: " << poliza.getId() << std::endl;
}

void imprimirInformacionSeguroCarro(const SeguroDeCarro& seguroCarro) {
    std::cout << "Kilometraje: " << seguroCarro.getKilometraje() << std::endl;
    std::cout << "Modelo: " << seguroCarro.getModelo() << std::endl;
    std::cout << "Número de serie: " << seguroCarro.getNumSerie() << std::endl;
}

void imprimirInformacionSeguroHouse(const SeguroDeHouse& seguroHouse) {
    std::cout << "Tamaño: " << seguroHouse.getTamaño() << std::endl;
    std::cout << "Ubicación: " << seguroHouse.getUbi() << std::endl;
    std::cout << "Antigüedad: " << seguroHouse.getAnti() << std::endl;
}

void mostrarMenu() {
    std::cout << "Menu:";
    std::cout << "1. Mostrar información de Afore";
    std::cout << "2. Mostrar información de Seguro de Carro";
    std::cout << "3. Mostrar información de Seguro de Casa";
    std::cout << "4. Salir";
}

void ejecutarPrograma() {
    int opcion;

    do {
        mostrarMenu();
        std::cout << "Ingrese su opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                Poliza poliza("Juan", "ABC123", "20050101", 1000, 5000, 1);
                imprimirInformacionPoliza(poliza);
                break;
            }
            case 2: {
                SeguroDeCarro seguroCarro("10000", "Sedan", "ABC123", "Juan", "ABC123", 5000);
                imprimirInformacionSeguroCarro(seguroCarro);
                break;
            }
            case 3: {
                SeguroDeHouse seguroHouse("Grande", "Ciudad", "Alarma", "Maria", "XYZ789", 8000);
                imprimirInformacionSeguroHouse(seguroHouse);
                break;
            }
            case 4:
                std::cout << "Saliendo del programa.";
                break;
            default:
                std::cout << "Opción no válida. Intente de nuevo.";
        }

    } while (opcion != 4);
}
int main() {
    ejecutarPrograma();

    return 0;
}

