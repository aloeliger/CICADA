#ifndef CICADA_H_
#define CICADA_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "hls_stream.h"

#include "defines.h"

// Prototype of top level function for C-synthesis
void cicada_v1p1p2(
    input_t inputs_[N_INPUT_1_1],
    result_t layer7_out[N_LAYER_5]
);

#endif
