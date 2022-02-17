#ifndef STAGECONTROLPANEL_H
#define STAGECONTROLPANEL_H

#include <QWidget>

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
    double absoluteX;//X绝对坐标
    double absoluteY;//Y绝对坐标
    double originX;//相对原点X坐标
    double originY;//相对原点Y坐标
    double relativeX;//X相对坐标
    double relativeY;//Y相对坐标
};

#endif // STAGECONTROLPANEL_H
