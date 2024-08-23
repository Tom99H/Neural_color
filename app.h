#include "main.h"

typedef struct {
    float neuron[6][6];
} NEURON_t;

typedef struct {
	NEURON_t layers[3];
} LAYER_t;