#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/string.hpp>
#include <iostream>

int main() {
    using namespace ftxui;


    auto but = button(L"clickme",);
    auto document = vbox({
        text(L"Hello, FTXUI!"),
        separator(),
        text(L"This is a simple example."),
        but(),
    });

    auto screen = Screen::Create(Dimension::Fit(document));
    Render(screen, document);
    screen.Print();

    int a;
    std::cin>>a;
    return 0;
}