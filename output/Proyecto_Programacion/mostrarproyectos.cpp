#include "mostrarproyectos.h"
#include "ui_mostrarproyectos.h"
#include "proyecto_global.h"  // Aquí está declarado el vector global proyectos
#include <QString>

MostrarProyectos::MostrarProyectos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MostrarProyectos)
{
    ui->setupUi(this);

    // Configurar columnas de la tabla
    ui->tablaProyectos->setColumnCount(5);
    QStringList encabezados = {"Código", "Nombre", "Materia", "Integrantes", "Entregado"};
    ui->tablaProyectos->setHorizontalHeaderLabels(encabezados);
    ui->tablaProyectos->setEditTriggers(QAbstractItemView::NoEditTriggers); // No editable

    cargarProyectosEnTabla();

    connect(ui->btnCerrar, &QPushButton::clicked, this, &MostrarProyectos::on_btnCerrar_clicked);
}

MostrarProyectos::~MostrarProyectos()
{
    delete ui;
}

void MostrarProyectos::cargarProyectosEnTabla()
{
    ui->tablaProyectos->setRowCount(static_cast<int>(proyectos.size()));

    for (int i = 0; i < static_cast<int>(proyectos.size()); ++i) {
        const Proyecto &p = proyectos[i];
        ui->tablaProyectos->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(p.codigo)));
        ui->tablaProyectos->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(p.nombre)));
        ui->tablaProyectos->setItem(i, 2, new QTableWidgetItem(QString::fromStdString(p.materia)));
        ui->tablaProyectos->setItem(i, 3, new QTableWidgetItem(QString::fromStdString(p.integrantes)));
        ui->tablaProyectos->setItem(i, 4, new QTableWidgetItem(p.entregado ? "Sí" : "No"));
    }
}

void MostrarProyectos::on_btnCerrar_clicked()
{
    this->close();
}
