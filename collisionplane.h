#ifndef COLLISIONPLANE_H
#define COLLISIONPLANE_H

#include "vector3d.h"

class CollisionPlane {
public:
  Vector3D point[4];
  Vector3D normal;

  CollisionPlane(float n1, float n2, float n3, float a, float b, float c,
                 float d, float e, float f, float g, float h, float i, float j,
                 float k, float l);
};

#endif // COLLISIONPLANE_H