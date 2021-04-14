#pragma once

#include <string>

class PlyLoader {
private:
public:
    static void loadPlyFile(const std::string filePath, float* &positions, unsigned int* &indices, int &vertexFloatCount, int &indexIntCount, const float scale = 1.0f,
                            const float translateX = 0.0f, const float translateY = 0.0f, const float translateZ = 0.0f);
};
