#include "processingtool.h"





ProcessingTool::ProcessingTool(DataStorage *in, QObject *parent) : QObject(parent)
   {
   setInputStorage(in);

   }

void DataStorage::setCurrentScopeType(bool value)
   {
   currentScopeType = value;
   }

void DataStorage::setCurrentScopeType(const ScopeType &value)
   {
   currentScopeType = value;
   }
