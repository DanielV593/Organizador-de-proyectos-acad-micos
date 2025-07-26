#ifndef MOSTRARPROYECTOS_H
#define MOSTRARPROYECTOS_H

#include <QDialog>

namespace Ui {
class MostrarProyectos;
}

class MostrarProyectos : public QDialog
{
    Q_OBJECT

public:
    explicit MostrarProyectos(QWidget *parent = nullptr);
    ~MostrarProyectos();

private slots:
    void on_btnCerrar_clicked();

private:
    Ui::MostrarProyectos *ui;
    void cargarProyectosEnTabla();
};

#endif // MOSTRARPROYECTOS_H
