#include "graphicwindow.h"
#include "ui_graphicwindow.h"

GraphicWindow::GraphicWindow(QWidget *parent) :
   QDockWidget(parent),
   ui(new Ui::GraphicWindow)
   {
   ui->setupUi(this);
   }

GraphicWindow::~GraphicWindow()
   {
   delete ui;
   }
