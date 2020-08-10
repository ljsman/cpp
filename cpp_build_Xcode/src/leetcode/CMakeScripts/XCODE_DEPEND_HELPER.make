# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.leetcode_lib.Debug:
/Users/2y2ssn/CLionProjects/cpp/cpp_build_Xcode/src/leetcode/Debug/libleetcode_lib.a:
	/bin/rm -f /Users/2y2ssn/CLionProjects/cpp/cpp_build_Xcode/src/leetcode/Debug/libleetcode_lib.a


PostBuild.leetcode_lib.Release:
/Users/2y2ssn/CLionProjects/cpp/cpp_build_Xcode/src/leetcode/Release/libleetcode_lib.a:
	/bin/rm -f /Users/2y2ssn/CLionProjects/cpp/cpp_build_Xcode/src/leetcode/Release/libleetcode_lib.a


PostBuild.leetcode_lib.MinSizeRel:
/Users/2y2ssn/CLionProjects/cpp/cpp_build_Xcode/src/leetcode/MinSizeRel/libleetcode_lib.a:
	/bin/rm -f /Users/2y2ssn/CLionProjects/cpp/cpp_build_Xcode/src/leetcode/MinSizeRel/libleetcode_lib.a


PostBuild.leetcode_lib.RelWithDebInfo:
/Users/2y2ssn/CLionProjects/cpp/cpp_build_Xcode/src/leetcode/RelWithDebInfo/libleetcode_lib.a:
	/bin/rm -f /Users/2y2ssn/CLionProjects/cpp/cpp_build_Xcode/src/leetcode/RelWithDebInfo/libleetcode_lib.a




# For each target create a dummy ruleso the target does not have to exist
