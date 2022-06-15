#ifndef LEDCONTROLPANEL_H
#define LEDCONTROLPANEL_H

#include <QWidget>

namespace Ui {
class ledControlPanel;
}

class ledControlPanel : public QWidget
{
    Q_OBJECT

public:
    explicit ledControlPanel(QWidget *parent = nullptr);
    ~ledControlPanel();

private:
    Ui::ledControlPanel *ui;
    double current;//当前电流
    double maxCurrent;//最大电流
};

#endif // LEDCONTROLPANEL_H
