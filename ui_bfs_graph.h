/********************************************************************************
** Form generated from reading UI file 'bfs_graph.ui'
**
** Created: Sun Mar 26 20:44:48 2017
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BFS_GRAPH_H
#define UI_BFS_GRAPH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BFS_Graph
{
public:
    QWidget *centralwidget;
    QGroupBox *ButtonBox;
    QPushButton *startButton;
    QPushButton *frashButton;
    QPushButton *explainButton;
    QPushButton *pauseButton;
    QPushButton *backButton;
    QGroupBox *groupBox;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit;
    QLabel *label_22;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_3;
    QLineEdit *inforlineEdit;
    QLineEdit *lineEdit_7;
    QLabel *label_21;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_10;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QMenuBar *menubar;

    void setupUi(QMainWindow *BFS_Graph)
    {
        if (BFS_Graph->objectName().isEmpty())
            BFS_Graph->setObjectName(QString::fromUtf8("BFS_Graph"));
        BFS_Graph->resize(1122, 594);
        centralwidget = new QWidget(BFS_Graph);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ButtonBox = new QGroupBox(centralwidget);
        ButtonBox->setObjectName(QString::fromUtf8("ButtonBox"));
        ButtonBox->setGeometry(QRect(30, 20, 531, 131));
        ButtonBox->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        startButton = new QPushButton(ButtonBox);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(40, 30, 75, 31));
        frashButton = new QPushButton(ButtonBox);
        frashButton->setObjectName(QString::fromUtf8("frashButton"));
        frashButton->setGeometry(QRect(394, 30, 75, 31));
        explainButton = new QPushButton(ButtonBox);
        explainButton->setObjectName(QString::fromUtf8("explainButton"));
        explainButton->setGeometry(QRect(40, 80, 75, 31));
        pauseButton = new QPushButton(ButtonBox);
        pauseButton->setObjectName(QString::fromUtf8("pauseButton"));
        pauseButton->setGeometry(QRect(214, 30, 101, 31));
        backButton = new QPushButton(ButtonBox);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(214, 80, 101, 31));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 170, 531, 381));
        groupBox->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Microsoft YaHei UI\";"));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 70, 25, 25));
        lineEdit_2->setMinimumSize(QSize(25, 25));
        lineEdit_2->setMaximumSize(QSize(25, 25));
        lineEdit_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(150, 130, 25, 25));
        lineEdit_5->setMinimumSize(QSize(25, 25));
        lineEdit_5->setMaximumSize(QSize(25, 25));
        lineEdit_5->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(160, 240, 113, 25));
        label_22 = new QLabel(groupBox);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(310, 240, 70, 25));
        lineEdit_1 = new QLineEdit(groupBox);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(220, 20, 25, 25));
        lineEdit_1->setMinimumSize(QSize(25, 25));
        lineEdit_1->setMaximumSize(QSize(25, 25));
        lineEdit_1->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_8 = new QLineEdit(groupBox);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(120, 180, 25, 25));
        lineEdit_8->setMinimumSize(QSize(25, 25));
        lineEdit_8->setMaximumSize(QSize(25, 25));
        lineEdit_8->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(340, 70, 25, 25));
        lineEdit_3->setMinimumSize(QSize(25, 25));
        lineEdit_3->setMaximumSize(QSize(25, 25));
        lineEdit_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        inforlineEdit = new QLineEdit(groupBox);
        inforlineEdit->setObjectName(QString::fromUtf8("inforlineEdit"));
        inforlineEdit->setGeometry(QRect(380, 240, 120, 25));
        lineEdit_7 = new QLineEdit(groupBox);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(400, 130, 25, 25));
        lineEdit_7->setMinimumSize(QSize(25, 25));
        lineEdit_7->setMaximumSize(QSize(25, 25));
        lineEdit_7->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(30, 240, 130, 25));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(50, 130, 25, 25));
        lineEdit_4->setMinimumSize(QSize(25, 25));
        lineEdit_4->setMaximumSize(QSize(25, 25));
        lineEdit_4->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_9 = new QLineEdit(groupBox);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(180, 180, 25, 25));
        lineEdit_9->setMinimumSize(QSize(25, 25));
        lineEdit_9->setMaximumSize(QSize(25, 25));
        lineEdit_9->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(280, 130, 25, 25));
        lineEdit_6->setMinimumSize(QSize(25, 25));
        lineEdit_6->setMaximumSize(QSize(25, 25));
        lineEdit_6->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_10 = new QLineEdit(groupBox);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(210, 130, 25, 25));
        lineEdit_10->setMinimumSize(QSize(25, 25));
        lineEdit_10->setMaximumSize(QSize(25, 25));
        lineEdit_10->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(579, 20, 531, 531));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 400, 21));
        label->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 40, 500, 21));
        label_2->setStyleSheet(QString::fromUtf8(""));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 80, 500, 21));
        label_3->setStyleSheet(QString::fromUtf8(""));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 100, 400, 21));
        label_4->setStyleSheet(QString::fromUtf8(""));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 120, 400, 21));
        label_5->setStyleSheet(QString::fromUtf8(""));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 140, 500, 21));
        label_6->setStyleSheet(QString::fromUtf8(""));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 160, 400, 21));
        label_7->setStyleSheet(QString::fromUtf8(""));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 180, 500, 21));
        label_8->setStyleSheet(QString::fromUtf8(""));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 200, 300, 21));
        label_9->setStyleSheet(QString::fromUtf8(""));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 220, 500, 21));
        label_10->setStyleSheet(QString::fromUtf8(""));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 240, 400, 21));
        label_11->setStyleSheet(QString::fromUtf8(""));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 260, 400, 21));
        label_12->setStyleSheet(QString::fromUtf8(""));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 280, 400, 21));
        label_13->setStyleSheet(QString::fromUtf8(""));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 320, 500, 21));
        label_14->setStyleSheet(QString::fromUtf8(""));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 340, 400, 21));
        label_15->setStyleSheet(QString::fromUtf8(""));
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 360, 400, 21));
        label_16->setStyleSheet(QString::fromUtf8(""));
        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 400, 400, 21));
        label_17->setStyleSheet(QString::fromUtf8(""));
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 420, 400, 21));
        label_18->setStyleSheet(QString::fromUtf8(""));
        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(10, 440, 400, 21));
        label_19->setStyleSheet(QString::fromUtf8(""));
        label_20 = new QLabel(groupBox_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(10, 460, 400, 21));
        label_20->setStyleSheet(QString::fromUtf8(""));
        label_23 = new QLabel(groupBox_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(10, 380, 500, 21));
        label_23->setStyleSheet(QString::fromUtf8(""));
        label_24 = new QLabel(groupBox_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(10, 300, 500, 21));
        label_24->setStyleSheet(QString::fromUtf8(""));
        label_25 = new QLabel(groupBox_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(10, 60, 500, 21));
        label_25->setStyleSheet(QString::fromUtf8(""));
        BFS_Graph->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BFS_Graph);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1122, 23));
        BFS_Graph->setMenuBar(menubar);

        retranslateUi(BFS_Graph);

        QMetaObject::connectSlotsByName(BFS_Graph);
    } // setupUi

    void retranslateUi(QMainWindow *BFS_Graph)
    {
        BFS_Graph->setWindowTitle(QApplication::translate("BFS_Graph", "MainWindow", 0, QApplication::UnicodeUTF8));
        ButtonBox->setTitle(QApplication::translate("BFS_Graph", "\345\212\237\350\203\275\345\214\272", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("BFS_Graph", "\345\274\200\345\247\213", 0, QApplication::UnicodeUTF8));
        frashButton->setText(QApplication::translate("BFS_Graph", "\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        explainButton->setText(QApplication::translate("BFS_Graph", "\350\257\264\346\230\216", 0, QApplication::UnicodeUTF8));
        pauseButton->setText(QApplication::translate("BFS_Graph", "\346\232\202\345\201\234/\347\273\247\347\273\255", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("BFS_Graph", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("BFS_Graph", "\345\271\277\345\272\246\344\274\230\345\205\210\346\220\234\347\264\242", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("BFS_Graph", "<html><head/><body><p><span style=\" font-size:12pt; color:#ff0000;\">\346\217\220\347\244\272\346\241\206:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("BFS_Graph", "<html><head/><body><p><span style=\" font-size:12pt; color:#ff0000;\">\346\267\261\345\272\246\344\274\230\345\205\210\345\272\217\345\210\227:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("BFS_Graph", "TraverBFS", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("BFS_Graph", "<html><head/><body><p><span style=\" font-weight:600;\">void BFSTraverse(Graph G){</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("BFS_Graph", "   for(v=1;v<=G.num;++v)visited[v]=false;", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("BFS_Graph", "   InitQueue(Q);//\345\210\235\345\247\213\345\214\226\345\276\252\347\216\257\351\241\272\345\272\217\351\230\237\345\210\227", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("BFS_Graph", "   for(v=1;v<=G.num;++v)", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("BFS_Graph", "     if(!visited[v]){", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("BFS_Graph", "         visited[v] = true; visit(v);//\351\201\215\345\216\206v\346\211\200\345\234\250\347\232\204\350\277\236\351\200\232\345\210\206\351\207\217", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("BFS_Graph", "         EnQueue(Q,v);//\347\274\226\345\217\267\344\270\272v\347\232\204\351\241\266\347\202\271\345\205\245\351\230\237", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("BFS_Graph", "         while(!QueueEmpty(Q)){//\351\230\237\345\210\227\344\270\215\344\270\272\347\251\272\345\276\252\347\216\257\345\244\204\347\220\206\351\241\266\347\202\271", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("BFS_Graph", "         DeQueue(Q,v0);//v0\345\207\272\351\230\237", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("BFS_Graph", "         w = FirstADJ(G,v0);//\350\216\267\345\276\227\345\275\223\345\211\215\345\275\223\345\211\215\350\276\271\351\223\276\350\241\250\347\232\204\345\244\264\346\214\207\351\222\210", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("BFS_Graph", "         while(w){", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("BFS_Graph", "           if(!visit[w]){", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("BFS_Graph", "             visit(w);  visited[w]=true;", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("BFS_Graph", "            EnQueue(Q,w);//\347\274\226\345\217\267\344\270\272w\351\241\266\347\202\271\345\205\245\351\230\237", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("BFS_Graph", "            }", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("BFS_Graph", "           w = NextADJ(G,v0,v);", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("BFS_Graph", "          }", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("BFS_Graph", "        }", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("BFS_Graph", "      }", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("BFS_Graph", "    }", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("BFS_Graph", "            //\347\247\273\345\212\250\345\210\260\344\270\213\344\270\200\346\235\241\350\276\271\357\274\214\345\217\226\344\270\213\344\270\200\344\270\252\351\202\273\346\216\245\347\202\271", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("BFS_Graph", "            //\346\240\207\350\256\260\347\274\226\345\217\267\344\270\272w\347\232\204\351\241\266\347\202\271\345\267\262\347\273\217\350\256\277\351\227\256", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("BFS_Graph", "   //\350\256\277\351\227\256\346\240\207\350\256\260\346\225\260\347\273\204\345\210\235\345\247\213\345\214\226", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BFS_Graph: public Ui_BFS_Graph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BFS_GRAPH_H
