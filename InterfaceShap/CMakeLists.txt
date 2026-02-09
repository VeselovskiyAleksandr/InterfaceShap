# CMakeList.txt: проект CMake для InterfaceShap; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)
# Добавьте источник в исполняемый файл этого проекта.
add_executable (InterfaceShap "src/InterfaceShap.cpp"  "include/BoundingBoxDimensions.h" "include/Shape.h"   "include/Circle.h"    "src/Circle.cpp" "src/Rectangle.cpp" "include/Rectangle.h" "include/Triangle.h" "src/Triangle.cpp" "include/PrintParams.h")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
target_include_directories(InterfaceShap PUBLIC include)