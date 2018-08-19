#pragma once

// OpenGl Library Files
#include <GL\glew.h>
#include <GLFW\glfw3.h>
#include "glm-0.9.9.0\glm-0.9.9.0\glm\glm.hpp"
#include "glm-0.9.9.0\glm-0.9.9.0\glm\gtc\matrix_transform.hpp"
#include "glm-0.9.9.0\glm-0.9.9.0\glm\gtc\type_ptr.hpp"

// Standard Libraries
#include <iostream>
#include <math.h>
#include <vector>

void onWindowResize(GLFWwindow* window, int width, int height);

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT  = 600;
