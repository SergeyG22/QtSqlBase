/********************************************************************************
** Form generated from reading UI file 'QtSQLProject.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTSQLPROJECT_H
#define UI_QTSQLPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtSQLProjectClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *email_obj;
    QLineEdit *surnameEdit;
    QPushButton *name_obj;
    QLineEdit *phoneEdit;
    QPushButton *surname_obj;
    QLineEdit *nameEdit;
    QLineEdit *emailEdit;
    QPushButton *phone_obj;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QSplitter *splitter;
    QPushButton *id_obj;
    QLineEdit *idEdit;
    QTextBrowser *textBrowser;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtSQLProjectClass)
    {
        if (QtSQLProjectClass->objectName().isEmpty())
            QtSQLProjectClass->setObjectName(QStringLiteral("QtSQLProjectClass"));
        QtSQLProjectClass->resize(1094, 579);
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        QtSQLProjectClass->setFont(font);
        QtSQLProjectClass->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(QtSQLProjectClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 300, 311, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Courier"));
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_2->setFont(font1);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: #0ee10e;\n"
"    color: #fff; \n"
"    padding: 10px; \n"
"    border-radius: 15px;\n"
"}\n"
"QPushButton:hover:!pressed {  \n"
"border: 3px solid  #060606 ;      }"));
        pushButton_2->setAutoRepeat(false);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 481, 261));
        QFont font2;
        font2.setPointSize(15);
        layoutWidget->setFont(font2);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        email_obj = new QPushButton(layoutWidget);
        email_obj->setObjectName(QStringLiteral("email_obj"));
        QFont font3;
        font3.setFamily(QStringLiteral("Calibri"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        email_obj->setFont(font3);
        email_obj->setCursor(QCursor(Qt::PointingHandCursor));
        email_obj->setStyleSheet(QLatin1String("QPushButton {\n"
"    background: #1535f4;\n"
"    color: #fff; \n"
"    padding: 10px; \n"
"    border-radius: 5px;\n"
"  \n"
"   }\n"
" QPushButton:hover:!pressed {  background: #fa0707;\n"
"border: 3px solid  #060606 ;      }"));

        gridLayout->addWidget(email_obj, 7, 0, 1, 1);

        surnameEdit = new QLineEdit(layoutWidget);
        surnameEdit->setObjectName(QStringLiteral("surnameEdit"));
        QFont font4;
        font4.setPointSize(17);
        font4.setBold(false);
        font4.setWeight(50);
        surnameEdit->setFont(font4);
        surnameEdit->setStyleSheet(QLatin1String("QLineEdit\n"
"\n"
"{\n"
"border-radius: 5px; \n"
"border: 3px solid  #060606 ;\n"
"background:white;\n"
"}"));

        gridLayout->addWidget(surnameEdit, 4, 1, 1, 1);

        name_obj = new QPushButton(layoutWidget);
        name_obj->setObjectName(QStringLiteral("name_obj"));
        name_obj->setFont(font3);
        name_obj->setCursor(QCursor(Qt::PointingHandCursor));
        name_obj->setStyleSheet(QLatin1String("QPushButton {\n"
"    background: #1535f4;\n"
"    color: #fff; \n"
"    padding: 10px; \n"
"    border-radius: 5px;\n"
"  \n"
"   }\n"
" QPushButton:hover:!pressed {  background: #fa0707;\n"
"border: 3px solid  #060606 ;      }"));

        gridLayout->addWidget(name_obj, 2, 0, 1, 1);

        phoneEdit = new QLineEdit(layoutWidget);
        phoneEdit->setObjectName(QStringLiteral("phoneEdit"));
        phoneEdit->setFont(font4);
        phoneEdit->setStyleSheet(QLatin1String("QLineEdit\n"
"\n"
"{\n"
"border-radius: 5px; \n"
"border: 3px solid  #060606 ;\n"
"background:white;\n"
"}"));

        gridLayout->addWidget(phoneEdit, 5, 1, 1, 1);

        surname_obj = new QPushButton(layoutWidget);
        surname_obj->setObjectName(QStringLiteral("surname_obj"));
        surname_obj->setFont(font3);
        surname_obj->setCursor(QCursor(Qt::PointingHandCursor));
        surname_obj->setStyleSheet(QLatin1String("QPushButton {\n"
"    background: #1535f4;\n"
"    color: #fff; \n"
"    padding: 10px; \n"
"    border-radius: 5px;\n"
"  \n"
"   }\n"
" QPushButton:hover:!pressed {  background: #fa0707;\n"
"border: 3px solid  #060606 ;      }"));

        gridLayout->addWidget(surname_obj, 4, 0, 1, 1);

        nameEdit = new QLineEdit(layoutWidget);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setFont(font4);
        nameEdit->setStyleSheet(QLatin1String("QLineEdit\n"
"\n"
"{\n"
"border-radius: 5px; \n"
"border: 3px solid  #060606 ;\n"
"background:white;\n"
"}"));

        gridLayout->addWidget(nameEdit, 2, 1, 1, 1);

        emailEdit = new QLineEdit(layoutWidget);
        emailEdit->setObjectName(QStringLiteral("emailEdit"));
        emailEdit->setFont(font4);
        emailEdit->setStyleSheet(QLatin1String("QLineEdit\n"
"\n"
"{\n"
"border-radius: 5px; \n"
"border: 3px solid  #060606 ;\n"
"background:white;\n"
"}"));

        gridLayout->addWidget(emailEdit, 7, 1, 1, 1);

        phone_obj = new QPushButton(layoutWidget);
        phone_obj->setObjectName(QStringLiteral("phone_obj"));
        phone_obj->setFont(font3);
        phone_obj->setCursor(QCursor(Qt::PointingHandCursor));
        phone_obj->setStyleSheet(QLatin1String("QPushButton {\n"
"    background: #1535f4;\n"
"    color: #fff; \n"
"    padding: 10px; \n"
"    border-radius: 5px;\n"
"  \n"
"   }\n"
" QPushButton:hover:!pressed {  background: #fa0707;\n"
"border: 3px solid  #060606 ;      }"));

        gridLayout->addWidget(phone_obj, 5, 0, 1, 1);

        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(700, 150, 311, 51));
        QFont font5;
        font5.setFamily(QStringLiteral("Calibri"));
        font5.setPointSize(15);
        font5.setBold(true);
        font5.setWeight(75);
        pushButton_6->setFont(font5);
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"	border-color: rgb(0, 255, 0);\n"
"    background: #1535f4;\n"
"    color: #fff; \n"
"    padding: 10px; \n"
"    border-radius: 5px;\n"
"  \n"
"\n"
"   }\n"
" QPushButton:hover:!pressed {  background: #fa0707;\n"
"border: 3px solid  #060606 ;      }"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(700, 90, 311, 51));
        pushButton->setFont(font5);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"	border-color: rgb(0, 255, 0);\n"
"    background: #1535f4;\n"
"    color: #fff; \n"
"    padding: 10px; \n"
"    border-radius: 5px;\n"
"  \n"
"\n"
"   }\n"
" QPushButton:hover:!pressed {  background: #fa0707;\n"
"border: 3px solid  #060606 ;      }"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(700, 30, 311, 51));
        pushButton_4->setFont(font5);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"	border-color: rgb(0, 255, 0);\n"
"    background: #1535f4;\n"
"    color: #fff; \n"
"    padding: 10px; \n"
"    border-radius: 5px;\n"
"  \n"
"\n"
"   }\n"
" QPushButton:hover:!pressed {  background: #fa0707;\n"
"border: 3px solid  #060606 ;      }"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(700, 210, 311, 51));
        pushButton_3->setFont(font5);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"	border-color: rgb(0, 255, 0);\n"
"    background: #1535f4;\n"
"    color: #fff; \n"
"    padding: 10px; \n"
"    border-radius: 5px;\n"
"  \n"
"\n"
"   }\n"
" QPushButton:hover:!pressed {  background: #fa0707;\n"
"border: 3px solid  #060606 ;      }"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(30, 470, 386, 50));
        splitter->setOrientation(Qt::Horizontal);
        id_obj = new QPushButton(splitter);
        id_obj->setObjectName(QStringLiteral("id_obj"));
        QFont font6;
        font6.setFamily(QStringLiteral("Calibri"));
        font6.setPointSize(14);
        font6.setBold(true);
        font6.setItalic(false);
        font6.setWeight(75);
        font6.setStrikeOut(false);
        id_obj->setFont(font6);
        id_obj->setCursor(QCursor(Qt::PointingHandCursor));
        id_obj->setAutoFillBackground(false);
        id_obj->setStyleSheet(QLatin1String("QPushButton {\n"
"    background: red;\n"
"    color: #fff; \n"
"    padding: 10px; \n"
"  \n"
"  \n"
"   }\n"
" QPushButton:hover:!pressed {  background: #fa0707;\n"
"border: 3px solid  #060606 ;      }"));
        splitter->addWidget(id_obj);
        idEdit = new QLineEdit(splitter);
        idEdit->setObjectName(QStringLiteral("idEdit"));
        idEdit->setFont(font4);
        idEdit->setStyleSheet(QLatin1String("QLineEdit\n"
"\n"
"{ \n"
"border: 3px solid  #060606 ;\n"
"background:white;\n"
"}"));
        splitter->addWidget(idEdit);
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(700, 280, 311, 241));
        textBrowser->setStyleSheet(QLatin1String("textBrowser\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        QtSQLProjectClass->setCentralWidget(centralWidget);
        splitter->raise();
        pushButton->raise();
        pushButton_4->raise();
        pushButton_3->raise();
        pushButton_2->raise();
        layoutWidget->raise();
        pushButton_6->raise();
        textBrowser->raise();
        mainToolBar = new QToolBar(QtSQLProjectClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtSQLProjectClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtSQLProjectClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtSQLProjectClass->setStatusBar(statusBar);
        QWidget::setTabOrder(name_obj, surname_obj);
        QWidget::setTabOrder(surname_obj, phone_obj);
        QWidget::setTabOrder(phone_obj, email_obj);
        QWidget::setTabOrder(email_obj, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_4);
        QWidget::setTabOrder(pushButton_4, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_6);
        QWidget::setTabOrder(pushButton_6, pushButton_3);
        QWidget::setTabOrder(pushButton_3, id_obj);
        QWidget::setTabOrder(id_obj, nameEdit);
        QWidget::setTabOrder(nameEdit, surnameEdit);
        QWidget::setTabOrder(surnameEdit, phoneEdit);
        QWidget::setTabOrder(phoneEdit, emailEdit);
        QWidget::setTabOrder(emailEdit, idEdit);
        QWidget::setTabOrder(idEdit, textBrowser);

        retranslateUi(QtSQLProjectClass);

        QMetaObject::connectSlotsByName(QtSQLProjectClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtSQLProjectClass)
    {
        QtSQLProjectClass->setWindowTitle(QApplication::translate("QtSQLProjectClass", "\320\243\321\207\320\265\321\202\320\275\320\260\321\217 \320\261\320\260\320\267\320\260 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        pushButton_2->setText(QApplication::translate("QtSQLProjectClass", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262 \320\261\320\260\320\267\321\203 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        email_obj->setText(QApplication::translate("QtSQLProjectClass", "\320\235\320\260\320\271\321\202\320\270 \320\277\320\276 \320\277\320\276\321\207\321\202\320\265", nullptr));
        surnameEdit->setText(QString());
        name_obj->setText(QApplication::translate("QtSQLProjectClass", "\320\235\320\260\320\271\321\202\320\270 \320\277\320\276 \320\270\320\274\320\265\320\275\320\270", nullptr));
        surname_obj->setText(QApplication::translate("QtSQLProjectClass", "\320\235\320\260\320\271\321\202\320\270 \320\277\320\276 \321\204\320\260\320\274\320\270\320\273\320\270\320\270", nullptr));
        phone_obj->setText(QApplication::translate("QtSQLProjectClass", "\320\235\320\260\320\271\321\202\320\270 \320\277\320\276 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\321\203", nullptr));
        pushButton_6->setText(QApplication::translate("QtSQLProjectClass", "\320\276\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\277\320\276\320\273\321\217 \320\262\320\262\320\276\320\264\320\260", nullptr));
        pushButton->setText(QApplication::translate("QtSQLProjectClass", "\321\203\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214 \320\277\320\276 ID", nullptr));
        pushButton_4->setText(QApplication::translate("QtSQLProjectClass", "\320\276\321\202\320\276\320\261\321\200\320\260\320\267\320\270\321\202\321\214 \320\262\321\201\320\265 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
        pushButton_3->setText(QApplication::translate("QtSQLProjectClass", "\321\203\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\201\320\265 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
        id_obj->setText(QApplication::translate("QtSQLProjectClass", "\320\235\320\260\320\271\321\202\320\270 \320\277\320\276 ID", nullptr));
        idEdit->setText(QString());
        textBrowser->setHtml(QApplication::translate("QtSQLProjectClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">\320\224\320\260\320\275\320\275\320\260\321\217 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\277\321\200\320\265\320\264\321\201\321\202\320\260\320\262\320\273\321\217\320\265\321\202 \321\201\320\276\320\261\320\276\320\271 \320\277\321\200\320\276\321\201\321\202\321\203\321\216 \320\261\320\260\320\267\321\203 \320\264\320\260\320\275\320\275\321\213\321\205.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:"
                        "0px;\"><span style=\" font-size:9pt;\">1)\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\320\265 \320\277\320\276\320\273\321\217:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">- \320\235\320\260\320\271\321\202\320\270 \320\277\320\276 \320\270\320\274\320\265\320\275\320\270</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">- \320\235\320\260\320\271\321\202\320\270 \320\277\320\276 \321\204\320\260\320\274\320\270\320\273\320\270\320\270</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">- \320\235\320\260\320\271\321\202\320\270 \320\277\320\276 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\321\203</span></p>\n"
"<p style=\" mar"
                        "gin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">- \320\235\320\260\320\271\321\202\320\270 \320\277\320\276 \320\277\320\276\321\207\321\202\320\265</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">2)\320\235\320\260\320\266\320\274\320\270\321\202\320\265 \320\272\320\275\320\276\320\277\320\272\321\203 &quot;\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262 \320\261\320\260\320\267\321\203 \320\264\320\260\320\275\320\275\321\213\321\205&quot;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">3)\320\247\321\202\320\276\320\261\321\213 \320\275\320\260\320\271\321\202\320\270 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321"
                        "\217 \320\277\320\276 ID (\321\203\320\275\320\270\320\272\320\260\320\273\321\214\320\275\320\276\320\274\321\203 \320\270\320\275\320\264\320\270\321\204\320\270\320\272\320\260\321\202\320\276\321\200\321\203), \320\262\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 ID \320\270 \320\275\320\260\320\266\320\274\320\270\321\202\320\265 \320\272\320\275\320\276\320\277\320\272\321\203 &quot;\320\235\320\260\320\271\321\202\320\270 \320\277\320\276 ID&quot;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">4)\320\247\321\202\320\276\320\261\321\213 \321\203\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214, \320\262\320\262\320\265\320\264\320\270\321\202\320\265 \320\262 \320\277\320\276\320\273\320\265 &quot;\320\235\320\260\320\271\321\202\320\270 \320\277\320\276 ID&quot;</span></p>\n"
"<p style=\" margi"
                        "n-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">\320\265\320\263\320\276 \320\275\320\276\320\274\320\265\321\200 \320\270 \320\275\320\260\320\266\320\274\320\270\321\202\320\265 \320\272\320\275\320\276\320\277\320\272\321\203 &quot;\321\203\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214 \320\277\320\276 ID&quot; \320\275\320\260 \320\277\320\260\320\275\320\265\320\273\320\270 \321\201\320\277\321\200\320\260\320\262\320\260</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtSQLProjectClass: public Ui_QtSQLProjectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTSQLPROJECT_H
