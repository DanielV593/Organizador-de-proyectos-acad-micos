#include "eliminarproyecto.h"
#include "ui_eliminarproyecto.h"
#include "proyecto_global.h"  // Vector proyectos global
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

EliminarProyecto::EliminarProyecto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EliminarProyecto)
{
    ui->setupUi(this);

    connect(ui->btnEliminar, &QPushButton::clicked, this, &EliminarProyecto::on_btnEliminar_clicked);
    connect(ui->btnCerrar, &QPushButton::clicked, this, &EliminarProyecto::on_btnCerrar_clicked);
}

EliminarProyecto::~EliminarProyecto()
{
    delete ui;
}

void EliminarProyecto::on_btnEliminar_clicked()
{
    QString codigo = ui->inputCodigoEliminar->text().trimmed();

    if (codigo.isEmpty()) {
        QMessageBox::warning(this, "Advertencia", "Por favor ingrese un código para eliminar.");
        return;
    }

    int pos = -1;
    for (size_t i = 0; i < proyectos.size(); ++i) {
        if (proyectos[i].codigo == codigo.toStdString()) {
            pos = static_cast<int>(i);
            break;
        }
    }

    if (pos == -1) {
        QMessageBox::information(this, "No encontrado", "No se encontró un proyecto con ese código.");
        return;
    }

    // Eliminar proyecto del vector
    proyectos.erase(proyectos.begin() + pos);

    // Guardar cambios en archivo
    QFile archivo("proyectos.txt");
    if (!archivo.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)) {
        QMessageBox::warning(this, "Error", "No se pudo abrir el archivo para guardar.");
        return;
    }

    QTextStream out(&archivo);
    for (const auto& p : proyectos) {
        out << QString::fromStdString(p.codigo) << ";"
            << QString::fromStdString(p.nombre) << ";"
            << QString::fromStdString(p.materia) << ";"
            << QString::fromStdString(p.integrantes) << ";"
            << (p.entregado ? "1" : "0") << "\n";
    }
    archivo.close();

    QMessageBox::information(this, "Éxito", "Proyecto eliminado correctamente.");
    ui->inputCodigoEliminar->clear();
}

void EliminarProyecto::on_btnCerrar_clicked()
{
    this->close();
}
