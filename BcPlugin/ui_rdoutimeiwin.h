/********************************************************************************
** Form generated from reading UI file 'rdoutimeiwin.ui'
**
** Created: Fri Nov 6 10:51:11 2015
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RDOUTIMEIWIN_H
#define UI_RDOUTIMEIWIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qksearcheditbox.h"

QT_BEGIN_NAMESPACE

class Ui_RdOutImeiWin
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *headGridLayout;
    QLabel *label_9;
    QLabel *rdLabel;
    QLineEdit *makerEdit;
    QLabel *label_10;
    QLabel *label_7;
    QkSearchEditBox *userSearchEditbox;
    QLabel *label_8;
    QkSearchEditBox *whSearchEditbox;
    QLabel *label_6;
    QkSearchEditBox *depSearchEditbox;
    QLabel *label_12;
    QDateEdit *dateEdit;
    QLineEdit *noEdit;
    QLabel *label_2;
    QLabel *idLabel;
    QLineEdit *auditEdit;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *busTypeEdit;
    QkSearchEditBox *venSearchEditbox;
    QLabel *arrivalLabel;
    QLineEdit *arrivalNoEdit;
    QLineEdit *memoEdit;
    QLabel *label_16;
    QTableWidget *tableWidget;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QLineEdit *idxEdit;
    QLineEdit *nameEdit;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QLabel *label_11;
    QLabel *label_4;
    QLineEdit *mEdit;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *label_17;
    QLabel *label_18;
    QGridLayout *gridLayout_3;
    QToolButton *importButton;
    QToolButton *delButton;
    QToolButton *saveButton;
    QToolButton *clearButton;
    QLabel *label_15;
    QTableWidget *tableWidget2;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *RdOutImeiWin)
    {
        if (RdOutImeiWin->objectName().isEmpty())
            RdOutImeiWin->setObjectName(QString::fromUtf8("RdOutImeiWin"));
        RdOutImeiWin->resize(1393, 600);
        centralwidget = new QWidget(RdOutImeiWin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Plain);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setSpacing(1);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Plain);
        frame_4->setLineWidth(0);
        horizontalLayout_4 = new QHBoxLayout(frame_4);
        horizontalLayout_4->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));

        verticalLayout->addWidget(frame_4);

        headGridLayout = new QGridLayout();
        headGridLayout->setContentsMargins(6, 6, 6, 6);
        headGridLayout->setObjectName(QString::fromUtf8("headGridLayout"));
        headGridLayout->setHorizontalSpacing(10);
        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        headGridLayout->addWidget(label_9, 5, 0, 1, 1);

        rdLabel = new QLabel(frame_2);
        rdLabel->setObjectName(QString::fromUtf8("rdLabel"));

        headGridLayout->addWidget(rdLabel, 5, 8, 1, 1);

        makerEdit = new QLineEdit(frame_2);
        makerEdit->setObjectName(QString::fromUtf8("makerEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(makerEdit->sizePolicy().hasHeightForWidth());
        makerEdit->setSizePolicy(sizePolicy);
        makerEdit->setReadOnly(true);

        headGridLayout->addWidget(makerEdit, 3, 3, 1, 1);

        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        headGridLayout->addWidget(label_10, 3, 4, 1, 1);

        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        headGridLayout->addWidget(label_7, 1, 0, 1, 1);

        userSearchEditbox = new QkSearchEditBox(frame_2);
        userSearchEditbox->setObjectName(QString::fromUtf8("userSearchEditbox"));
        sizePolicy.setHeightForWidth(userSearchEditbox->sizePolicy().hasHeightForWidth());
        userSearchEditbox->setSizePolicy(sizePolicy);

        headGridLayout->addWidget(userSearchEditbox, 3, 1, 1, 1);

        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        headGridLayout->addWidget(label_8, 3, 2, 1, 1);

        whSearchEditbox = new QkSearchEditBox(frame_2);
        whSearchEditbox->setObjectName(QString::fromUtf8("whSearchEditbox"));

        headGridLayout->addWidget(whSearchEditbox, 1, 1, 1, 1);

        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        headGridLayout->addWidget(label_6, 2, 0, 1, 1);

        depSearchEditbox = new QkSearchEditBox(frame_2);
        depSearchEditbox->setObjectName(QString::fromUtf8("depSearchEditbox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(depSearchEditbox->sizePolicy().hasHeightForWidth());
        depSearchEditbox->setSizePolicy(sizePolicy2);

        headGridLayout->addWidget(depSearchEditbox, 2, 1, 1, 1);

        label_12 = new QLabel(frame_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);

        headGridLayout->addWidget(label_12, 3, 0, 1, 1);

        dateEdit = new QDateEdit(frame_2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        sizePolicy.setHeightForWidth(dateEdit->sizePolicy().hasHeightForWidth());
        dateEdit->setSizePolicy(sizePolicy);
        dateEdit->setCalendarPopup(true);

        headGridLayout->addWidget(dateEdit, 0, 3, 1, 1);

        noEdit = new QLineEdit(frame_2);
        noEdit->setObjectName(QString::fromUtf8("noEdit"));
        sizePolicy.setHeightForWidth(noEdit->sizePolicy().hasHeightForWidth());
        noEdit->setSizePolicy(sizePolicy);
        noEdit->setDragEnabled(true);
        noEdit->setReadOnly(true);

        headGridLayout->addWidget(noEdit, 0, 1, 1, 1);

        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        headGridLayout->addWidget(label_2, 0, 2, 1, 1);

        idLabel = new QLabel(frame_2);
        idLabel->setObjectName(QString::fromUtf8("idLabel"));
        sizePolicy1.setHeightForWidth(idLabel->sizePolicy().hasHeightForWidth());
        idLabel->setSizePolicy(sizePolicy1);

        headGridLayout->addWidget(idLabel, 0, 0, 1, 1);

        auditEdit = new QLineEdit(frame_2);
        auditEdit->setObjectName(QString::fromUtf8("auditEdit"));
        sizePolicy.setHeightForWidth(auditEdit->sizePolicy().hasHeightForWidth());
        auditEdit->setSizePolicy(sizePolicy);
        auditEdit->setReadOnly(true);

        headGridLayout->addWidget(auditEdit, 3, 5, 1, 1);

        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        headGridLayout->addWidget(label_3, 1, 2, 1, 1);

        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));

        headGridLayout->addWidget(label, 2, 2, 1, 1);

        busTypeEdit = new QLineEdit(frame_2);
        busTypeEdit->setObjectName(QString::fromUtf8("busTypeEdit"));
        sizePolicy.setHeightForWidth(busTypeEdit->sizePolicy().hasHeightForWidth());
        busTypeEdit->setSizePolicy(sizePolicy);

        headGridLayout->addWidget(busTypeEdit, 2, 3, 1, 1);

        venSearchEditbox = new QkSearchEditBox(frame_2);
        venSearchEditbox->setObjectName(QString::fromUtf8("venSearchEditbox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(venSearchEditbox->sizePolicy().hasHeightForWidth());
        venSearchEditbox->setSizePolicy(sizePolicy3);

        headGridLayout->addWidget(venSearchEditbox, 1, 3, 1, 3);

        arrivalLabel = new QLabel(frame_2);
        arrivalLabel->setObjectName(QString::fromUtf8("arrivalLabel"));
        sizePolicy.setHeightForWidth(arrivalLabel->sizePolicy().hasHeightForWidth());
        arrivalLabel->setSizePolicy(sizePolicy);

        headGridLayout->addWidget(arrivalLabel, 2, 4, 1, 1);

        arrivalNoEdit = new QLineEdit(frame_2);
        arrivalNoEdit->setObjectName(QString::fromUtf8("arrivalNoEdit"));
        sizePolicy.setHeightForWidth(arrivalNoEdit->sizePolicy().hasHeightForWidth());
        arrivalNoEdit->setSizePolicy(sizePolicy);
        arrivalNoEdit->setReadOnly(true);

        headGridLayout->addWidget(arrivalNoEdit, 2, 5, 1, 1);

        memoEdit = new QLineEdit(frame_2);
        memoEdit->setObjectName(QString::fromUtf8("memoEdit"));

        headGridLayout->addWidget(memoEdit, 5, 1, 1, 5);


        verticalLayout->addLayout(headGridLayout);


        gridLayout->addWidget(frame_2, 1, 0, 2, 1);

        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_16->setFont(font);
        label_16->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_16, 0, 0, 1, 1);

        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        if (tableWidget->rowCount() < 3)
            tableWidget->setRowCount(3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setCornerButtonEnabled(true);
        tableWidget->setRowCount(3);
        tableWidget->setColumnCount(5);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setHighlightSections(true);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(false);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget->verticalHeader()->setHighlightSections(true);
        tableWidget->verticalHeader()->setStretchLastSection(false);

        gridLayout->addWidget(tableWidget, 4, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(frame_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 9, -1, -1);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        idxEdit = new QLineEdit(frame_3);
        idxEdit->setObjectName(QString::fromUtf8("idxEdit"));
        sizePolicy.setHeightForWidth(idxEdit->sizePolicy().hasHeightForWidth());
        idxEdit->setSizePolicy(sizePolicy);
        idxEdit->setReadOnly(true);

        gridLayout_2->addWidget(idxEdit, 0, 1, 1, 1);

        nameEdit = new QLineEdit(frame_3);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        sizePolicy.setHeightForWidth(nameEdit->sizePolicy().hasHeightForWidth());
        nameEdit->setSizePolicy(sizePolicy);
        nameEdit->setReadOnly(true);

        gridLayout_2->addWidget(nameEdit, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 4, 1, 1);

        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        label_11 = new QLabel(frame_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 1, 0, 1, 1);

        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_4, 0, 2, 1, 1);

        mEdit = new QLineEdit(frame_3);
        mEdit->setObjectName(QString::fromUtf8("mEdit"));

        gridLayout_2->addWidget(mEdit, 1, 1, 1, 3);

        label_14 = new QLabel(frame_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 2, 1, 1, 1);

        label_13 = new QLabel(frame_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 2, 3, 1, 1);

        label_17 = new QLabel(frame_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_2->addWidget(label_17, 2, 0, 1, 1);

        label_18 = new QLabel(frame_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_2->addWidget(label_18, 2, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        importButton = new QToolButton(frame_3);
        importButton->setObjectName(QString::fromUtf8("importButton"));
        importButton->setIconSize(QSize(24, 24));
        importButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_3->addWidget(importButton, 0, 2, 1, 1);

        delButton = new QToolButton(frame_3);
        delButton->setObjectName(QString::fromUtf8("delButton"));
        delButton->setIconSize(QSize(24, 24));
        delButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_3->addWidget(delButton, 0, 4, 1, 1);

        saveButton = new QToolButton(frame_3);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setIconSize(QSize(24, 24));
        saveButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_3->addWidget(saveButton, 0, 1, 1, 1);

        clearButton = new QToolButton(frame_3);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setIconSize(QSize(24, 24));
        clearButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_3->addWidget(clearButton, 0, 3, 1, 1);

        label_15 = new QLabel(frame_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_3->addWidget(label_15, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_3);


        verticalLayout_2->addWidget(frame_3);

        tableWidget2 = new QTableWidget(frame);
        if (tableWidget2->columnCount() < 5)
            tableWidget2->setColumnCount(5);
        if (tableWidget2->rowCount() < 1)
            tableWidget2->setRowCount(1);
        tableWidget2->setObjectName(QString::fromUtf8("tableWidget2"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(tableWidget2->sizePolicy().hasHeightForWidth());
        tableWidget2->setSizePolicy(sizePolicy4);
        tableWidget2->setRowCount(1);
        tableWidget2->setColumnCount(5);

        verticalLayout_2->addWidget(tableWidget2);


        horizontalLayout_2->addWidget(frame);

        RdOutImeiWin->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(RdOutImeiWin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        RdOutImeiWin->setStatusBar(statusbar);
        toolBar = new QToolBar(RdOutImeiWin);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        RdOutImeiWin->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(RdOutImeiWin);

        QMetaObject::connectSlotsByName(RdOutImeiWin);
    } // setupUi

    void retranslateUi(QMainWindow *RdOutImeiWin)
    {
        RdOutImeiWin->setWindowTitle(QApplication::translate("RdOutImeiWin", "MainWindow", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("RdOutImeiWin", "\345\244\207    \346\263\250:", 0, QApplication::UnicodeUTF8));
        rdLabel->setText(QString());
        label_10->setText(QApplication::translate("RdOutImeiWin", "\345\256\241 \346\240\270 \344\272\272:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("RdOutImeiWin", "\344\273\223    \345\272\223:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("RdOutImeiWin", "\345\210\266 \345\215\225 \344\272\272:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("RdOutImeiWin", "\344\270\232\345\212\241\351\203\250\351\227\250:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("RdOutImeiWin", "\344\270\232 \345\212\241 \345\221\230:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("RdOutImeiWin", "\345\207\272\345\272\223\346\227\245\346\234\237:", 0, QApplication::UnicodeUTF8));
        idLabel->setText(QApplication::translate("RdOutImeiWin", "\345\207\272\345\272\223\345\215\225\345\217\267:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("RdOutImeiWin", "\345\256\242    \346\210\267:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RdOutImeiWin", "\345\215\225\346\215\256\347\261\273\345\236\213:", 0, QApplication::UnicodeUTF8));
        arrivalLabel->setText(QApplication::translate("RdOutImeiWin", "\345\217\221\350\264\247\345\215\225\345\217\267:", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("RdOutImeiWin", "\344\270\262\347\240\201\345\207\272\345\272\223", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("RdOutImeiWin", "\345\272\217 \345\210\227 ID:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("RdOutImeiWin", "\345\244\207    \346\263\250:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("RdOutImeiWin", "\345\225\206\345\223\201\346\234\272\345\236\213:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("RdOutImeiWin", "-", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("RdOutImeiWin", "-", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("RdOutImeiWin", "\344\270\262\347\240\201\346\225\260\351\207\217:", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("RdOutImeiWin", "\345\257\274\345\205\245\346\225\260\351\207\217:", 0, QApplication::UnicodeUTF8));
        importButton->setText(QApplication::translate("RdOutImeiWin", "\345\257\274\345\205\245", 0, QApplication::UnicodeUTF8));
        delButton->setText(QApplication::translate("RdOutImeiWin", "\345\210\240\350\241\214", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("RdOutImeiWin", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        clearButton->setText(QApplication::translate("RdOutImeiWin", "\346\270\205\351\231\244", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("RdOutImeiWin", "-", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("RdOutImeiWin", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RdOutImeiWin: public Ui_RdOutImeiWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RDOUTIMEIWIN_H
