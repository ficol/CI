add_library(factorial factorial.cpp)

add_executable(app main.cpp)
target_link_libraries(app factorial)
