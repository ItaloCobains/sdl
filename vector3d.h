#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <cmath>
#include <iostream>

class Vector3D {
public:
  float x, y, z;
  Vector3D();
  Vector3D(float x, float y);
  Vector3D(float x, float y, float z);

  float dotProduct(const Vector3D &v) const;
  Vector3D crossProduct(const Vector3D &v) const;
  float length() const;
  void normalize();

  void change(float x, float y, float z);
  void change(const Vector3D &v);
  void change(const Vector3D v);
  void changeX(float x);
  void changeY(float y);
  void changeZ(float z);

  Vector3D operator+(const Vector3D &v) const;
  Vector3D operator-(const Vector3D &v) const;
  Vector3D operator*(float scalar) const;
  Vector3D operator/(float scalar) const;

  Vector3D &operator+=(const Vector3D &v);
  Vector3D &operator-=(const Vector3D &v);
  Vector3D &operator*=(float scalar);
  Vector3D &operator/=(float scalar);

  bool operator==(const Vector3D &v) const;
  bool operator!=(const Vector3D &v) const;

  friend std::ostream &operator<<(std::ostream &os, const Vector3D &v);
};

#endif // VECTOR3D_H