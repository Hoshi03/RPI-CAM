#include "videoHandler.hpp"
#include <vector>
#include <filesystem>

video::VideoHandler::VideoHandler(){

}
void video::VideoHandler::get_video(std::string path, time_t timestamp){

    //파일 전체를 가져와야 하나...? 이 함수가 필요한가..?
    
    if(std::filesystem::exists(path)&&std::filesystem::is_directory(path)){
        for(const auto& dir: std::filesystem::directory_iterator(path)){
            filenames.push_back(dir.path().filename().string());
        }
    }
    
}
int video::VideoHandler::process_video(time_t timestamp, uint64_t duration)
{
    
    //duration을 초단위로 해야 할것 같은데...
    std::string path;
    for(const auto& file: std::filesystem::directory_iterator(path)){
        //파일 이름에서 timestamp만 뽑아서 
        //timestamp-duration > file 부터 timestamp+duration < file까지 가져와서
        //하나로 합쳐 gstreamer concat 사용
    }

}
void video::VideoHandler::remove_video(uint64_t durtion, std::string path){
    
    // 삭제하는 기준 정확하게 정해야
    std::filesystem::remove(path);
}
