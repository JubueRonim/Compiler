file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS "${PROJECT_SOURCE_DIR}/source/*.cpp")
file(GLOB_RECURSE HEADERS CONFIGURE_DEPENDS "${PROJECT_SOURCE_DIR}/include/*.h")

add_executable(jpc ${SOURCES} ${HEADERS}
        ../include/jp/primitive.h)

target_include_directories(jpc PRIVATE ${PROJECT_SOURCE_DIR}/include)