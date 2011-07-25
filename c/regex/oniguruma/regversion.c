/**********************************************************************

  regversion.c -  Oniguruma (regular expression library)

  Copyright (C) 2004  K.Kosako (sndgk393 AT ybb DOT ne DOT jp)

**********************************************************************/
#include "oniguruma.h"
#include <stdio.h>

extern const char*
onig_version(void)
{
  static char s[12];

  sprintf(s, "%d.%d.%d",
          ONIGURUMA_VERSION_MAJOR,
          ONIGURUMA_VERSION_MINOR,
          ONIGURUMA_VERSION_TEENY);
  return s;
}
