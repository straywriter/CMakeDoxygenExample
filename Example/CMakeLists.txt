project(Example)

set(IncludeDir ./Include)
file(GLOB_RECURSE Include ./Include/ *.h)
file(GLOB_RECURSE Src ${CMAKE_CURRENT_SOURCE_DIR}/Src/ *.cpp)
message(${Include})
message(${Src})
set(Examples ${Src})

add_executable(Example ${Examples})
target_include_directories(Example PUBLIC ${IncludeDir})

# doc
add_subdirectory(./Doc)