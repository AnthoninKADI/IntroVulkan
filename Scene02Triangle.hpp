#ifndef SCENE02TRIANGLE_HPP
#define SCENE02TRIANGLE_HPP
#include <SDL3/SDL_gpu.h>
#include "Scene.hpp"
class Scene02Triangle : public Scene {
public:
	void Load(Renderer& renderer) override;
	bool Update(float dt) override;
	void Draw(Renderer& renderer) override;
	void Unload(Renderer& renderer) override;
private:
	InputState inputState;
	const char* basePath;
	SDL_GPUShader* vertexShader;
	SDL_GPUShader* fragmentShader;
	SDL_GPUGraphicsPipeline* fillPipeline;
	SDL_GPUGraphicsPipeline* linePipeline;
	SDL_GPUViewport smallViewport = { 260, 220, 420, 340, 0.1f, 1.0f };
	SDL_Rect scissorRect = { 220, 140, 220, 140 };
	bool useWireframeMode = false;
	bool useSmallViewport = false;
	bool useScissorRect = false;
};
#endif