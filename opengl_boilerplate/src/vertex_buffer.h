#pragma once

class VertexBuffer
{
private:
	unsigned int m_renderer_id;
public:
	VertexBuffer(const void* data, unsigned int size, unsigned int type);
	~VertexBuffer();

	void bind() const;
	void unbind() const;
};