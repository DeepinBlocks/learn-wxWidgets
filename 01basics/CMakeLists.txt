cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 14)
add_definitions(-D_FILE_OFFSET_BITS=64 -DWXUSINGDLL -D__WXGTK__)
project(01basics)

add_executable(01basics App.cpp App.h MainWindow.cpp MainWindow.h id.h)

target_link_libraries(${PROJECT_NAME} PUBLIC
        wx_gtk3u_xrc-3.2
        wx_gtk3u_html-3.2
        wx_gtk3u_qa-3.2
        wx_gtk3u_core-3.2
        wx_baseu_xml-3.2
        wx_baseu_net-3.2
        wx_baseu-3.2)


