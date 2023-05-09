#include "public.h"

#include <boost/filesystem.hpp>
#include <boost/filesystem/fstream.hpp>
#include <boost/filesystem/path.hpp>

int myfoo() { return 42; }

std::string myfoo2() {
	const boost::filesystem::path path = "a path";
	return path.string();
}
