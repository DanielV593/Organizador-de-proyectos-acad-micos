/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *labelTitulo;
    QPushButton *btnCrear;
    QPushButton *btnListar;
    QPushButton *btnActualizar;
    QPushButton *btnEliminar;
    QLabel *labelMensaje;
    QLabel *labelPregunta;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(715, 339);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        labelTitulo = new QLabel(centralwidget);
        labelTitulo->setObjectName("labelTitulo");
        labelTitulo->setGeometry(QRect(300, 70, 131, 20));
        btnCrear = new QPushButton(centralwidget);
        btnCrear->setObjectName("btnCrear");
        btnCrear->setGeometry(QRect(50, 180, 131, 29));
        btnListar = new QPushButton(centralwidget);
        btnListar->setObjectName("btnListar");
        btnListar->setGeometry(QRect(200, 180, 131, 29));
        btnActualizar = new QPushButton(centralwidget);
        btnActualizar->setObjectName("btnActualizar");
        btnActualizar->setGeometry(QRect(350, 180, 131, 29));
        btnEliminar = new QPushButton(centralwidget);
        btnEliminar->setObjectName("btnEliminar");
        btnEliminar->setGeometry(QRect(510, 180, 131, 29));
        labelMensaje = new QLabel(centralwidget);
        labelMensaje->setObjectName("labelMensaje");
        labelMensaje->setGeometry(QRect(160, 10, 411, 61));
        labelPregunta = new QLabel(centralwidget);
        labelPregunta->setObjectName("labelPregunta");
        labelPregunta->setGeometry(QRect(70, 120, 181, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 715, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelTitulo->setText(QCoreApplication::translate("MainWindow", "Menu Principal", nullptr));
        btnCrear->setText(QCoreApplication::translate("MainWindow", "Crear Proyecto", nullptr));
        btnListar->setText(QCoreApplication::translate("MainWindow", "	Listar Proyectos", nullptr));
        btnActualizar->setText(QCoreApplication::translate("MainWindow", "Actualizar Proyecto", nullptr));
        btnEliminar->setText(QCoreApplication::translate("MainWindow", "	Eliminar Proyecto", nullptr));
        labelMensaje->setText(QCoreApplication::translate("MainWindow", "Hola! Bienvenido a tu sistema de Organizacion de Proyectos ", nullptr));
        labelPregunta->setText(QCoreApplication::translate("MainWindow", "Que quieres hacer hoy?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
