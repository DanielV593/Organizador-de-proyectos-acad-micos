#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "crearproyecto.h"
#include "mostrarproyectos.h"
#include "actualizarproyecto.h"
#include "eliminarproyecto.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->btnCrear, &QPushButton::clicked, this, &MainWindow::abrirCrear);
    connect(ui->btnListar, &QPushButton::clicked, this, &MainWindow::abrirListar);
    connect(ui->btnActualizar, &QPushButton::clicked, this, &MainWindow::abrirActualizar);
    connect(ui->btnEliminar, &QPushButton::clicked, this, &MainWindow::abrirEliminar);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::abrirCrear()
{
    CrearProyecto* ventana = new CrearProyecto(this);
    ventana->show();
}

void MainWindow::abrirListar()
{
    MostrarProyectos* ventana = new MostrarProyectos(this);
    ventana->show();
}

void MainWindow::abrirActualizar()
{
    ActualizarProyecto* ventana = new ActualizarProyecto(this);
    ventana->show();
}

void MainWindow::abrirEliminar()
{
    EliminarProyecto* ventana = new EliminarProyecto(this);
    ventana->show();
}
