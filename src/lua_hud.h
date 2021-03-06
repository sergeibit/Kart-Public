// SONIC ROBO BLAST 2
//-----------------------------------------------------------------------------
// Copyright (C) 2014-2016 by John "JTE" Muniz.
// Copyright (C) 2014-2016 by Sonic Team Junior.
//
// This program is free software distributed under the
// terms of the GNU General Public License, version 2.
// See the 'LICENSE' file for more details.
//-----------------------------------------------------------------------------
/// \file  lua_hud.h
/// \brief HUD enable/disable flags for Lua scripting

enum hud {
	hud_stagetitle = 0,
	hud_textspectator,

	hud_time,
	hud_gametypeinfo,
	hud_minimap,
	hud_item,
	hud_position,
	hud_minirankings,	// Rankings to the left
	hud_wanted,
	hud_speedometer,
	hud_rankings,		// Tab rankings

	hud_MAX
};

extern boolean hud_running;

boolean LUA_HudEnabled(enum hud option);

void LUAh_GameHUD(player_t *stplyr);
void LUAh_ScoresHUD(void);
