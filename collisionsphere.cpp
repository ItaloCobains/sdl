#include "collisionsphere.h"

CollisionSphere::CollisionSphere() : radius(0), center(Vector3D()) {}

CollisionSphere::CollisionSphere(float radius, const Vector3D &center)
    : radius(radius), center(center) {}
