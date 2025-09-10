
#define GLM_ENABLE_EXPERIMENTAL 
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtx/string_cast.hpp>


int main()
{
	//Q1
	std::cout <<"Q1"<< std::endl;
	glm::vec3 p(1, 4, -5);
	glm::vec3 v1(5, 1, 4);
	p += v1;
	std::cout << glm::to_string(p) << std::endl;

	//Q2
	std::cout <<"Q2"<< std::endl;
	glm::vec3 v2(1, 0, 0);
	glm::vec3 v3(0, 1, 0);
	glm::vec3 a = v2 + v3;
	std::cout << glm::to_string(a) << std::endl;

	//Q3
	std::cout <<"Q3"<< std::endl;
	glm::vec3 v4(0, 1, 0);
	v4 *= 2.0f;
	std::cout << glm::to_string(v4) << std::endl;

	//Q4
	std::cout <<"Q4"<< std::endl;
	glm::vec3 s(8, 2, 5);
	glm::vec3 e(1, -1, 4);
	glm::vec3 v5 = e - s;
	std::cout << glm::to_string(v5) << std::endl;

	//Q5
	std::cout <<"Q5"<< std::endl;
	glm::vec3 v6(1, 3, 4);
	v6 = glm::normalize(v6);
	std::cout << glm::to_string(v6) << std::endl;

	//Q6
	std::cout <<"Q6"<< std::endl;
	glm::vec3 v7(1, -1, 4);
	glm::vec4 v8(v7, 0);
	std::cout << glm::to_string(v8) << std::endl;

	return 0;
}