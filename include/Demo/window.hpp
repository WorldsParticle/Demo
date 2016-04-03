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

#pragma     once

#include    <utility>
#include    <string>

struct  GLFWwindow;

namespace   Demo
{
    ///
    /// \brief This class is used to encapsulate GLFW library.
    ///
    class   window
    {
        public:
            ///
            /// \brief Create a new window with the name "name" and the size "size".
            /// \param name The name of the window that will be created.
            /// \param size The size of the window that will be created.
            ///
            window(const std::string &name, const std::pair<int, int> &size);

            ///
            /// \brief Deleted copy constructor.
            ///
            window(const window &other) = delete;

            ///
            /// \brief Deleted move constructor.
            ///
            window(window &&other) noexcept = delete;

            ///
            /// \brief Destructor.
            ///
            ~window(void) noexcept;

        public:
            ///
            /// \brief Deleted copy assignment constructor.
            ///
            window  &operator=(const window &other) = delete;

            ///
            /// \brief Deleted move assignment operator.
            ///
            window  &operator=(window &&other) noexcept = delete;

        public:
            ///
            /// \brief Return the size of the window.
            ///
            const std::pair<int, int>   &size(void) const;

        public:
            ///
            /// \brief Return true if the window is closing, false otherwise.
            /// \return True or false.
            ///
            bool    should_close(void) const;

        public:
            ///
            /// \brief Update the window.
            ///
            void    update(void);

        private:
            ///
            /// \brief This method is used as a callback for the GLFW library.
            ///
/*            static void     on_key_event(GLFWwindow *window, int key,*/
                    //int scancode, int action, int mods);

        private:
            ///
            /// \brief The size of the window in pixel.
            ///
            std::pair<int, int> m_size;

            ///
            /// \brief The GLFW window pointer used to display a window.
            ///
            GLFWwindow  *m_window;
    };
}
