#pragma once
#include <string>
#include <glm.hpp>
#include <gtc/matrix_transform.hpp>
#include <gtc/type_ptr.hpp>


class Shader
{
public:
	Shader(const char* vertexPath, const char* fragmentPath);
	std::string vertexString;
	std::string fragmentString;
	const char* vertexSource;
	const char* fragmentSource;
	unsigned int ID;  //shader pragram ID

	enum Slot
	{
		DIFFUSE,
		SPECULAR
	};


	void use();
	void SetUniform3f(const char* paraNameString, glm::vec3 param);
	void SetUniform1f(const char* paraNameString, float param);
	void SetUniform1i(const char* paraNameString, int slot);

private:
	void checkCompileError(unsigned int ID, std::string type);
};

