#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    x_shift = 0;
    y_shift = 0;
    z_shift = -2;
    angle_x = 0;
    angle_y = 0;
    angle_z = 0;
    scale = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_horizontalSliderShiftZ_valueChanged(int value)
{
    ui->animationViewer->changeZ(value);

}
void MainWindow::on_horizontalSliderShiftX_valueChanged(int value)
{
    ui->animationViewer->changeX(value);

}
void MainWindow::on_horizontalSliderShiftY_valueChanged(int value)
{
    ui->animationViewer->changeY(value);

}

//////////// НАШИ ФУНКЦИИ!!!!!!
void MainWindow::on_horizontalSliderShiftX_2_valueChanged(int value)
{
//    ui->animationViewer->changeX_2(value - x_shift);
    x_shift = value;
    ui->animationViewer->s21_update(x_shift, y_shift, z_shift, angle_x, angle_y, angle_z, scale);
}

void MainWindow::on_horizontalSliderShiftY_2_valueChanged(int value)
{
//    ui->animationViewer->changeY_2(value - y_shift);
    y_shift = value;
    ui->animationViewer->s21_update(x_shift, y_shift, z_shift, angle_x, angle_y, angle_z, scale);

}

void MainWindow::on_horizontalSliderShiftZ_2_valueChanged(int value)
{
//    ui->animationViewer->changeZ_2(value - z_shift);
    z_shift = value;
    ui->animationViewer->s21_update(x_shift, y_shift, z_shift, angle_x, angle_y, angle_z, scale);
}
//////////////////////////// ротейты
void MainWindow::on_horizontalSliderRotX_valueChanged(int value) {
    angle_x = value;
    ui->animationViewer->s21_update(0, 0, 0, angle_x, angle_y, angle_z, scale);
//    ui->animationViewer->rotateX(value);
}

void MainWindow::on_horizontalSliderRotY_valueChanged(int value) {
    angle_y = value;
    ui->animationViewer->s21_update(0, 0, 0, angle_x, angle_y, angle_z, scale);
}

void MainWindow::on_horizontalSliderRotZ_valueChanged(int value) {
    angle_z = value;
    ui->animationViewer->s21_update(0, 0, 0, angle_x, angle_y, angle_z, scale);
}

void MainWindow::on_openFilePushButton_clicked()
{
  QString QString_file_name = QFileDialog::getOpenFileName(this, "Open File", QDir::homePath(), "OBJ File (*.obj)");
  ui->filePathLabel->setText(QString_file_name);
  QStringList list = QString_file_name.split("/");
  QString name = list[list.length() - 1];
  qDebug() << name;
  std::string std_filename = QString_file_name.toStdString();
  ui->animationViewer->filename = new char[std_filename.length() + 1];
  strcpy(ui->animationViewer->filename, std_filename.c_str());
  ui->animationViewer->parse();
  if (ui->animationViewer->obj != NULL) {
      QString info = "Name: " + name + " Vertex: " + QString::number(ui->animationViewer->obj->amount_vertex - 1) + ", Polygons: " + QString::number(ui->animationViewer->obj->amount_polygon - 1);
      ui->modelInfoLabel->setText("Model info: " + info);
  }

}
