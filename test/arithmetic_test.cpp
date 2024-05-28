#include <catch2/catch_all.hpp>
import arithmetic;

class Point {
  int x, y;
public:
  friend std::ostream& operator<<(std::ostream& os, Point const& point);		
  friend Point operator+(Point const& a, Point const & b);
  Point(int _x, int _y): x(_x), y(_y) {};
  friend bool operator==(Point const& a, Point const& b);
};

bool operator==(Point const& a, Point const& b) {
    return b.x==a.x && b.y==a.y;
}
  
std::ostream& operator<<(std::ostream& os, Point const& point) {
			return os << point.x << ' ' << point.y;
}

Point operator+(Point const& a, Point const & b) {
			return {b.x+a.x, b.y+a.y};
}

SCENARIO( "Verify if works with int type", "[arithmetic_test.cpp]" )
{
    REQUIRE( add(3, 4) == 7.0 );
}

SCENARIO( "Verify if works with float type", "[arithmetic_test.cpp]" )
{
	REQUIRE( add(3.3, 4.5)  == 7.8 );
}


SCENARIO( "Verify if works with class Point", "[arithmetic_test.cpp]" )
{
	REQUIRE( add( Point(1.0,2.0), Point(2.0, 1.0))  == Point(3.0, 3.0) );
}
