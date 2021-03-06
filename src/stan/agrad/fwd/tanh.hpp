#ifndef __STAN__AGRAD__FWD__TANH__HPP__
#define __STAN__AGRAD__FWD__TANH__HPP__

#include <stan/agrad/fwd/fvar.hpp>
#include <stan/meta/traits.hpp>

namespace stan {

  namespace agrad {

    template <typename T>
    inline
    fvar<T>
    tanh(const fvar<T>& x) {
      using std::tanh;
      T u = tanh(x.val_);
      return fvar<T>(u, x.d_ * (1 - u * u));
    }
  }
}
#endif
