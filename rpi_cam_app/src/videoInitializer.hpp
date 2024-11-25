#ifndef VIDEOINITIALIZER_HPP
#define VIDEOINITIALIZER_HPP

#include <gst/gst.h>
#include <string>
#include "videoStreamer.hpp"

namespace video{
    class VideoInitializer{
        VideoStreamer streamer;
    public:
        VideoInitializer();
        void init();
        void event();
        int start();
        int stop();    
    };
}
 
#endif VIDEOINITIALIZER_HPP