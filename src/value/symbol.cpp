#include "value/symbol.h"

using namespace il;

value::base* value::symbol::type() const
{
  throw std::runtime_error{"not yet implemented"};
}

std::string value::symbol::value() const
{
  return '\'' + to_string(m_val);
}