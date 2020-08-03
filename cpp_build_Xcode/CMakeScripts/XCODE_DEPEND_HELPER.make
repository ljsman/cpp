# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.cpp.Debug:
/Users/2y2ssn/CLionProjects/cpp/cpp_build_Xcode/Debug/cpp:
	/bin/rm -f /Users/2y2ssn/CLionProjects/cpp/cpp_build_Xcode/Debug/cpp


PostBuild.cpp.Release:
/Users/2y2ssn/CLionProjects/cpp/cpp_build_Xcode/Release/cpp:
	/bin/rm -f /Users/2y2ssn/CLionProjects/cpp/cpp_build_Xcode/Release/cpp


PostBuild.cpp.MinSizeRel:
/Users/2y2ssn/CLionProjects/cpp/cpp_build_Xcode/MinSizeRel/cpp:
	/bin/rm -f /Users/2y2ssn/CLionProjects/cpp/cpp_build_Xcode/MinSizeRel/cpp


PostBuild.cpp.RelWithDebInfo:
/Users/2y2ssn/CLionProjects/cpp/cpp_build_Xcode/RelWithDebInfo/cpp:
	/bin/rm -f /Users/2y2ssn/CLionProjects/cpp/cpp_build_Xcode/RelWithDebInfo/cpp




# For each target create a dummy ruleso the target does not have to exist
