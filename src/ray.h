#ifndef RAYH
#define RAYH
#include "vec3.h"

/* Why is there a const after the function declaration?
 *  const after a class function declaration makes it a compiler error for this
 *  class function to change a member variable of this class. We use const
 *  because we don't want these function variables to mutate member variables
 *
 *  See: https://stackoverflow.com/questions/3141087/what-is-meant-with-const-at-end-of-function-declaration
 */
class ray
{
    public:
        ray() {}
        ray(const vec3& a, const vec3& b) { A = a; B = b; }
        vec3 origin() const     { return A; }
        vec3 direction() const  { return B; }
        vec3 point_at_parameter(float t) const { return A + t*B; }

        vec3 A;
        vec3 B;
};

#endif
