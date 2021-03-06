#ifndef VV_UTILS_STRING_HELPERS_H
#define VV_UTILS_STRING_HELPERS_H

#include <boost/utility/string_ref.hpp>

namespace vv {

// Strips leading whitespace off a string_ref
boost::string_ref ltrim(boost::string_ref str);

// Expanded/smarter version of std::stoi (handles octal, hexadecimal, and binary
// numbers intelligently)
int to_int(const std::string& str);

// Returns whether or not 'c' is a valid character for a variable (or a symbol)
inline bool isnamechar(char c)
{
  return isalnum(c) || c == '_';
}

}

#endif
