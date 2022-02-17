#ifndef CAMERAPANEL_H
#define CAMERAPANEL_H

#include <QWidget>

namespace Ui {
class CameraPanel;
}

class CameraPanel : public QWidget
{
    Q_OBJECT

public:
    explicit CameraPanel(QWidget *parent = nullptr);
    ~CameraPanel();

private:
    Ui::CameraPanel *ui;
    bool flag_camera=false;//相机打开的标志
    bool flag_video=false;//正在录像的标志
};

#endif // CAMERAPANEL_H
