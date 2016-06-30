#ifndef PRIMALWINDOW_H
#define PRIMALWINDOW_H

#include <time.h>
#include <processingtool.h>

class PrimalWindow
   {

   clock_t timeScope[2], *cursorTime;
   ProcessingTool *

public:
   PrimalWindow();
   inline virtual void setTimeBegin(const clock_t &begin) { timeScope[0] = begin; }
   inline virtual void setTimeRange(const clock_t &range) { timeScope[1] = range; }
   inline virtual void setTimeScope(const clock_t &begin, const clock_t &range){ setTimeBegin(begin); setTimeRange(range); }
   virtual setOutDataLocation();

public slots:
   virtual void appendData();
   };

#endif // PRIMALWINDOW_H
