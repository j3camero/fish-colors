#ifndef _FISH_COLORS_LAYER_H_
#define _FISH_COLORS_LAYER_H_

#include <vector>

typedef std::vector<double> Vector;
typedef std::vector<Vector> Matrix;
typedef std::vector<Matrix> Tensor;

class Phenome : Tensor {
 public:
  Phenome(int size);
  double GetHeight(double x, double y, double z);
  Phenome Scale(int new_size);

 private:
  // Maybe.
};

#endif
