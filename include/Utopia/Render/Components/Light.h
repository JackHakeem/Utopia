#pragma once

#include <UGM/rgb.h>

namespace Ubpa::Utopia {
	enum class LightType {
		Directional,
		Point,
		Spot,
		Rect,
		Disk
	};

	struct Light {
		LightType type{ LightType::Directional };
		rgbf color{ 1.f };
		float intensity{ 1.f };
		float range{ 10.f };
		float width{ 1.f };
		float height{ 1.f };
		float radius{ 1.f };
		float innerSpotAngle{ 21.802f };
		float outerSpotAngle{ 30.f };
	};
}

#include "details/Light_AutoRefl.inl"
