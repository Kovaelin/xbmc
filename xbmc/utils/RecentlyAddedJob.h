/*
 *      Copyright (C) 2005-2013 Team XBMC
 *      http://kodi.tv
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#pragma once

#include "Job.h"

enum ERecentlyAddedFlag
{
  Audio = 0x1,
  Video = 0x2,
  Totals = 0x4
};

class CRecentlyAddedJob : public CJob
{
public:
  explicit CRecentlyAddedJob(int flag);
  static bool UpdateVideo();
  static bool UpdateMusic();
  static bool UpdateTotal();
  bool DoWork() override;
private:
  int m_flag;
};
