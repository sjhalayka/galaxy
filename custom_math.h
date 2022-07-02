

#ifndef custom_math_h
#define custom_math_h

#include <algorithm>
using std::sort;

#include <limits>
using std::numeric_limits;

#include <vector>
using std::vector;

#include <set>
using std::set;

#include <map>
using std::map;


#include <iostream>
using std::cout;
using std::endl;

#include <cmath>
#include <cstdlib>
#include <GL/glut.h>       //GLUT Library


namespace custom_math
{
	class vector_3;
};

class custom_math::vector_3
{
public:
	float x, y, z;

	vector_3(const double &src_x = 0, const double &src_y = 0, const double &src_z = 0);
	bool operator==(const vector_3 &rhs);
	bool operator!=(const vector_3 &rhs);
	void zero(void);
	void rotate_x(const double &radians);
	void rotate_y(const double &radians);
    void rotate_z(const double &radians);
    vector_3 operator+(const vector_3 &rhs);
	vector_3 operator-(const vector_3 &rhs);
	vector_3 operator*(const vector_3 &rhs);
	vector_3 operator*(const double &rhs);
	vector_3 operator/(const double &rhs);
	vector_3 &operator=(const vector_3 &rhs);
	vector_3 &operator+=(const vector_3 &rhs);
	vector_3 &operator*=(const vector_3 &rhs);
	vector_3 &operator*=(const double &rhs);
	vector_3 operator-(void);
	double length(void) const;
	vector_3 &normalize(void);
	double dot(const vector_3 &rhs) const;
	double self_dot(void) const;
	vector_3 cross(const vector_3 &rhs) const;
};



#endif

