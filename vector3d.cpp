#include "vector3d.h"

Vector3D::Vector3D() : x(0), y(0), z(0) {}

Vector3D::Vector3D(float x, float y) : x(x), y(y), z(0) {}

Vector3D::Vector3D(float x, float y, float z) : x(x), y(y), z(z) {}

float Vector3D::dotProduct(const Vector3D &v) const {
  return x * v.x + y * v.y + z * v.z;
}

Vector3D Vector3D::crossProduct(const Vector3D &v) const {
  return Vector3D(y * v.z - z * v.y, z * v.x - x * v.z, x * v.y - y * v.x);
}

float Vector3D::length() const { return std::sqrt(x * x + y * y + z * z); }

void Vector3D::normalize() {
  float l = length();

  if (l == 0) {
    return;
  }

  x /= l;
  y /= l;
  z /= l;
}

void Vector3D::change(float x, float y, float z) {
  this->x = x;
  this->y = y;
  this->z = z;
}

void Vector3D::change(const Vector3D &v) {
  x = v.x;
  y = v.y;
  z = v.z;
}

void Vector3D::change(const Vector3D v) {
  x = v.x;
  y = v.y;
  z = v.z;
}

void Vector3D::changeX(float x) { this->x = x; }

void Vector3D::changeY(float y) { this->y = y; }

void Vector3D::changeZ(float z) { this->z = z; }

Vector3D Vector3D::operator+(const Vector3D &v) const {
  return Vector3D(x + v.x, y + v.y, z + v.z);
}

Vector3D Vector3D::operator-(const Vector3D &v) const {
  return Vector3D(x - v.x, y - v.y, z - v.z);
}

Vector3D Vector3D::operator*(float scalar) const {
  return Vector3D(x * scalar, y * scalar, z * scalar);
}

Vector3D Vector3D::operator/(float scalar) const {
  return Vector3D(x / scalar, y / scalar, z / scalar);
}

Vector3D &Vector3D::operator+=(const Vector3D &v) {
  x += v.x;
  y += v.y;
  z += v.z;

  return *this;
}

Vector3D &Vector3D::operator-=(const Vector3D &v) {
  x -= v.x;
  y -= v.y;
  z -= v.z;

  return *this;
}

Vector3D &Vector3D::operator*=(float scalar) {
  x *= scalar;
  y *= scalar;
  z *= scalar;

  return *this;
}

Vector3D &Vector3D::operator/=(float scalar) {
  x /= scalar;
  y /= scalar;
  z /= scalar;

  return *this;
}

bool Vector3D::operator==(const Vector3D &v) const {
  return x == v.x && y == v.y && z == v.z;
}

bool Vector3D::operator!=(const Vector3D &v) const {
  return x != v.x || y != v.y || z != v.z;
}

std::ostream &operator<<(std::ostream &os, const Vector3D &v) {
  os << "(" << v.x << ", " << v.y << ", " << v.z << ")";
  return os;
}