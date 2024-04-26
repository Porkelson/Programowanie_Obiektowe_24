#pragma once


class Application {
    private:
        char * title;

    public:
        Application(char * _title);
        void Run();
        void ActivateLog();

};