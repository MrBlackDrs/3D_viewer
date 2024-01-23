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
    scale = 1.0;
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
    ui->animationViewer->changeX_2(value - x_shift);
    x_shift = value;
//    ui->animationViewer->s21_update(x_shift, y_shift, z_shift, angle_x, angle_y, angle_z, scale);
}

void MainWindow::on_horizontalSliderShiftY_2_valueChanged(int value)
{
    ui->animationViewer->changeY_2(value - y_shift);
    y_shift = value;
//    ui->animationViewer->s21_update(x_shift, y_shift, z_shift, angle_x, angle_y, angle_z, scale);

}

void MainWindow::on_horizontalSliderShiftZ_2_valueChanged(int value)
{
    ui->animationViewer->changeZ_2(value - z_shift);
    z_shift = value;
//    ui->animationViewer->s21_update(x_shift, y_shift, z_shift, angle_x, angle_y, angle_z, scale);
}
//////////////////////////// ротейты
void MainWindow::on_horizontalSliderRotX_valueChanged(int value) {
    angle_x = value;
    ui->animationViewer->s21_update(x_shift, y_shift, z_shift, angle_x, angle_y, angle_z, scale);
//    ui->animationViewer->rotateX(value);
}

void MainWindow::on_horizontalSliderRotY_valueChanged(int value) {
    angle_y = value;
    ui->animationViewer->s21_update(x_shift, y_shift, z_shift, angle_x, angle_y, angle_z, scale);
}

void MainWindow::on_horizontalSliderRotZ_valueChanged(int value) {
    angle_z = value;
    ui->animationViewer->s21_update(x_shift, y_shift, z_shift, angle_x, angle_y, angle_z, scale);
}

void MainWindow::on_horizontalSliderScale_valueChanged(int value) {
    ui->animationViewer->changeScale(value / 10.0 / scale);
    scale = value / 10.0;
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

// void MainWindow::on_snap_btn_clicked() {
//   if (ui->animationViewer->obj) {
//     QFileDialog dialogConnectImage(this);
//     QDateTime current_date = QDateTime::currentDateTime();
//     QString formattedTime = current_date.toString("yyyy-MM-dd hh.mm.ss");
//     QString name_pattern = "Screen Shot " + formattedTime + ".jpeg";
//     QString image_name = dialogConnectImage.getSaveFileName(
//         this, tr("Save a screenshot"), name_pattern,
//         tr("image (*.jpeg *.bmp)"));
//     if (image_name.length() >= 1) {
//       QImage img = ui->OpenGlWidget->grabFramebuffer();
//       img.save(image_name);
//       QMessageBox messageBoxImage;
//       messageBoxImage.information(0, "", "Screenshot saved successfully");
//     }
//   } else {
//     QMessageBox warning = QMessageBox();
//     warning.setWindowTitle("Error");
//     warning.setText("Please open .obj file to take a screenshot");
//     warning.setIcon(QMessageBox::Warning);
//     warning.exec();
//   }
// }

// void MainWindow::on_gif_btn_clicked() {
//   if (ui->animationViewer->obj) {
//     QDateTime current_date = QDateTime::currentDateTime();
//     QString formattedTime = current_date.toString("yyyy-MM-dd hh.mm.ss");
//     QString name_pattern = "Screen Cast " + formattedTime + ".gif";
//     gif_name = QFileDialog::getSaveFileName(this, tr("Save a gif animation"),
//                                             name_pattern, tr("gif (*.gif)"));
//     if (gif_name != "") {
//       ui->gif_btn->setDisabled(true);
//       gif_frame = new QGifImage;
//       gif_frame->setDefaultDelay(10);
//       timer->setInterval(100);
//       timer->start();
//     }
//   } else {
//     QMessageBox warning = QMessageBox();
//     warning.setWindowTitle("Error");
//     warning.setText("Please open .obj file to take a screencast");
//     warning.setIcon(QMessageBox::Warning);
//     warning.exec();
//   }
// }

// void MainWindow::make_gif() {
//   QImage image = ui->OpenGlWidget->grabFramebuffer();
//   QSize image_size(640, 480);
//   QImage scaled_image = image.scaled(image_size);
//   gif_frame->addFrame(scaled_image);
//   if (frames_counter == 50) {
//     timer->stop();
//     gif_frame->save(gif_name);
//     frames_counter = 0;
//     QMessageBox messageBoxGif;
//     messageBoxGif.information(0, "", "Gif animation saved successfully");
//     delete gif_frame;
//     ui->gif_btn->setText("");
//     ui->gif_btn->setEnabled(true);
//   }
//   frames_counter++;
//   if (!ui->gif_btn->isEnabled()) {
//     ui->gif_btn->setText(QString::number(frames_counter / 10) + "s");
//   }
// }
