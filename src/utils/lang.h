#ifndef VV_UTILS_LANG_H
#define VV_UTILS_LANG_H

#include "value.h"
#include "vm.h"

namespace vv {

bool truthy(const value::base* value);

[[noreturn]]
value::base* throw_exception(const std::string& value);
[[noreturn]]
value::base* throw_exception(value::base* value);

value::base* get_arg(vm::machine& vm, size_t idx);
value::base* get_self(vm::machine& vm);

value::base* find_method(value::type* type, symbol name);

}

#endif
