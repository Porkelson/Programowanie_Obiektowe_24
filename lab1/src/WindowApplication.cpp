#include "WindowApplication.h"

WindowApplication::WindowApplication(int _size, int _id, char * _title){
    size = _size;
    id = _id;
    title = _title;
}

void WindowApplication::Run(){
    Window::Run();
    Application::Run();
}