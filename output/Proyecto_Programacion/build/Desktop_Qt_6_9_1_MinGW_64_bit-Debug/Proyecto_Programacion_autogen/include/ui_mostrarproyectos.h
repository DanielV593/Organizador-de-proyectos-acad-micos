/********************************************************************************
** Form generated from reading UI file 'mostrarproyectos.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOSTRARPROYECTOS_H
#define UI_MOSTRARPROYECTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_MostrarProyectos
{
public:
    QLabel *labelTitulo;
    QTableWidget *tablaProyectos;
    QPushButton *btnCerrar;

    void setupUi(QDialog *MostrarProyectos)
    {
        if (MostrarProyectos->objectName().isEmpty())
            MostrarProyectos->setObjectName("MostrarProyectos");
        MostrarProyectos->resize(700, 450);
        labelTitulo = new QLabel(MostrarProyectos);
        labelTitulo->setObjectName("labelTitulo");
        labelTitulo->setGeometry(QRect(280, 20, 251, 30));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        labelTitulo->setFont(font);
        tablaProyectos = new QTableWidget(MostrarProyectos);
        if (tablaProyectos->columnCount() < 5)
            tablaProyectos->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablaProyectos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablaProyectos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablaProyectos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tablaProyectos->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tablaProyectos->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tablaProyectos->setObjectName("tablaProyectos");
        tablaProyectos->setGeometry(QRect(20, 70, 660, 320));
        btnCerrar = new QPushButton(MostrarProyectos);
        btnCerrar->setObjectName("btnCerrar");
        btnCerrar->setGeometry(QRect(300, 400, 100, 30));

        retranslateUi(MostrarProyectos);

        QMetaObject::connectSlotsByName(MostrarProyectos);
    } // setupUi

    void retranslateUi(QDialog *MostrarProyectos)
    {
        MostrarProyectos->setWindowTitle(QCoreApplication::translate("MostrarProyectos", "Lista de Proyectos", nullptr));
        labelTitulo->setText(QCoreApplication::translate("MostrarProyectos", "Proyectos Registrados", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tablaProyectos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MostrarProyectos", "C\303\263digo", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablaProyectos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MostrarProyectos", "Nombre", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tablaProyectos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MostrarProyectos", "Materia", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tablaProyectos->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MostrarProyectos", "Integrantes", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tablaProyectos->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MostrarProyectos", "Entregado", nullptr));
        btnCerrar->setText(QCoreApplication::translate("MostrarProyectos", "Cerrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MostrarProyectos: public Ui_MostrarProyectos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOSTRARPROYECTOS_H
