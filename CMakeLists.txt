cmake_minimum_required(VERSION 3.17)
project(QTTest)

set(CMAKE_CXX_STANDARD 14)

#set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_PREFIX_PATH C:/Qt/Qt5.8.0/5.8/mingw53_32) #这里需要填入自己安装的路径

#set(UI_FILES)

#set(RC_FILES)

#set(QRC_FILES)

#set(SOURCE_FILES main.cpp mainwindow.cpp mainwindow.h)

find_package(Qt5 COMPONENTS Widgets REQUIRED)



add_executable(QTTest main.cpp info.cpp info.h)

target_link_libraries(QTTest Qt5::Widgets)

#qt5_use_modules(Hello Core Widgets Gui)