#ifndef _CUSTOM_WIDGETS
#define _CUSTOM_WIDGETS

#include <QtCore>
#include <QWidget>
#include <QPainter>
#include <QPixmap>

class ImageLabel : public QWidget
{
    Q_OBJECT

public:
    ImageLabel(QWidget* ptr = nullptr);
    ImageLabel(QString txt, QString fname, QWidget* ptr = nullptr);
    virtual ~ImageLabel();
    void setText(QString txt);
    void setImageFile(QString fname);
    void setUnderline(bool fl = true);

signals:
    void clicked();

protected:
    QSize sizeHint() const;
    void paintEvent(QPaintEvent *event) override;

    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

private:
    QString _Text;
    QPixmap _Image;
    bool    _UnderLine;
    bool    _ClickTrackingOn;
};

////////////////////////////////////////

class Button : public QWidget
{
    Q_OBJECT

public:
    Button(QWidget* ptr = nullptr);
    Button(QString txt, QString fname, QWidget* ptr = nullptr);
    virtual ~Button();
    void setText(QString txt);
    void setImageFile(QString fname);

signals:
    void clicked();

protected:
    QSize sizeHint() const;
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

private:
    QString _Text;
    QPixmap _Image;
    bool    _ClickTrackingOn;
};

#endif