#ifndef ACTUALIZARPROYECTO_H
#define ACTUALIZARPROYECTO_H

#include <QDialog>

namespace Ui {
class ActualizarProyecto;
}

class ActualizarProyecto : public QDialog
{
    Q_OBJECT

public:
    explicit ActualizarProyecto(QWidget *parent = nullptr);
    ~ActualizarProyecto();

private slots:
    void on_btnBuscarProyecto_clicked();
    void on_btnActualizarProyecto_clicked();

private:
    Ui::ActualizarProyecto *ui;
    QString codigoBuscado;
};

#endif // ACTUALIZARPROYECTO_H
