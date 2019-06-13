#pragma once

//template <typename T>
//class v2 {
//public:
//	constexpr v2(T x, T y) 
//		:_x(x),_y(y)
//	{
//	}
//
//	getX()
//
//private:
//	T _x, _y;
//};

class v2 {
	friend v2 plus(const v2&, const v2&);
public:
	v2(double _x = 0, double _y = 0)
		:x(_x), y(_y)
	{}
	double x, y;
};

v2 plus(const v2&lhs, const v2&rhs) {
	return v2(lhs.x + rhs.x, lhs.y + rhs.y);
}