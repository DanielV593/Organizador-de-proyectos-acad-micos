/********************************************************************************
** Form generated from reading UI file 'crearproyecto.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREARPROYECTO_H
#define UI_CREARPROYECTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CrearProyecto
{
public:
    QLabel *labelTituloCrear;
    QLabel *labelCodigo;
    QLineEdit *inputCodigo;
    QLabel *labelNombre;
    QLineEdit *inputNombre;
    QLabel *labelMateria;
    QLineEdit *inputMateria;
    QLabel *labelIntegrantes;
    QLineEdit *inputIntegrantes;
    QCheckBox *checkEntregado;
    QPushButton *btnGuardarProyecto;

    void setupUi(QDialog *CrearProyecto)
    {
        if (CrearProyecto->objectName().isEmpty())
            CrearProyecto->setObjectName("CrearProyecto");
        CrearProyecto->resize(500, 420);
        labelTituloCrear = new QLabel(CrearProyecto);
        labelTituloCrear->setObjectName("labelTituloCrear");
        labelTituloCrear->setGeometry(QRect(160, 20, 200, 30));
        labelTituloCrear->setAlignment(Qt::AlignCenter);
        labelCodigo = new QLabel(CrearProyecto);
        labelCodigo->setObjectName("labelCodigo");
        labelCodigo->setGeometry(QRect(50, 70, 140, 20));
        inputCodigo = new QLineEdit(CrearProyecto);
        inputCodigo->setObjectName("inputCodigo");
        inputCodigo->setGeometry(QRect(200, 70, 220, 28));
        labelNombre = new QLabel(CrearProyecto);
        labelNombre->setObjectName("labelNombre");
        labelNombre->setGeometry(QRect(50, 120, 140, 20));
        inputNombre = new QLineEdit(CrearProyecto);
        inputNombre->setObjectName("inputNombre");
        inputNombre->setGeometry(QRect(200, 120, 220, 28));
        labelMateria = new QLabel(CrearProyecto);
        labelMateria->setObjectName("labelMateria");
        labelMateria->setGeometry(QRect(50, 170, 140, 20));
        inputMateria = new QLineEdit(CrearProyecto);
        inputMateria->setObjectName("inputMateria");
        inputMateria->setGeometry(QRect(200, 170, 220, 28));
        labelIntegrantes = new QLabel(CrearProyecto);
        labelIntegrantes->setObjectName("labelIntegrantes");
        labelIntegrantes->setGeometry(QRect(50, 220, 140, 20));
        inputIntegrantes = new QLineEdit(CrearProyecto);
        inputIntegrantes->setObjectName("inputIntegrantes");
        inputIntegrantes->setGeometry(QRect(200, 220, 220, 28));
        checkEntregado = new QCheckBox(CrearProyecto);
        checkEntregado->setObjectName("checkEntregado");
        checkEntregado->setGeometry(QRect(200, 270, 150, 28));
        btnGuardarProyecto = new QPushButton(CrearProyecto);
        btnGuardarProyecto->setObjectName("btnGuardarProyecto");
        btnGuardarProyecto->setGeometry(QRect(180, 330, 141, 30));

        retranslateUi(CrearProyecto);

        QMetaObject::connectSlotsByName(CrearProyecto);
    } // setupUi

    void retranslateUi(QDialog *CrearProyecto)
    {
        CrearProyecto->setWindowTitle(QCoreApplication::translate("CrearProyecto", "Crear Proyecto", nullptr));
        labelTituloCrear->setText(QCoreApplication::translate("CrearProyecto", "Crear Nuevo Proyecto", nullptr));
        labelCodigo->setText(QCoreApplication::translate("CrearProyecto", "C\303\263digo del proyecto:", nullptr));
        labelNombre->setText(QCoreApplication::translate("CrearProyecto", "Nombre del proyecto:", nullptr));
        labelMateria->setText(QCoreApplication::translate("CrearProyecto", "Materia:", nullptr));
        labelIntegrantes->setText(QCoreApplication::translate("CrearProyecto", "Integrantes:", nullptr));
        checkEntregado->setText(QCoreApplication::translate("CrearProyecto", "\302\277Entregado?", nullptr));
        btnGuardarProyecto->setText(QCoreApplication::translate("CrearProyecto", "Guardar Proyecto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CrearProyecto: public Ui_CrearProyecto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREARPROYECTO_H
