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

#include    <stdexcept>
#define GLFW_INCLUDE_NONE
#include    <GLFW/glfw3.h>

#include    "Demo/window.hpp"

namespace   Demo
{
    window::window(const std::string &name, const std::pair<int, int> &size) :
        m_size(0, 0),
        m_window(nullptr)
    {
        if (!glfwInit()) {
            throw std::runtime_error("GLFW library couldn't be initialised.");
        }
        this->m_window = glfwCreateWindow(size.first, size.second, name.c_str(),
                nullptr, nullptr);
        glfwMakeContextCurrent(this->m_window);
        //glfwSetKeyCallback(this->m_window, &on_key_event);
    }

    window::~window(void) noexcept
    {
        glfwDestroyWindow(this->m_window);
        glfwTerminate();
    }



    const std::pair<int, int> &
    window::size(void) const
    {
        return this->m_size;
    }



    bool
    window::should_close(void) const
    {
        return glfwWindowShouldClose(this->m_window);
    }



    void
    window::update(void)
    {
        glfwSwapBuffers(this->m_window);
        glfwPollEvents();
    }

    ///
    /// GLFW Callback
    ///

/*    void*/
    //program::on_key_event(GLFWwindow *t_window, int t_key, int t_scancode,
            //int t_action, int t_mods)
    //{
        //std::cout << t_scancode << std::endl;
    //}



}
