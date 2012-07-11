#ifndef _hsensor_h
#define _hsensor_h

class HSensor
{
  float h;
//  float land; \\ Ширина коврика при нулевой высоте(коврик квадратный),при подъеме на метр высота изменяется на 1
//  float weight; \\ ширина коврика с высоты 

public:
  HSensor() {}
 ~virtual HSensor() {}
  float get_h(){}
};

#endif