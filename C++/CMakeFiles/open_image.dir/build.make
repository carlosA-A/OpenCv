# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bearbeats/OpenCvTraining/C++

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bearbeats/OpenCvTraining/C++

# Include any dependencies generated for this target.
include CMakeFiles/open_image.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/open_image.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/open_image.dir/flags.make

CMakeFiles/open_image.dir/open_image.cpp.o: CMakeFiles/open_image.dir/flags.make
CMakeFiles/open_image.dir/open_image.cpp.o: open_image.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/bearbeats/OpenCvTraining/C++/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/open_image.dir/open_image.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/open_image.dir/open_image.cpp.o -c /home/bearbeats/OpenCvTraining/C++/open_image.cpp

CMakeFiles/open_image.dir/open_image.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/open_image.dir/open_image.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/bearbeats/OpenCvTraining/C++/open_image.cpp > CMakeFiles/open_image.dir/open_image.cpp.i

CMakeFiles/open_image.dir/open_image.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/open_image.dir/open_image.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/bearbeats/OpenCvTraining/C++/open_image.cpp -o CMakeFiles/open_image.dir/open_image.cpp.s

CMakeFiles/open_image.dir/open_image.cpp.o.requires:
.PHONY : CMakeFiles/open_image.dir/open_image.cpp.o.requires

CMakeFiles/open_image.dir/open_image.cpp.o.provides: CMakeFiles/open_image.dir/open_image.cpp.o.requires
	$(MAKE) -f CMakeFiles/open_image.dir/build.make CMakeFiles/open_image.dir/open_image.cpp.o.provides.build
.PHONY : CMakeFiles/open_image.dir/open_image.cpp.o.provides

CMakeFiles/open_image.dir/open_image.cpp.o.provides.build: CMakeFiles/open_image.dir/open_image.cpp.o

# Object files for target open_image
open_image_OBJECTS = \
"CMakeFiles/open_image.dir/open_image.cpp.o"

# External object files for target open_image
open_image_EXTERNAL_OBJECTS =

open_image: CMakeFiles/open_image.dir/open_image.cpp.o
open_image: CMakeFiles/open_image.dir/build.make
open_image: /usr/local/lib/libopencv_xphoto.so.3.1.0
open_image: /usr/local/lib/libopencv_xobjdetect.so.3.1.0
open_image: /usr/local/lib/libopencv_tracking.so.3.1.0
open_image: /usr/local/lib/libopencv_surface_matching.so.3.1.0
open_image: /usr/local/lib/libopencv_structured_light.so.3.1.0
open_image: /usr/local/lib/libopencv_stereo.so.3.1.0
open_image: /usr/local/lib/libopencv_saliency.so.3.1.0
open_image: /usr/local/lib/libopencv_rgbd.so.3.1.0
open_image: /usr/local/lib/libopencv_reg.so.3.1.0
open_image: /usr/local/lib/libopencv_plot.so.3.1.0
open_image: /usr/local/lib/libopencv_optflow.so.3.1.0
open_image: /usr/local/lib/libopencv_line_descriptor.so.3.1.0
open_image: /usr/local/lib/libopencv_fuzzy.so.3.1.0
open_image: /usr/local/lib/libopencv_dpm.so.3.1.0
open_image: /usr/local/lib/libopencv_dnn.so.3.1.0
open_image: /usr/local/lib/libopencv_datasets.so.3.1.0
open_image: /usr/local/lib/libopencv_ccalib.so.3.1.0
open_image: /usr/local/lib/libopencv_bioinspired.so.3.1.0
open_image: /usr/local/lib/libopencv_bgsegm.so.3.1.0
open_image: /usr/local/lib/libopencv_aruco.so.3.1.0
open_image: /usr/local/lib/libopencv_videostab.so.3.1.0
open_image: /usr/local/lib/libopencv_superres.so.3.1.0
open_image: /usr/local/lib/libopencv_stitching.so.3.1.0
open_image: /usr/local/lib/libopencv_photo.so.3.1.0
open_image: /usr/local/lib/libopencv_text.so.3.1.0
open_image: /usr/local/lib/libopencv_face.so.3.1.0
open_image: /usr/local/lib/libopencv_ximgproc.so.3.1.0
open_image: /usr/local/lib/libopencv_xfeatures2d.so.3.1.0
open_image: /usr/local/lib/libopencv_shape.so.3.1.0
open_image: /usr/local/lib/libopencv_video.so.3.1.0
open_image: /usr/local/lib/libopencv_objdetect.so.3.1.0
open_image: /usr/local/lib/libopencv_calib3d.so.3.1.0
open_image: /usr/local/lib/libopencv_features2d.so.3.1.0
open_image: /usr/local/lib/libopencv_ml.so.3.1.0
open_image: /usr/local/lib/libopencv_highgui.so.3.1.0
open_image: /usr/local/lib/libopencv_videoio.so.3.1.0
open_image: /usr/local/lib/libopencv_imgcodecs.so.3.1.0
open_image: /usr/local/lib/libopencv_imgproc.so.3.1.0
open_image: /usr/local/lib/libopencv_flann.so.3.1.0
open_image: /usr/local/lib/libopencv_core.so.3.1.0
open_image: CMakeFiles/open_image.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable open_image"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/open_image.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/open_image.dir/build: open_image
.PHONY : CMakeFiles/open_image.dir/build

CMakeFiles/open_image.dir/requires: CMakeFiles/open_image.dir/open_image.cpp.o.requires
.PHONY : CMakeFiles/open_image.dir/requires

CMakeFiles/open_image.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/open_image.dir/cmake_clean.cmake
.PHONY : CMakeFiles/open_image.dir/clean

CMakeFiles/open_image.dir/depend:
	cd /home/bearbeats/OpenCvTraining/C++ && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bearbeats/OpenCvTraining/C++ /home/bearbeats/OpenCvTraining/C++ /home/bearbeats/OpenCvTraining/C++ /home/bearbeats/OpenCvTraining/C++ /home/bearbeats/OpenCvTraining/C++/CMakeFiles/open_image.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/open_image.dir/depend

