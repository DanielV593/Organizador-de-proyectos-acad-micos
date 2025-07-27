#include "eliminarproyecto.h"
#include "ui_eliminarproyecto.h"
#include "proyecto_global.h"
#include <QMessageBox>

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

    proyectos.erase(proyectos.begin() + pos);

    guardarEnArchivo();

    QMessageBox::information(this, "Éxito", "Proyecto eliminado correctamente.");
    ui->inputCodigoEliminar->clear();
}

void EliminarProyecto::on_btnCerrar_clicked()
{
    this->close();
}
