#include "processingtool.h"





ProcessingTool::ProcessingTool(DataStorage &in, QObject *parent) : QObject(parent)
   {
   setInputStorage(in);

   }
