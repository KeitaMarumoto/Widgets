#include "ClockDisplay.h"

ClockDisplay::ClockDisplay(Vec2f p, Vec2f s, Texture i_N) 
{
	pos = p;
	size = s;
	image_N = i_N;
	image_O = i_N;
}
ClockDisplay::ClockDisplay(Vec2f p, Vec2f s, Texture i_N, Texture i_O)
{
	pos = p;
	size = s;
	image_N = i_N;
	image_O = i_O;
}

void ClockDisplay::Update()
{
	if (Collision()) {
		image = image_O;
	}
	else {
		image = image_N;
	}
}

void ClockDisplay::Draw()
{
	drawTextureBox(pos.x(), pos.y(),
				   size.x(), size.y(),
				   0.0f, 0.0f,
				   128.0f, 128.0f,
				   image, Color(1.0f, 1.0f, 1.0f, 0.8f));
}

bool ClockDisplay::Collision()
{
	Vec2f button_pos = pos;
	Vec2f button_size = size;
	Vec2f m_pos = env.mousePosition();
	float v_radius;
	float v_radius_to_mouse;
	button_size /= 2;
	button_pos += button_size;
	v_radius = button_size.x()*button_size.x();
	v_radius_to_mouse = ((button_pos.x() - m_pos.x())*(button_pos.x() - m_pos.x())) + ((button_pos.y() - m_pos.y())*(button_pos.y() - m_pos.y()));

	if (v_radius_to_mouse < v_radius) {
		return true;
	}
	return false;
}