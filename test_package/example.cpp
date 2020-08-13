#include <iostream>
#include <easy/profiler.h>
#include <easy/reader.h>

int main()
{
    EASY_PROFILER_ENABLE;
    profiler::startListen();
    EASY_MAIN_THREAD;
    EASY_BLOCK("Two Array Sum");
    EASY_FUNCTION(profiler::colors::Cyan)
    std::cout << "This is a test package for easy profiler" << std::endl;
    EASY_END_BLOCK;
    profiler::stopListen();
    profiler::dumpBlocksToFile("test_profile.prof");
    return 0;
}
