#ifndef PROCESSINGTOOL_H
#define PROCESSINGTOOL_H

#include <QObject>
#include <QList>

class DataStorage
   {
   QList<qreal> values;
   qreal valueScope[2];
   };


class ProcessingTool : public QObject
   {
   Q_OBJECT

   DataStorage *inStorage;
   DataStorage *outStorage;
   void setInputStorage(DataStorage *value){ inStorage = value; }

public:
   explicit ProcessingTool(DataStorage &in, QObject *parent = 0);

   DataStorage *getOutputStorage() const { return outStorage; }

signals:
   void processingDone(QObject*); // maybe void;

public slots:
   };

#endif // PROCESSINGTOOL_H
