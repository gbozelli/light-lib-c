#include <stdio.h>

typedef struct {
    int x, y, z;
} vector;

typedef struct {
    int x, y, z;
} point;

typedef struct surface{
    point position;
    vector normal;
    char reflection;
} surface;

const vector light = {0, 0, 0};

// How to define a object in the plan definition we put here?
// Like, defining the toroid of a lot of planes (using a resolution variable)
// And create an array of surfaces (of each "mini-plane") in which each one has a "normal" vector pointing outside the toroid
// And we calculate the reflection over all the object

typedef struct sphere{
    float radius;
    point center;
}

typedef struct reflection_value {
    float intensity;
    point position;
} reflection_value;

vector derive_points_from_sphere(sphere s, int n_points) {
    
}

int reduce_sphere_to_plans(sphere s, int resolution) {
    for (int i = 0; i < resolution; i++) {
        normal = s.center - 
    }
}

const char light_intensity[] = ". , : ; * ! H # @";

float normalized_dot_product(vector a, vector b) {
    return (a.x * b.x + a.y * b.y + a.z * b.z) / (
        sqrt(a.x * a.x + a.y * a.y + a.z * a.z) * 
        sqrt(b.x * b.x + b.y * b.y + b.z * b.z)
    );
}

char map_intensity(float intensity) {
    switch (intensity) {
        case (intensity >= 0.9):
            return light_intensity[9];
        case (intensity >= 0.8):
            return light_intensity[8];
        case (intensity >= 0.7):
            return light_intensity[7];
        case (intensity >= 0.6):
            return light_intensity[6];
        case (intensity >= 0.5):
            return light_intensity[5];
        case (intensity >= 0.4):
            return light_intensity[4];
        case (intensity >= 0.3):
            return light_intensity[3];
        case (intensity >= 0.2):
            return light_intensity[2];
        case (intensity >= 0.1):
            return light_intensity[1];
        case (intensity >= 0.0):
            return light_intensity[0];
    }
}
    

float calculate_reflection(vector surface_normal_vector, vector light_vector) {
    float intensity = normalized_dot_product(surface_normal_vector, light_vector);
    return intensity;
}



int main(void) {
    return 0;
}