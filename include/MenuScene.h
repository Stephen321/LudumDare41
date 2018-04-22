#pragma once

#include "Scene.h"

class MenuScene : public Scene {
public:
	MenuScene(sf::RenderWindow* _window);
	void start() override;
	void stop() override;
	void handleEvents(const sf::Event& ev) override;
	void update(float dt) override;
	void render(sf::RenderStates states) const override;

private:
	sf::Sprite m_background;
	sf::Sprite m_title;
	sf::Sprite m_playLogo;
	bool m_fade;
	sf::Clock m_fadeTimer;

	void fadeOut(float dt, sf::Sprite logo);
	
};