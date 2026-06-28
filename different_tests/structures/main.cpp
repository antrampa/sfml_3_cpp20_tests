#include <iostream>
#include <format>

struct Point2D
{
    double x = 0;
    double y = 0;
};

void print_point(Point2D point);
double calculate_distance(Point2D p1, Point2D p2);
void move_point(Point2D &p, int dx, int dy);
Point2D calc_midpoint(Point2D p1, Point2D p2);

int main() {
    Point2D p1 = {50, 60};
    Point2D p2 = {70, 80};

    std::cout << "Point 1: " << p1.x << ", " << p1.y << std::endl;
    std::cout << "Point 2: " << p2.x << ", " << p2.y << std::endl;
    std::cout << "Print point 1:" << std::endl;
    print_point(p1);
    std::cout << "Print point 2:" << std::endl;
    print_point(p2);
    std::cout << "calculate the distance: " << std::endl;
    double distance = calculate_distance(p1, p2);
    std::cout << std::format("The distance is: {:.2f}\n", distance);
    std::cout << "move P2 \n";
    move_point(p2, 40, 50);
    std::cout << "Print point 2:" << std::endl;
    print_point(p2);
    Point2D midpoint = calc_midpoint(p1, p2);
    std::cout << "Get the midpoint: ";
    print_point(midpoint);
}

void print_point(Point2D point) {
    std::cout << "Point X: " << point.x << " Y: " << point.y << "\n";
}


double calculate_distance(Point2D p1, Point2D p2) {
    int dx = p1.x - p2.x;
    int dy = p1.y - p2.y;
    return std::sqrt(dx * dx + dy * dy);
}

void move_point(Point2D &p, int dx, int dy) {
    p.x += dx;
    p.y += dy;
}


Point2D calc_midpoint(Point2D p1, Point2D p2) {
    Point2D midpoint = {};
    midpoint.x = (p1.x + p2.x) / 2;
    midpoint.y = (p1.y + p2.y) / 2;
    return midpoint;
}