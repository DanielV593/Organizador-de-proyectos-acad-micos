#ifndef CREARPROYECTO_H
#define CREARPROYECTO_H

#include <QDialog>

namespace Ui {
class CrearProyecto;
}

class CrearProyecto : public QDialog
{
    Q_OBJECT

public:
    explicit CrearProyecto(QWidget *parent = nullptr);
    ~CrearProyecto();

private slots:
    void on_btnGuardarProyecto_clicked();

private:
    Ui::CrearProyecto *ui;
    void limpiarCampos();
};

#endif // CREARPROYECTO_H
