#pragma once
#include <string>
#include <vector>

enum class Prioridad {
    Alta,
    Media,
    Baja
};

enum class Estado {
    Completa,
    EnProgreso,
    Pendiente
};

enum class Categoria {
    Trabajo,
    Hogar,
    Estudio
};

// Estructura para representar el tiempo
struct Tiempo {
    int horas;
    int minutos;
    int segundos;
};

// Clase para representar una tarea
class Tarea {
private:
    int identificador;
    std::string nombre;
    std::string descripcion;
    Tiempo duracionEstimada; // Cambiado a una estructura de tiempo
    std::string fechaVencimiento;
    Prioridad prioridad;
    Estado estado;
    Categoria categoria;
    std::string responsable;
    std::vector<Tarea> subtareas;
    std::string fechaUltimaModificacion;

public:
    // Constructor
    Tarea(int id, const std::string& nom, const std::string& desc, Tiempo dur, const std::string& fechaVenc,
        Prioridad prio, Estado est, Categoria cat, const std::string& resp,
        const std::vector<Tarea>& subt, const std::string& fechaModif);

    // Getters
    int getIdentificador() const;
    std::string getNombre() const;
    std::string getDescripcion() const;
    Tiempo getDuracionEstimada() const;
    std::string getFechaVencimiento() const;
    Prioridad getPrioridad() const;
    Estado getEstado() const;
    Categoria getCategoria() const;
    std::string getResponsable() const;
    std::vector<Tarea> getSubtareas() const;
    std::string getFechaUltimaModificacion() const;
};
