#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QtCore>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QCheckBox>
#include <QRadioButton>
#include <QSpinBox>
#include <QVBoxLayout>

class SettingsWindow : public QWidget
{
    Q_OBJECT
public:
    explicit SettingsWindow(QWidget *parent = 0);
    void loadConfiguration();

private slots:
    void eventSave();

private:
    QGridLayout _ControlGrid;

    QLabel      _lblGeneralSettings;
    QCheckBox   _lblAutomark;
    QCheckBox   _lblPlainTextOnly;
    QCheckBox   _lblSysTrayIcon;
    QSpinBox    _txtAutomarkDelay;

    QLabel   _lblMailInSettings;
    QLabel   _lblMailInIdleTimeout;
    QLabel   _lblMailInRefreshInterval;

    QSpinBox   _txtIdleTimeout;
    QSpinBox   _txtRefreshInterval;

    QLabel      _lblMailOutSettings;
    QCheckBox   _lblSaveOutgoing;
    QCheckBox   _lblSendBURL;

    QLabel          _lblOfflineSettings;
    QRadioButton    _rdbNoCache;
    QRadioButton    _rdbAlwaysCache;
    QRadioButton    _rdbLimitedCached;
    QSpinBox   _txtCacheDuration;

    QPushButton _btnSave;
    QPushButton _btnCancel;

    QHBoxLayout _lytCommands;
};

extern SettingsWindow* settingsWindowPtr;

#endif // SETTINGSDIALOG_H
