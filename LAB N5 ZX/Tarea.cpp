#include "Tarea.h"

Tarea::Tarea(int id, const std::string& nom, const std::string& desc, Tiempo dur, const std::string& fechaVenc,
    Prioridad prio, Estado est, Categoria cat, const std::string& resp,
    const std::vector<Tarea>& subt, const std::string& fechaModif)
    : identificador(id), nombre(nom), descripcion(desc), duracionEstimada(dur), fechaVencimiento(fechaVenc),
    prioridad(prio), estado(est), categoria(cat), responsable(resp), subtareas(subt),
    fechaUltimaModificacion(fechaModif) {}

int Tarea::getIdentificador() const {
    return identificador;
}

std::string Tarea::getNombre() const {
    return nombre;
}

std::string Tarea::getDescripcion() const {
    return descripcion;
}

Tiempo Tarea::getDuracionEstimada() const {
    return duracionEstimada;
}

std::string Tarea::getFechaVencimiento() const {
    return fechaVencimiento;
}

Prioridad Tarea::getPrioridad() const {
    return prioridad;
}

Estado Tarea::getEstado() const {
    return estado;
}

Categoria Tarea::getCategoria() const {
    return categoria;
}

std::string Tarea::getResponsable() const {
    return responsable;
}

std::vector<Tarea> Tarea::getSubtareas() const {
    return subtareas;
}

std::string Tarea::getFechaUltimaModificacion() const {
    return fechaUltimaModificacion;
}

