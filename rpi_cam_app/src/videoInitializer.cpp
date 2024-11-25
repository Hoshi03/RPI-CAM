#include "videoInitializer.hpp"
#include "spdlog/spdlog.h"
#include <sstream>

video::VideoInitializer::VideoInitializer(){
    int argc = 0;
    char **argv = nullptr;

    // GStreamer 초기화
    gst_init(&argc, &argv); 
}
void video::VideoInitializer::init(){

    //config파일에서 width, height, split_time, duration, format, framerate 설정
    /*std::stringstream pipeline_stream;
    int width, height, split_time, duration;
    std::string format, framerate;

    pipeline_stream << "libcamerasrc ! video/x-raw"
                    << ",width=" << width
                    << ",height=" << height
                    << ",framerate=" << framerate
                    << ",format=" << format
                    << " ! tee name=t \
            ! queue ! videoconvert ! x264enc speed-preset=ultrafast tune=fastdecode \
            ! video/x-h264,profile=high ! rtph264pay config-interval=1 name=pay0 pt=96 \
            t. ! queue ! videoconvert ! x264enc speed-preset=ultrafast tune=fastdecode \
            ! splitmuxsink name=muxsink"
                    << " max-size-time" << split_time;*/
}                    
void video::VideoInitializer::event(){

}
int video::VideoInitializer::start(){
    return streamer.start();
}
int video::VideoInitializer::stop(){
    return streamer.stop();
}