/***********************************************************************
 Freeciv - Copyright (C) 2006 - The Freeciv Project
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
***********************************************************************/

#ifndef FC__WIDGET_BUTTON_H
#define FC__WIDGET_BUTTON_H

#define create_icon_button_from_chars(icon, pdest, pCharString, iPtsize, flags) \
        create_icon_button(icon, pdest,                                         \
                           create_utf8_from_char(pCharString, iPtsize),          \
                           flags)

#define create_themeicon_button_from_unichar(pIcon_theme, pdest, pUniChar, pUniCharSize, iPtsize, flags) \
  create_themeicon_button(icon, pdest, create_utf8(pUniChar, pUniCharSize, iPtsize), \
                          flags)

#define create_themeicon_button_from_chars(pIcon_theme, pdest, pCharString, iPtsize, flags) \
  create_themeicon_button(pIcon_theme, pdest,                           \
                          create_utf8_from_char(pCharString,            \
                                                iPtsize),               \
                          flags)

struct widget *create_icon_button(SDL_Surface *icon,
                                  struct gui_layer *pdest, utf8_str *pstr,
                                  Uint32 flags);

struct widget *create_themeicon_button(SDL_Surface *pIcon_theme,
                                       struct gui_layer *pdest, utf8_str *pstr,
                                       Uint32 flags);

int draw_tibutton(struct widget *button, Sint16 start_x, Sint16 start_y);
int draw_ibutton(struct widget *button, Sint16 start_x, Sint16 start_y);

#endif /* FC__WIDGET_BUTTON_H */
