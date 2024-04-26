#pragma once
#include "Window.h"
#include "Application.h"

class WindowApplication : public virtual Window, public virtual Application {
    private:
        int id;
        int size;
        int title;
    public:
        WindowApplication(int _size, int _id, char * _title);
        void Run();


};