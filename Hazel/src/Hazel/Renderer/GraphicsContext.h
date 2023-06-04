#pragma once

namespace Hazel {

	class HAZEL_API GraphicsContext
	{
	public:
		virtual void Init() = 0;
		virtual void SwapBuffers() = 0;
	};

}