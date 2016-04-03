//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3 of the License, or
// any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; If not, see <http://www.gnu.org/licenses/>.
//
// Copyright (C) 2016 Martin-Pierrat Louis (louismartinpierrat@gmail.com)
//

#include    <iostream>
#include    <cstdlib>

#include    "Demo/program.hpp"
#include    "Demo/version.hpp"

namespace   Demo
{

    program::program(int argc, char *argv[]) :
        m_window("Demo", std::make_pair(1080, 720)),
        m_engine()
    {
        std::cout << "Program launched with : " << "\n";
        for (int i = 0 ; i < argc ; ++i) {
            std::cout << "\t" << argv[i] << "\n";
        }
        std::cout << "as arguments."<< std::endl;
    }

    program::~program(void)
    {
        // nothing to do.
    }



    int
    program::run(void)
    {
        std::cout << "Project version : " << DEMO_PROJECT_VERSION_FULL << std::endl;
        this->m_engine.load("./teapot.off");
        while (this->m_window.should_close() == false)
        {
            this->m_engine.update();
            this->m_engine.render();
            this->m_window.update();
        }
        return EXIT_SUCCESS;
    }

}
