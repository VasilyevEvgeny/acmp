#include <iostream>
#include <cmath>

using namespace std;

double len(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

double get_rectangle_square(int x1, int y1, int x2, int y2, int x3, int y3) {
    return len(x1, y1, x2, y2) * len(x2, y2, x3, y3);
}

double get_triangle_square(int x1, int y1, int x2, int y2, int x3, int y3) {
    double a = len(x1, y1, x2, y2);
    double b = len(x2, y2, x3, y3);
    double c = len(x3, y3, x1, y1);
    double p = 0.5 * (a + b + c);

    return sqrt(p * (p - a) * (p - b) * (p - c));
}

double get_summary_square(int x, int y, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    double tr1 = get_triangle_square(x, y, x1, y1, x2, y2);
    double tr2 = get_triangle_square(x, y, x2, y2, x3, y3);
    double tr3 = get_triangle_square(x, y, x3, y3, x4, y4);
    double tr4 = get_triangle_square(x, y, x4, y4, x1, y1);

    return tr1 + tr2 + tr3 + tr4;
}

int main() {
    const double EPS = 1e-5;

    size_t N = 0;
    cin >> N;

    size_t n_cottagers_in = 0;
    for (size_t i = 0; i < N; ++i) {
        int x, y, x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        double s_rect = get_rectangle_square(x1, y1, x2, y2, x3, y3);
        double s_summ = get_summary_square(x, y, x1, y1, x2, y2, x3, y3, x4, y4);

        if (s_summ - s_rect < EPS) {
            ++n_cottagers_in;
        }
    }

    cout << n_cottagers_in << '\n';

    return 0;
}
