/********************************************************************************
** Form generated from reading UI file 'eliminarproyecto.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELIMINARPROYECTO_H
#define UI_ELIMINARPROYECTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EliminarProyecto
{
public:
    QLabel *labelCodigo;
    QLineEdit *inputCodigoEliminar;
    QPushButton *btnEliminar;
    QPushButton *btnCerrar;

    void setupUi(QDialog *EliminarProyecto)
    {
        if (EliminarProyecto->objectName().isEmpty())
            EliminarProyecto->setObjectName("EliminarProyecto");
        EliminarProyecto->resize(400, 180);
        labelCodigo = new QLabel(EliminarProyecto);
        labelCodigo->setObjectName("labelCodigo");
        labelCodigo->setGeometry(QRect(30, 40, 120, 25));
        inputCodigoEliminar = new QLineEdit(EliminarProyecto);
        inputCodigoEliminar->setObjectName("inputCodigoEliminar");
        inputCodigoEliminar->setGeometry(QRect(160, 40, 180, 25));
        btnEliminar = new QPushButton(EliminarProyecto);
        btnEliminar->setObjectName("btnEliminar");
        btnEliminar->setGeometry(QRect(90, 100, 100, 30));
        btnCerrar = new QPushButton(EliminarProyecto);
        btnCerrar->setObjectName("btnCerrar");
        btnCerrar->setGeometry(QRect(220, 100, 100, 30));

        retranslateUi(EliminarProyecto);

        QMetaObject::connectSlotsByName(EliminarProyecto);
    } // setupUi

    void retranslateUi(QDialog *EliminarProyecto)
    {
        EliminarProyecto->setWindowTitle(QCoreApplication::translate("EliminarProyecto", "Eliminar Proyecto", nullptr));
        labelCodigo->setText(QCoreApplication::translate("EliminarProyecto", "C\303\263digo del proyecto:", nullptr));
        btnEliminar->setText(QCoreApplication::translate("EliminarProyecto", "Eliminar", nullptr));
        btnCerrar->setText(QCoreApplication::translate("EliminarProyecto", "Cerrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EliminarProyecto: public Ui_EliminarProyecto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELIMINARPROYECTO_H
