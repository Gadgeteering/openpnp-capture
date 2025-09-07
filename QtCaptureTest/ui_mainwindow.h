/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *frameDisplay;
    QComboBox *cameraChooser;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSlider *sharpnessSlider;
    QSlider *powerlineFreqSlider;
    QLabel *label_13;
    QSlider *gainSlider;
    QLabel *label_2;
    QLabel *label;
    QSlider *exposureSlider;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_4;
    QSlider *contrastSlider;
    QSlider *whitebalanceSlider;
    QSlider *gammaSlider;
    QSlider *brightnessSlider;
    QLabel *label_8;
    QLabel *label_3;
    QCheckBox *autoWhiteBalance;
    QSlider *zoomSlider;
    QCheckBox *autoExposure;
    QLabel *label_9;
    QCheckBox *autoGain;
    QSlider *focusSlider;
    QCheckBox *autoFocus;
    QSlider *saturationSlider;
    QLabel *label_6;
    QSlider *backlightSlider;
    QLabel *label_11;
    QLabel *label_10;
    QSlider *hueSlider;
    QLabel *label_12;
    QPlainTextEdit *logWidget;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(846, 540);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        frameDisplay = new QLabel(centralWidget);
        frameDisplay->setObjectName("frameDisplay");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(frameDisplay->sizePolicy().hasHeightForWidth());
        frameDisplay->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(frameDisplay);

        cameraChooser = new QComboBox(centralWidget);
        cameraChooser->setObjectName("cameraChooser");

        verticalLayout->addWidget(cameraChooser);

        frame = new QFrame(centralWidget);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(0);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy2);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        sharpnessSlider = new QSlider(groupBox);
        sharpnessSlider->setObjectName("sharpnessSlider");
        sharpnessSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sharpnessSlider, 14, 1, 1, 1);

        powerlineFreqSlider = new QSlider(groupBox);
        powerlineFreqSlider->setObjectName("powerlineFreqSlider");
        powerlineFreqSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(powerlineFreqSlider, 16, 1, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");

        gridLayout->addWidget(label_13, 16, 0, 1, 1);

        gainSlider = new QSlider(groupBox);
        gainSlider->setObjectName("gainSlider");
        gainSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(gainSlider, 3, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        exposureSlider = new QSlider(groupBox);
        exposureSlider->setObjectName("exposureSlider");
        exposureSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(exposureSlider, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 9, 0, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        contrastSlider = new QSlider(groupBox);
        contrastSlider->setObjectName("contrastSlider");
        contrastSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(contrastSlider, 6, 1, 1, 1);

        whitebalanceSlider = new QSlider(groupBox);
        whitebalanceSlider->setObjectName("whitebalanceSlider");
        whitebalanceSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(whitebalanceSlider, 9, 1, 1, 1);

        gammaSlider = new QSlider(groupBox);
        gammaSlider->setObjectName("gammaSlider");
        gammaSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(gammaSlider, 2, 1, 1, 1);

        brightnessSlider = new QSlider(groupBox);
        brightnessSlider->setObjectName("brightnessSlider");
        brightnessSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(brightnessSlider, 5, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 15, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        autoWhiteBalance = new QCheckBox(groupBox);
        autoWhiteBalance->setObjectName("autoWhiteBalance");

        gridLayout->addWidget(autoWhiteBalance, 10, 1, 1, 1);

        zoomSlider = new QSlider(groupBox);
        zoomSlider->setObjectName("zoomSlider");
        zoomSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(zoomSlider, 15, 1, 1, 1);

        autoExposure = new QCheckBox(groupBox);
        autoExposure->setObjectName("autoExposure");

        gridLayout->addWidget(autoExposure, 1, 1, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 7, 0, 1, 1);

        autoGain = new QCheckBox(groupBox);
        autoGain->setObjectName("autoGain");

        gridLayout->addWidget(autoGain, 4, 1, 1, 1);

        focusSlider = new QSlider(groupBox);
        focusSlider->setObjectName("focusSlider");
        focusSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(focusSlider, 12, 1, 1, 1);

        autoFocus = new QCheckBox(groupBox);
        autoFocus->setObjectName("autoFocus");

        gridLayout->addWidget(autoFocus, 13, 1, 1, 1);

        saturationSlider = new QSlider(groupBox);
        saturationSlider->setObjectName("saturationSlider");
        saturationSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(saturationSlider, 7, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 12, 0, 1, 1);

        backlightSlider = new QSlider(groupBox);
        backlightSlider->setObjectName("backlightSlider");
        backlightSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(backlightSlider, 11, 1, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");

        gridLayout->addWidget(label_11, 11, 0, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");

        gridLayout->addWidget(label_10, 8, 0, 1, 1);

        hueSlider = new QSlider(groupBox);
        hueSlider->setObjectName("hueSlider");
        hueSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(hueSlider, 8, 1, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");

        gridLayout->addWidget(label_12, 14, 0, 1, 1);


        horizontalLayout->addWidget(groupBox);

        logWidget = new QPlainTextEdit(frame);
        logWidget->setObjectName("logWidget");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(logWidget->sizePolicy().hasHeightForWidth());
        logWidget->setSizePolicy(sizePolicy3);
        logWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        logWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        logWidget->setUndoRedoEnabled(false);
        logWidget->setReadOnly(true);

        horizontalLayout->addWidget(logWidget);


        verticalLayout->addWidget(frame);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 846, 21));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "OpenPnP-Capture Test Program", nullptr));
        frameDisplay->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Camera Settings", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Power line freq", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Gain", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Exposure", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "White Balance", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Gamma", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Contrast", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Zoom", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Brightness", nullptr));
        autoWhiteBalance->setText(QCoreApplication::translate("MainWindow", "Auto White Balance", nullptr));
        autoExposure->setText(QCoreApplication::translate("MainWindow", "Auto Exposure", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Saturation", nullptr));
        autoGain->setText(QCoreApplication::translate("MainWindow", "Auto Gain", nullptr));
        autoFocus->setText(QCoreApplication::translate("MainWindow", "Auto Focus", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Focus", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Backlight comp", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Hue", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Sharpness", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
