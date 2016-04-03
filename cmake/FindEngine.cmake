#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3 of the License, or
# any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License along
# with this program; If not, see <http://www.gnu.org/licenses/>.
#
# Copyright (C) 2016 Martin-Pierrat Louis (louismartinpierrat@gmail.com)
#

FIND_PATH(ENGINE_INCLUDE_DIR
        NAMES Engine/Engine.hpp
    HINTS
        ENV ENGINE_DIR
    PATHS
    ~/Library/Frameworks
    /Library/Frameworks
    /sw
    /opt/local
    /opt/csw
    /opt
    )

FIND_LIBRARY(ENGINE_LIBRARY
        NAMES Engine
    HINTS
        ENV ENGINE_DIR
    PATHS
    ~/Library/Frameworks
    /Library/Frameworks
    /sw
    /opt/local
    /opt/csw
    /opt
    )

FIND_PACKAGE_HANDLE_STANDARD_ARGS(Engine
    REQUIRED_VARS ENGINE_LIBRARY ENGINE_INCLUDE_DIR
    )

MARK_AS_ADVANCED(ENGINE_LIBRARY ENGINE_INCLUDE_DIR)
