#ifndef PYTHONIC_BUILTIN_FLOAT_HPP
#define PYTHONIC_BUILTIN_FLOAT_HPP

#include "pythonic/include/__builtin__/float_.hpp"

#include "pythonic/utils/functor.hpp"

PYTHONIC_NS_BEGIN

namespace __builtin__
{

  namespace functor
  {
    template <class T>
    float_::type float_::operator()(T &&t) const
    {
      return t;
    }

    float_::type float_::operator()() const
    {
      return 0.;
    }
  }
}
PYTHONIC_NS_END

#endif
