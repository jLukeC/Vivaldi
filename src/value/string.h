#ifndef IL_VALUE_STRING_H
#define IL_VALUE_STRING_H

#include "value.h"

#include <string>

namespace il {

namespace value {

class string : public base {
public:
  string(const std::string& val) : m_val{val} { }
  base* type() const override;
  std::string value() const override;

private:
  std::string m_val;
};

}

}

#endif