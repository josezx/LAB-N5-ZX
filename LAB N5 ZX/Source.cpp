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

// Implementación de los métodos de la clase Tiempo
Tiempo::Tiempo() : horas(0), minutos(0), segundos(0) {}

Tiempo::Tiempo(int horas, int minutos, int segundos) : horas(horas), minutos(minutos), segundos(segundos) {}

int Tiempo::getHoras() const {
    return horas;
}

void Tiempo::setHoras(int horas) {
    this->horas = horas;
}

int Tiempo::getMinutos() const {
    return minutos;
}

void Tiempo::setMinutos(int minutos) {
    this->minutos = minutos;
}

int Tiempo::getSegundos() const {
    return segundos;
}

void Tiempo::setSegundos(int segundos) {
    this->segundos = segundos;
}

std::ostream& operator<<(std::ostream& os, const Tiempo& tiempo) {
    os << tiempo.horas << ":" << tiempo.minutos << ":" << tiempo.segundos;
    return os;
}

#include "InterfazVisual.h"
#include "Tarea.h"

int main() {
    // Crear una tarea de ejemplo
    Tiempo duracion{ 3, 30, 15 }; // 3 horas, 30 minutos, 15 segundos

    // Crear una tarea de ejemplo sin subtareas
    Tarea tarea(1, "Realizar informe", "Redactar el informe mensual de ventas", duracion, "30/04/2024",
        Prioridad::Alta, Estado::Pendiente, Categoria::Trabajo, "Juan Pérez",
        {}, "20/04/2024");

    // Mostrar la tarea en la interfaz visual
    InterfazVisual::mostrarTareaEnInterfaz(tarea);

    return 0;
}
