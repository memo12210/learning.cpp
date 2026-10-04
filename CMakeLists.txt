cmake_minimum_required(VERSION 3.30 FATAL_ERROR)

if(NOT CMAKE_EXPERIMENTAL_CXX_IMPORT_STD)
    if(CMAKE_VERSION VERSION_GREATER_EQUAL 4.4)
        set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD f35a9ac6-8463-4d38-8eec-5d6008153e7d)
    elseif(CMAKE_VERSION VERSION_GREATER_EQUAL 4.3)
        set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD 451f2fe2-a8a2-47c3-bc32-94786d8fc91b)
    elseif(CMAKE_VERSION VERSION_GREATER_EQUAL 4.2)
        set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD d0edc3af-4c50-42ea-a356-e2862fe7a444)
    elseif(CMAKE_VERSION VERSION_GREATER_EQUAL 4.0)
        set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD 1942b4fa-b2c5-4546-9385-83f254070067)
    else()
        set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD 0e5b6991-d74f-4b3d-a41c-cf096e0b2508)
    endif()
endif()

project(learning_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_SCAN_FOR_MODULES ON)

if(NOT CMAKE_GENERATOR MATCHES "Ninja")
    message(FATAL_ERROR
        "`import std;` support requires Ninja. "
        "Configure with -G Ninja."
    )
endif()

add_compile_options(-Wall -Werror -Wno-reserved-module-identifier)

# Helper for creating an executable for one concept demonstration.
function(add_cpp_note target main_file)
    add_executable(${target} ${main_file})

    target_sources(${target}
        PRIVATE
        FILE_SET CXX_MODULES
        FILES ${ARGN}
    )

    target_compile_features(${target} PRIVATE cxx_std_23)
    set_target_properties(${target} PROPERTIES CXX_MODULE_STD ON)
endfunction()

add_subdirectory(src/Chapter_1)
