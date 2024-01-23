#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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

void MainWindow::on_horizontalSliderShiftX_2_valueChanged(int value)
{
    ui->animationViewer->changeX_2(value);
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
      QString info = "Name: " + name + "Vertex: " + QString::number(ui->animationViewer->obj->amount_vertex - 1) + ", Polygons: " + QString::number(ui->animationViewer->obj->amount_polygon - 1);
      ui->modelInfoLabel->setText("Model info: " + info);
  }

}
