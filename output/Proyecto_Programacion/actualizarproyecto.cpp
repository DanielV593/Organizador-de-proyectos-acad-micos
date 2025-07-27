#include "actualizarproyecto.h"
#include "ui_actualizarproyecto.h"
#include <QMessageBox>
#include "proyecto_global.h"

ActualizarProyecto::ActualizarProyecto(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ActualizarProyecto)
{
    ui->setupUi(this);

    connect(ui->btnBuscarProyecto, &QPushButton::clicked, this, &ActualizarProyecto::on_btnBuscarProyecto_clicked);
    connect(ui->btnActualizarProyecto, &QPushButton::clicked, this, &ActualizarProyecto::on_btnActualizarProyecto_clicked);
}

ActualizarProyecto::~ActualizarProyecto()
{
    delete ui;
}

void ActualizarProyecto::on_btnBuscarProyecto_clicked()
{
    QString codigo = ui->inputBuscarCodigo->text().trimmed();
    if (codigo.isEmpty()) {
        QMessageBox::warning(this, "Advertencia", "Ingrese un código para buscar.");
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
        QMessageBox::information(this, "No encontrado", "No se encontró el proyecto con ese código.");
        return;
    }

    ui->inputNombre->setText(QString::fromStdString(proyectos[pos].nombre));
    ui->inputMateria->setText(QString::fromStdString(proyectos[pos].materia));
    ui->inputIntegrantes->setText(QString::fromStdString(proyectos[pos].integrantes));
    ui->checkEntregado->setChecked(proyectos[pos].entregado);

    codigoBuscado = codigo;
}

void ActualizarProyecto::on_btnActualizarProyecto_clicked()
{
    if (codigoBuscado.isEmpty()) {
        QMessageBox::warning(this, "Advertencia", "Primero busca un proyecto para actualizar.");
        return;
    }

    int pos = -1;
    for (size_t i = 0; i < proyectos.size(); ++i) {
        if (proyectos[i].codigo == codigoBuscado.toStdString()) {
            pos = static_cast<int>(i);
            break;
        }
    }

    if (pos == -1) {
        QMessageBox::critical(this, "Error", "El proyecto a actualizar ya no existe.");
        return;
    }

    if (ui->inputNombre->text().trimmed().isEmpty() ||
        ui->inputMateria->text().trimmed().isEmpty() ||
        ui->inputIntegrantes->text().trimmed().isEmpty())
    {
        QMessageBox::warning(this, "Campos incompletos", "Por favor complete todos los campos.");
        return;
    }

    proyectos[pos].nombre = ui->inputNombre->text().toStdString();
    proyectos[pos].materia = ui->inputMateria->text().toStdString();
    proyectos[pos].integrantes = ui->inputIntegrantes->text().toStdString();
    proyectos[pos].entregado = ui->checkEntregado->isChecked();

    guardarEnArchivo();

    QMessageBox::information(this, "Actualizado", "Proyecto actualizado correctamente.");
    close();
}
