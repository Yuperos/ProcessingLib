#ifndef GRAPHICWINDOW_H
#define GRAPHICWINDOW_H

#include <QDockWidget>

namespace Ui {
   class GraphicWindow;
   }

class GraphicWindow : public QDockWidget
   {
   Q_OBJECT

public:
   explicit GraphicWindow(QWidget *parent = 0);
   ~GraphicWindow();

private:
   Ui::GraphicWindow *ui;
   };

#endif // GRAPHICWINDOW_H
