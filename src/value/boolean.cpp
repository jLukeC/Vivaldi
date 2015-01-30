#include "boolean.h"

#include "gc.h"
#include "lang_utils.h"

#include <string>

using namespace il;

value::basic_type* value::boolean::type() const
{
  throw std::runtime_error{"not yet implemented"};
}

std::string value::boolean::value() const
{
  return m_val ? "true" : "false";
}

value::base* value::boolean::copy() const
{
  return gc::alloc<boolean>( m_val );
}
