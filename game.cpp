//�������� ��� ����� �1
#include <SFML/Graphics.hpp>

int main()
{
	// ������ ���� � ��� �� ������� �������� ��������, ��� � ������� ����
	sf::VideoMode desktop = sf::VideoMode::getDesktopMode();
	sf::RenderWindow window(sf::VideoMode(200, 200, desktop.bitsPerPixel), "Lesson 1");

	sf::CircleShape shape(100.f); //������ ����
	shape.setFillColor(sf::Color::Red); //�������� ���� ������� ������

										// �������� (�����������) ����
	while (window.isOpen())
	{
		sf::Event event; //���������� ��� �������
		while (window.pollEvent(event)) //����� �������
		{
			if (event.type == sf::Event::Closed)
				window.close();//��������� ����, ���� ������� �Closed�
		}

		window.clear(); //������� �����
		window.draw(shape); //������ ����
		window.display(); //���������� ���� �� �����
	}

	return 0;
}
