cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("CPPtut")

# Dodaj integrację z biblioteką fmt
find_package(fmt CONFIG REQUIRED)

# Add source to this project's executable.
add_executable (CPPtut "projekt.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CPPtut PROPERTY CXX_STANDARD 20)
endif()

# Podlinkuj bibliotekę fmt
target_link_libraries(CPPtut PRIVATE fmt::fmt)

# TODO: Add tests and install targets if needed.
