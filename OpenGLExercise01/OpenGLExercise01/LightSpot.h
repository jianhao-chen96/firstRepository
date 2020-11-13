#pragma once

#include <glm.hpp>
//#include <gtc/matrix_transform.hpp>
#include <gtx/rotate_vector.hpp>

class LightSpot
{
public:
	LightSpot(glm::vec3 _position, glm::vec3 _angles, glm::vec3 _color = glm::vec3(1.0f, 1.0f, 1.0f));
	void UpdateDirection();

	glm::vec3 position;
	glm::vec3 angles;
	glm::vec3 lightDir = glm::vec3(0, 0, 1.0f);
	glm::vec3 color;

	float constant = 1.0f;
	float linear = 0.1f;
	float quadratic = 0.001f;
	float cosPhyInner = 0.95f;
	float cosPhyOutter = 0.9f;
};

