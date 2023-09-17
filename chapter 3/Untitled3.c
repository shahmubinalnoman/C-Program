//Write a c program to illustrate the use of symbolic constants in a real
//life application.
//Sure! Here's an example program in C that uses symbolic constants to represent various parameters for a simple physics simulation:

//c

#include <stdio.h>

// Define symbolic constants
#define GRAVITY 9.81 // m/s^2
#define TIME_STEP 0.1 // s
#define INITIAL_VELOCITY 10 // m/s
#define INITIAL_HEIGHT 50 // m

int main() {
    // Initialize variables
    float position = INITIAL_HEIGHT;
    float velocity = INITIAL_VELOCITY;

    // Simulate motion for 10 seconds
    for (int t = 0; t < 100; t += TIME_STEP*10) {
        // Calculate acceleration due to gravity
        float acceleration = -GRAVITY;

        // Calculate new position and velocity
        position += velocity*TIME_STEP + 0.5*acceleration*TIME_STEP*TIME_STEP;
        velocity += acceleration*TIME_STEP;

        // Print current position and velocity
        printf("Time: %d s | Position: %.2f m | Velocity: %.2f m/s\n", t/10, position, velocity);
    }

    return 0;
}
//In this program, the symbolic constants are defined using the #define preprocessor directive, and are used throughout the program to represent physical parameters like gravity, time step, initial velocity, and initial height. These constants make it easy to modify the simulation by changing just a few values at the top of the program, rather than hunting through the code for hard-coded values.
