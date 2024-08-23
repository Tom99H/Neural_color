#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>

int i1;
int i2;
int i3;
int w11;
int w12;
int w13;
int w14;
int w15;
int w21;
int w22;
int w23;
int w24;
int w25;
int w31;
int w32;
int w33;
int w34;
int w35;

typedef struct {
    float neuron[6][6];
} NEURON_t;

typedef struct {

	NEURON_t grids[3];
} LAYERS_t;


int hidden_layout[6][3];
int main(void){
// Naplnění nulami
for (int j = 0; j < 3; j++){
    for (int i = 0; i < 6; i++){
        hidden_layout[i][j] = 0;
    }
}
return 0;
}