#include "collisionplane.h"

CollisionPlane::CollisionPlane(float n1, float n2, float n3, float a, float b,
                               float c, float d, float e, float f, float g,
                               float h, float i, float j, float k, float l) {
  normal.change(n1, n2, n3);
  point[0].change(a, b, c);
  point[1].change(d, e, f);
  point[2].change(g, h, i);
  point[3].change(j, k, l);
}