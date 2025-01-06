#ifndef RENDERER_HPP
#define RENDERER_HPP
#include <SDL3/SDL_gpu.h>
#include <vector>
#include <string>
using std::vector;
using std::string;
class Window;

class Renderer {
public:
	void Init(Window& window);
	void Begin(SDL_GPUDepthStencilTargetInfo* depthStencilTargetInfo = nullptr);
	void End() const;
	void Close() const;
	SDL_GPUDevice* device{ nullptr };
	SDL_Window* renderWindow{ nullptr };
	SDL_GPUCommandBuffer* cmdBuffer{ nullptr };
	SDL_GPUTexture* swapchainTexture{ nullptr };
	SDL_GPURenderPass* renderPass{ nullptr };
	SDL_GPUShader* LoadShader(
		const char* basePath,
		const char* shaderFilename,
		Uint32 samplerCount,
		Uint32 uniformBufferCount,
		Uint32 storageBufferCount,
		Uint32 storageTextureCount
	);
	void ReleaseShader(SDL_GPUShader* shader) const;
	SDL_GPUGraphicsPipeline* CreateGPUGraphicsPipeline(const SDL_GPUGraphicsPipelineCreateInfo& createInfo) const;
	void BindGraphicsPipeline(SDL_GPUGraphicsPipeline* pipeline) const;
	void DrawPrimitives(int numVertices, int numInstances, int firstVertex, int firstInstance) const;
	void SetViewport(const SDL_GPUViewport& viewport) const;
	void SetScissorRect(const SDL_Rect& rect) const;
	void ReleaseGraphicsPipeline(SDL_GPUGraphicsPipeline* pipeline) const;
};
#endif //RENDERER_HPP