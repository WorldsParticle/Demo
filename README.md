# Demo project
<!--[![Build Status](https://travis-ci.org/eroween/DefaultProject.svg?branch=master)](https://travis-ci.org/eroween/DefaultProject)-->
<!--[![Build status](https://ci.appveyor.com/api/projects/status/github/eroween/DefaultProject?svg=true)](https://ci.appveyor.com/project/eroween/DefaultProject)-->
<!--[![License: GPL v3](https://img.shields.io/badge/License-GPL%20v3-blue.svg)](http://www.gnu.org/licenses/gpl-3.0)-->

This project is used to display a scene with the worldparticles engine.

# Compilation

## Release

```shell
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=release ..
make
```

## Debug

The debug compilation add extra flags enabling debugging environment to trace
the program.

```shell
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=debug ..
make
```

