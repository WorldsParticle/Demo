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
    program::program(void) :
        m_window(nullptr)
    {
        if (!glfwInit()) {
            throw std::runtime_error("GLFW library couldn't be initialised.");
        }
    }

    program::program(int argc, char *argv[]) :
        m_window(nullptr)
    {
        if (!glfwInit()) {
            throw std::runtime_error("GLFW library couldn't be initialised.");
        }
        std::cout << "Program launched with : " << "\n";
        for (int i = 0 ; i < argc ; ++i) {
            std::cout << "\t" << argv[i] << "\n";
        }
        std::cout << "as arguments."<< std::endl;
    }

    program::~program(void)
    {
        glfwTerminate();
    }



    int
    program::run(void)
    {
        std::cout << "Project version : " << PROJECT_VERSION_FULL << std::endl;
        this->m_window = glfwCreateWindow(400, 400, "Demo", nullptr, nullptr);
        while (!glfwWindowShouldClose(this->m_window))
        {
            glfwSwapBuffers(this->m_window);
            glfwPollEvents();
        }
        return EXIT_SUCCESS;
    }
}
