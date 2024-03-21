//Numpy array shape [2, 2, 1, 4]
//Min -1.539062500000
//Max 1.281250000000
//Number of zeros 0

#ifndef W3_H_
#define W3_H_

namespace CICADA_v2p1p2{
#ifdef LOAD_WEIGHTS_FROM_TEXT
  weight3_t w3[16];
#else
  weight3_t w3[16] = {1.28125000, -1.50390625, 0.99609375, 0.92578125, -1.53906250, 1.25000000, 0.83203125, 0.86718750, 0.48437500, 0.21875000, -1.07812500, 0.32812500, 0.21484375, 0.42187500, 0.30859375, -1.12890625};
#endif
}

#endif
