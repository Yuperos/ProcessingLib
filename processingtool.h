#ifndef PROCESSINGTOOL_H
#define PROCESSINGTOOL_H

#include <QObject>
#include <QList>

enum ScopeType{
   ST_Auto = 0,
   ST_Custom = 1
   };

class DataStorage : public QList<qreal>
   {
   qreal valueScope[2][2]={{0,0},{0,0}};
   ScopeType currentScopeType=ST_Custom;
public:
   explicit DataStorage() : QList(){}

   void setMin(qreal min, ScopeType st=ST_Custom){valueScope[0][st] = min;}
   void setRange(qreal range, ScopeType st=ST_Custom){valueScope[1][st] = range;}
   void setMax(qreal max, ScopeType st=ST_Custom){valueScope[1][st] = max-valueScope[0][st];}

   void suggestMax(qreal max, ScopeType st=ST_Auto){if(max > (valueScope[0][st] + valueScope[1][st])) setMax(max, st);}
   void suggestMin(qreal min, ScopeType st=ST_Auto){if(min < (valueScope[0][st])) setMin(min, st);}

   void setScopeType(const ScopeType &value);
   void append(const qreal &t){

      QList<qreal>::append(t);
      }
   };


class ProcessingTool : public QObject
   {
   Q_OBJECT

   DataStorage *inStorage;
   DataStorage *outStorage;
   int sequenceLength;

   void setInputStorage(DataStorage *value){ inStorage = value; }

public:
   explicit ProcessingTool(DataStorage *in, QObject *parent = 0);
   DataStorage *getOutputStorage() const { return outStorage; }

signals:
   void processingDone(QObject*); // maybe void;

public slots:
   };

#endif // PROCESSINGTOOL_H
