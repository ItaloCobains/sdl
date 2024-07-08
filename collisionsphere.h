#ifndef COLLISSIONSPHERE_H
#define COLLISSIONSPHERE_H

#include "vector3d.h"

class CollisionSphere {
public:
  float radius;
  Vector3D center;
  CollisionSphere();
  CollisionSphere(float radius, const Vector3D &center);
};

#endif // COLLISSIONSPHERE_H