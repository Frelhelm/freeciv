/********************************************************************** 
 Freeciv - Copyright (C) 1996 - A Kjeldberg, L Gregersen, P Unold
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
***********************************************************************/
#ifndef FC__UNITHAND_H
#define FC__UNITHAND_H

#include "unit.h"

#include "hand_gen.h"

bool handle_unit_move_request(struct unit *punit, struct tile *ptile,
			     bool igzoc, bool move_diplomat_city);
void handle_unit_activity_request(struct unit *punit, 
				  enum unit_activity new_activity);
void real_unit_change_homecity(struct unit *punit, struct city *new_pcity);

#endif  /* FC__UNITHAND_H */
