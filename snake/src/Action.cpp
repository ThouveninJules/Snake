#include "../include/struct.hpp"
void Action()// dépacement et suivis des cases                                                       
  
{

  for(int i = size ; i>0 ; i--)
    {
      s[i].x = s[i-1].x;
      s[i].y = s[i-1].y;
    }
  if(var == 0)
    {
      s[0].y -= 1;
    }
  if(var == 1)
    {
      s[0].x += 1;
    }
  if(var == 2)
    {
      s[0].y += 1;
    }
  if(var == 3)
    {
      s[0].x -= 1;
    }

}
