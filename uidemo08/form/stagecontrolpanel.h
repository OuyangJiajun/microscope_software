#ifndef STAGECONTROLPANEL_H
#define STAGECONTROLPANEL_H

#include <QWidget>
#include <mypushbutton.h>

namespace Ui {
class StageControlPanel;
}

class StageControlPanel : public QWidget
{
    Q_OBJECT

public:
    explicit StageControlPanel(QWidget *parent = nullptr);
    ~StageControlPanel();

private:
    Ui::StageControlPanel *ui;
};

#endif // STAGECONTROLPANEL_H
