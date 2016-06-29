#include "drawassist.h"

int DrawAssist::fColor[][8]={{-1,-1,1,1,1,-1,-1,1},
                             {-1,-1,-1,-1,1,1,1,1},
                             {-1,1,1,-1,-1,-1,1,1}};

QColor DrawAssist::valueColor(qreal value, const qreal &min, const qreal &range, ValueColorType VCT)
   {
   qreal rgb[3]={0,0,0};
   int colorVal=0;
   switch(VCT){
      case VCT_Colored:
         {
         colorVal=((256.0*7.0)/range)*(value - min);
         int j = colorVal/256. + 1;
         for(int i=0; i<3; i++){
            rgb[i]=127.5*(fColor[i][j-1]+1);
            if (fColor[i][j-1]!=fColor[i][j])
               rgb[i]+=fColor[i][j]*(colorVal%256);
            if(rgb[i]>255) rgb[i]=255;
            if(rgb[i]<0) rgb[i]=0;
            }
         } break;
      case VCT_BlackAndWhite:
         {
         colorVal = (256./range)*(value - min);
         if(colorVal>255) colorVal=255;
         if(colorVal<0) colorVal=0;
         for(int i=0;i<3;++i) rgb[i] = colorVal;
         } break;
      default: break;
      }
   return QColor(rgb[0],rgb[1],rgb[2]);
   }



