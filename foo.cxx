#include "public.h"

int myfoo() { return 42; }

std::string myfoo2() {
	const boost::filesystem::path path = "a path";
	return path.string();
}
