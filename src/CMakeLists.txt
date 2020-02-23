include(Qt)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(qtgdb
	main.cpp
)

target_link_libraries(qtgdb
	Qt5::Core
	pthread
)
