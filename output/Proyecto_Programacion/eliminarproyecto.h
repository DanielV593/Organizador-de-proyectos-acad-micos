#ifndef ELIMINARPROYECTO_H
#define ELIMINARPROYECTO_H

#include <QDialog>

namespace Ui {
class EliminarProyecto;
}

class EliminarProyecto : public QDialog
{
    Q_OBJECT

public:
    explicit EliminarProyecto(QWidget *parent = nullptr);
    ~EliminarProyecto();

private slots:
    void on_btnEliminar_clicked();
    void on_btnCerrar_clicked();

private:
    Ui::EliminarProyecto *ui;
};

#endif // ELIMINARPROYECTO_H
