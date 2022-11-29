#include "mapdialog.h"
#include "ui_mapdialog.h"


using namespace std;

MapDialog::MapDialog( int userId, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MapDialog),
    userId(userId)
{
    ui->setupUi(this);
    QPixmap pix(":/information.png");
    ui->label_info->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));

    helper.open();

    QQuickItem *root = ui->quickWidget->rootObject();

    connect(root, SIGNAL(onAddPoint(QVariant, QVariant,QVariant)), this, SLOT(addPoint(QVariant, QVariant,QVariant)));
    connect(root, SIGNAL(onPointClicked(QVariant)), this, SLOT(pointClicked(QVariant)));
    connect(this, SIGNAL(doAddPoint(QVariant, QVariant, QVariant)), root, SLOT(doAddPoint(QVariant, QVariant, QVariant)));

    connect(ui->Profile, SIGNAL(click()), this, SLOT());



    updatePointList();


}




MapDialog::~MapDialog()
{
    delete ui;
    helper.open();
}

void MapDialog::updatePointList()
{
    QList<PointEntity> list = helper.getPointList(userId);
    for(PointEntity entity : list) {
        emit doAddPoint(entity.getId(), entity.getLatitude(), entity.getLongitude());
    }
}

void MapDialog::addPoint(QVariant latitude, QVariant longitude, QVariant name)
{

    int pointId = helper.addPoint(userId, latitude.toDouble(), longitude.toDouble(), name.toString());
    PictureDialog dialog(pointId);
    dialog.setModal(true);
    //dialog.exec();

    emit doAddPoint(pointId, latitude, longitude);


}

void MapDialog::pointClicked(QVariant pointId)
{
    PictureDialog dialog(pointId.toInt());
    dialog.setModal(true);
    dialog.exec();
}

void MapDialog::addLocationInformationList(){
    QFile readFile(":/LocationInformationList.txt");
    if (!readFile.open(QIODevice::ReadOnly)){
        QMessageBox::information (0, "error", readFile.errorString());
    }

    QTextStream in(&readFile);

    while (!in.atEnd()){
        QString line = in.readLine();

        QStringList locationElement = line.split(u',');
        QString name=locationElement[0];
        QString lat=locationElement[1];
        QString longt=locationElement[2];
        addPoint(lat,longt,name);
    }
    readFile.close();
}

void MapDialog::mousePressEvent(QMouseEvent *event)
{
    ProfileDialog dialog(userId);
    dialog.setWindowTitle("Profile");
    dialog.setModal(true);
    dialog.exec();
    emit clicked();
}

void MapDialog::on_button_recommend_clicked()
{
        addLocationInformationList();
}

