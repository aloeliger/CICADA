//Numpy array shape [1]
//Min 0.000000000000
//Max 0.000000000000
//Number of zeros 1

#ifndef B10_H_
#define B10_H_

namespace CICADA_v2p1p2{
#ifdef LOAD_WEIGHTS_FROM_TEXT
  bias10_t b10[1];
#else
  bias10_t b10[1] = {0};
#endif
}

#endif
