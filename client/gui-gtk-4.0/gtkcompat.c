/***********************************************************************
 Freeciv - Copyright (C) 1996-2005 - Freeciv Development Team
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
***********************************************************************/

#ifdef HAVE_CONFIG_H
#include <fc_config.h>
#endif

#include <gtk/gtk.h>


#if !GTK_CHECK_VERSION(3,98,0)

GtkWidget *compat_window_new_wrapper(void);

/************************************************************************//**
  Compatibility wrapper for dropping parameter from gtk_window_new() calls
****************************************************************************/
GtkWidget *compat_window_new_wrapper(void)
{
  return gtk_window_new(GTK_WINDOW_TOPLEVEL);
}

#endif /* GTK version < 3.98 */
