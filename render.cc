#include <fstream>
#include <iostream>

#include "CImg.h"
#include <json/json.h>

void LoadGenome(const std::string& json_filename) {
  std::ifstream ifs(json_filename);
  Json::Reader reader;
  Json::Value obj;
  reader.parse(ifs, obj);
  std::cout << "obj: " << obj << std::endl;
}

void SetPixel(
  int x, int y, unsigned char r, unsigned char g, unsigned char b,
  cimg_library::CImg<unsigned char>& image) {
  image(x, y, 0, 0) = r;
  image(x, y, 0, 1) = g;
  image(x, y, 0, 2) = b;
}

int main() {
  LoadGenome("example-genome.json");
  cimg_library::CImg<unsigned char> image(640, 400, 1, 3);
  image.fill(0);
  SetPixel(100, 200, 255, 255, 0, image);
  image.save("pattern.png");
  return 0;
}
