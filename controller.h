#include <stdint.h>
#include "types.h"

#ifndef PRESENTER_H
#define PRESENTER_H

knnresult runAndPresentResult(knnresult (*runnable)(double *x, int n, int d, int k), double *x, int n, int d, int k, char *name, char *outputFilename, char *resultsFilename);

#endif //PRESENTER_H
