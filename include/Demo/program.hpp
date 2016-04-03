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

#pragma once

#include    <Engine/Engine.hpp>

#include    "Demo/window.hpp"

namespace   Demo
{
    ///
    /// \brief program entry point.
    ///
    class       program final
    {
        public:
            ///
            /// \brief Constructor with program arguments.
            /// \param argc Number of arguments in the argv array.
            /// \param argv The array of arguments.
            ///
            program(int argc, char *argv[]);

            ///
            /// \brief Deleted copy constructor.
            ///
            program(const program &other) = delete;

            ///
            /// \brief Deleted move constructor.
            ///
            program(program &&other) noexcept = delete;

            ///
            /// \brief Destructor.
            ///
            ~program(void);

        public:
            ///
            /// \brief Deleted copy assignment operator.
            ///
            program     &operator=(const program &other) = delete;

            ///
            /// \brief Deleted move assignment operator.
            ///
            program     &operator=(program &&other) noexcept = delete;

        public:
            ///
            /// \brief This method run the program.
            /// \return EXIT_SUCCESS if the program success in this task,
            ///     EXIT_FAILURE otherwise.
            ///
            int     run(void);

        private:
            ///
            /// \brief The window used to display the content.
            ///
            window  m_window;

            ///
            /// \brief The worldparticle engine instance used in the program.
            ///
            Engine::Core    m_engine;
    };
}
