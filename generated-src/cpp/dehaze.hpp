// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from dehaze.djinni

#pragma once

#include <memory>
#include <string>

namespace dehaze {

class Dehaze {
public:
    virtual ~Dehaze() {}

    static std::shared_ptr<Dehaze> create();

    virtual std::string dehaze_image(const std::string & uri) = 0;
};

}  // namespace dehaze
