#pragma once

#include "util.h"

RICH_ENUM(TutorialState,
  WELCOME,
  INTRO,
  INTRO2,
  CUT_TREES,
  BUILD_STORAGE,
  CONTROLS1,
  CONTROLS2,
  GET_200_WOOD,
  DIG_ROOM,
  BUILD_DOOR,
  BUILD_LIBRARY,
  DIG_2_ROOMS,
  ACCEPT_IMMIGRANT,
  TORCHES,
  FLOORS,
  BUILD_WORKSHOP,
  SCHEDULE_WORKSHOP_ITEMS,
  ORDER_CRAFTING,
  EQUIP_WEAPON,
  ACCEPT_MORE_IMMIGRANTS,
  EQUIP_ALL_FIGHTERS,
  CREATE_TEAM,
  CONTROL_TEAM,
  CONTROL_MODE_MOVEMENT,
  FULL_CONTROL,
  DISCOVER_VILLAGE,
  KILL_VILLAGE,
  LOOT_VILLAGE,
  LEAVE_CONTROL,
  SUMMARY1,
  RESEARCH,
  HELP_TAB,
  MINIMAP_BUTTONS,
  SUMMARY2,
  FINISHED
);

class TString;
TString getMessage(TutorialState, bool controller);
