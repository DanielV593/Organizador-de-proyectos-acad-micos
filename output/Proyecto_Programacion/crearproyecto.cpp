#include "crearproyecto.h"
#include "ui_crearproyecto.h"
#include "proyecto_global.h"
#include <QMessageBox>

CrearProyecto::CrearProyecto(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CrearProyecto)
{
    ui->setupUi(this);
}

CrearProyecto::~CrearProyecto()
{
    delete ui;
}

void CrearProyecto::on_btnGuardarProyecto_clicked()
{
    Proyecto nuevo;
    nuevo.codigo = ui->inputCodigo->text().trimmed().toStdString();
    nuevo.nombre = ui->inputNombre->text().trimmed().toStdString();
    nuevo.materia = ui->inputMateria->text().trimmed().toStdString();
    nuevo.integrantes = ui->inputIntegrantes->text().trimmed().toStdString();
    nuevo.entregado = ui->checkEntregado->isChecked();

    if (nuevo.codigo.empty() || nuevo.nombre.empty() || nuevo.materia.empty() || nuevo.integrantes.empty()) {
        QMessageBox::warning(this, "Campos incompletos", "Por favor complete todos los campos.");
        return;
    }

    if (buscarProyecto(nuevo.codigo) != -1) {
        QMessageBox::critical(this, "Código duplicado", "Ya existe un proyecto con ese código.");
        return;
    }

    proyectos.push_back(nuevo);

    guardarEnArchivo();

    QMessageBox::information(this, "Éxito", "Proyecto creado exitosamente.");
    limpiarCampos();
    close();
}

void CrearProyecto::limpiarCampos()
{
    ui->inputCodigo->clear();
    ui->inputNombre->clear();
    ui->inputMateria->clear();
    ui->inputIntegrantes->clear();
    ui->checkEntregado->setChecked(false);
}
