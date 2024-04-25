#include "Tiempo.h"

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
