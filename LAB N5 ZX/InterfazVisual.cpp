#include "InterfazVisual.h"
#include <Windows.h>
#include <sstream>

void InterfazVisual::mostrarTareaEnInterfaz(const Tarea& tarea) {
    // Construir el mensaje con la informaci�n de la tarea
    std::stringstream mensaje;
    mensaje << "Identificador: " << tarea.getIdentificador() << "\n";
    mensaje << "Nombre: " << tarea.getNombre() << "\n";
    mensaje << "Descripci�n: " << tarea.getDescripcion() << "\n";

    // Imprimir la duraci�n estimada
    mensaje << "Duraci�n estimada: " << tarea.getDuracionEstimada().getHoras() << " horas, "
        << tarea.getDuracionEstimada().getMinutos() << " minutos, "
        << tarea.getDuracionEstimada().getSegundos() << " segundos\n";

    mensaje << "Fecha de Vencimiento: " << tarea.getFechaVencimiento() << "\n";

    // Convertir enumeraciones a cadenas antes de agregarlas al flujo de salida
    mensaje << "Prioridad: ";
    switch (tarea.getPrioridad()) {
    case Prioridad::Alta:
        mensaje << "Alta\n";
        break;
    case Prioridad::Media:
        mensaje << "Media\n";
        break;
    case Prioridad::Baja:
        mensaje << "Baja\n";
        break;
    }

    mensaje << "Estado: ";
    switch (tarea.getEstado()) {
    case Estado::Completa:
        mensaje << "Completa\n";
        break;
    case Estado::EnProgreso:
        mensaje << "En Progreso\n";
        break;
    case Estado::Pendiente:
        mensaje << "Pendiente\n";
        break;
    }

    mensaje << "Categor�a: ";
    switch (tarea.getCategoria()) {
    case Categoria::Trabajo:
        mensaje << "Trabajo\n";
        break;
    case Categoria::Hogar:
        mensaje << "Hogar\n";
        break;
    case Categoria::Estudio:
        mensaje << "Estudio\n";
        break;
    }

    mensaje << "Responsable: " << tarea.getResponsable() << "\n";

    mensaje << "Subtareas: ";
    for (const auto& sub : tarea.getSubtareas()) {
        mensaje << sub.getNombre() << ", ";
    }
    mensaje << "\nFecha �ltima modificaci�n: " << tarea.getFechaUltimaModificacion();

    // Mostrar la ventana de mensaje
    MessageBoxA(nullptr, mensaje.str().c_str(), "Informaci�n de la Tarea", MB_OK);
}
