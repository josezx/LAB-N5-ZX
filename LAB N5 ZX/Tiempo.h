#pragma once
#include <iostream>

class Tiempo {
private:
    int horas;
    int minutos;
    int segundos;

public:
    // Constructores
    Tiempo();
    Tiempo(int horas, int minutos, int segundos);

    // Métodos de acceso
    int getHoras() const;
    void setHoras(int horas);
    int getMinutos() const;
    void setMinutos(int minutos);
    int getSegundos() const;
    void setSegundos(int segundos);

    // Operador de inserción para imprimir el tiempo en formato hh:mm:ss
    friend std::ostream& operator<<(std::ostream& os, const Tiempo& tiempo);
};



