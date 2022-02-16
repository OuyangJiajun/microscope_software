#include "appdata.h"
#include "quihelper.h"

QString AppData::Version = "V1版本开发中";
QString AppData::TitleFlag = "凯佳光科显微镜软件";

//默认宽高
int AppData::RowHeight = 25;
int AppData::RightWidth = 180;
int AppData::FormWidth = 950;
int AppData::FormHeight = 650;

void AppData::checkRatio()
{
    //根据分辨率设定宽高，如果宽度>1400，修改默认宽高
    int width = QUIHelper::deskWidth();
    if (width > 1440) {
        RowHeight = RowHeight < 25 ? 25 : RowHeight;
        RightWidth = RightWidth < 220 ? 220 : RightWidth;
        FormWidth = FormWidth < 1250 ? 1250 : FormWidth;
        FormHeight = FormHeight < 850 ? 850 : FormHeight;
    }
}
