/********************************************************************************
** Form generated from reading UI file 'actualizarproyecto.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTUALIZARPROYECTO_H
#define UI_ACTUALIZARPROYECTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ActualizarProyecto
{
public:
    QLabel *labelTituloActualizar;
    QLabel *labelBuscarCodigo;
    QLineEdit *inputBuscarCodigo;
    QPushButton *btnBuscarProyecto;
    QLabel *labelNombre;
    QLineEdit *inputNombre;
    QLabel *labelMateria;
    QLineEdit *inputMateria;
    QLabel *labelIntegrantes;
    QLineEdit *inputIntegrantes;
    QCheckBox *checkEntregado;
    QPushButton *btnActualizarProyecto;

    void setupUi(QDialog *ActualizarProyecto)
    {
        if (ActualizarProyecto->objectName().isEmpty())
            ActualizarProyecto->setObjectName("ActualizarProyecto");
        ActualizarProyecto->resize(720, 500);
        labelTituloActualizar = new QLabel(ActualizarProyecto);
        labelTituloActualizar->setObjectName("labelTituloActualizar");
        labelTituloActualizar->setGeometry(QRect(270, 20, 181, 20));
        labelBuscarCodigo = new QLabel(ActualizarProyecto);
        labelBuscarCodigo->setObjectName("labelBuscarCodigo");
        labelBuscarCodigo->setGeometry(QRect(50, 60, 150, 20));
        inputBuscarCodigo = new QLineEdit(ActualizarProyecto);
        inputBuscarCodigo->setObjectName("inputBuscarCodigo");
        inputBuscarCodigo->setGeometry(QRect(180, 60, 200, 28));
        btnBuscarProyecto = new QPushButton(ActualizarProyecto);
        btnBuscarProyecto->setObjectName("btnBuscarProyecto");
        btnBuscarProyecto->setGeometry(QRect(400, 60, 100, 28));
        labelNombre = new QLabel(ActualizarProyecto);
        labelNombre->setObjectName("labelNombre");
        labelNombre->setGeometry(QRect(50, 120, 150, 20));
        inputNombre = new QLineEdit(ActualizarProyecto);
        inputNombre->setObjectName("inputNombre");
        inputNombre->setGeometry(QRect(220, 120, 200, 28));
        labelMateria = new QLabel(ActualizarProyecto);
        labelMateria->setObjectName("labelMateria");
        labelMateria->setGeometry(QRect(50, 170, 150, 20));
        inputMateria = new QLineEdit(ActualizarProyecto);
        inputMateria->setObjectName("inputMateria");
        inputMateria->setGeometry(QRect(220, 170, 200, 28));
        labelIntegrantes = new QLabel(ActualizarProyecto);
        labelIntegrantes->setObjectName("labelIntegrantes");
        labelIntegrantes->setGeometry(QRect(50, 220, 150, 20));
        inputIntegrantes = new QLineEdit(ActualizarProyecto);
        inputIntegrantes->setObjectName("inputIntegrantes");
        inputIntegrantes->setGeometry(QRect(220, 220, 200, 28));
        checkEntregado = new QCheckBox(ActualizarProyecto);
        checkEntregado->setObjectName("checkEntregado");
        checkEntregado->setGeometry(QRect(220, 270, 111, 25));
        btnActualizarProyecto = new QPushButton(ActualizarProyecto);
        btnActualizarProyecto->setObjectName("btnActualizarProyecto");
        btnActualizarProyecto->setGeometry(QRect(260, 330, 150, 32));

        retranslateUi(ActualizarProyecto);

        QMetaObject::connectSlotsByName(ActualizarProyecto);
    } // setupUi

    void retranslateUi(QDialog *ActualizarProyecto)
    {
        ActualizarProyecto->setWindowTitle(QCoreApplication::translate("ActualizarProyecto", "Actualizar Proyecto", nullptr));
        labelTituloActualizar->setText(QCoreApplication::translate("ActualizarProyecto", "Actualizar Proyecto", nullptr));
        labelBuscarCodigo->setText(QCoreApplication::translate("ActualizarProyecto", "Buscar c\303\263digo:", nullptr));
        btnBuscarProyecto->setText(QCoreApplication::translate("ActualizarProyecto", "Buscar", nullptr));
        labelNombre->setText(QCoreApplication::translate("ActualizarProyecto", "Nombre del proyecto:", nullptr));
        labelMateria->setText(QCoreApplication::translate("ActualizarProyecto", "Materia:", nullptr));
        labelIntegrantes->setText(QCoreApplication::translate("ActualizarProyecto", "Integrantes:", nullptr));
        checkEntregado->setText(QCoreApplication::translate("ActualizarProyecto", "\302\277Entregado?", nullptr));
        btnActualizarProyecto->setText(QCoreApplication::translate("ActualizarProyecto", "Actualizar Proyecto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ActualizarProyecto: public Ui_ActualizarProyecto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTUALIZARPROYECTO_H
