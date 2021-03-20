typedef double P_TYPE;
struct point{
    P_TYPE x, y;
    point(){x = y = 0.0;}
    point(P_TYPE _x, P_TYPE _y){x = _x; y = _y;}
    point& operator += (const point o){
        x += o.x; y += o.y;
        return *this;}
    point& operator -= (const point o){
        x -= o.x; y -= o.y;
        return *this;}
    point& operator *= (const P_TYPE o){
        x *= o; y *= o;
        return *this;}
    point& operator /= (const P_TYPE o){
        x /= o; y /= o;
        return *this;}
    point operator + (const point o) const{
        return point(*this) += o;}
    point operator - (const point o) const{
        return point(*this) -= o;}
    point operator * (const P_TYPE o) const{
        return point(*this) *= o;}
    point operator / (const P_TYPE o) const{
        return point(*this) /= o;}
    bool operator < (const point o) const{
        if(fabs(x - o.x) > EPS) return x < o.x;
        else return y < o.y;}
    bool operator == (const point o) const{
        return ((abs(x-o.x)<EPS)&&(abs(y-o.y)<EPS));}
    P_TYPE dist(const point o) const{
        return hypot(x-o.x, y-o.y);}
    P_TYPE dot(const point o) const{
        return x * o.x + y * o.y;}
    P_TYPE cross(const point o) const{
        return x * o.y - y * o.x;}
    P_TYPE norm_squared() const{
        return dot(*this);}
};
