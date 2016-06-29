#ifndef DRAWASSIST_H
#define DRAWASSIST_H

#include <QtGui/QColor>
#include "processing_global.h"

enum ValueColorType
   {
   VCT_BlackAndWhite,
   VCT_Colored
   };

class PROCESSINGSHARED_EXPORT DrawAssist
   {
static int fColor[3][8];
   DrawAssist(){}
public:

static QColor valueColor(qreal value, const qreal &min, const qreal &range, ValueColorType VCT = VCT_Colored);
   };

#endif // DRAWASSIST_H
