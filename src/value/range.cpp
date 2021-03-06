#include "range.h"

#include "builtins.h"

using namespace vv;

value::range::range(value::base& new_start, value::base& new_end)
  : base  {&builtin::type::range},
    start {&new_start},
    end   {&new_end}
{ }

value::range::range()
  : base  {&builtin::type::range},
    start {nullptr},
    end   {nullptr}
{ }

std::string value::range::value() const
{
  return start->value() + " to " + end->value();
}

void value::range::mark()
{
  base::mark();
  // We need to ensure neither start not end are nullptr, since this could be
  // happening between allocation and initialization
  if (start && !start->marked())
    start->mark();
  if (end && !end->marked())
    end->mark();
}
