/*
    This is a visionvoice project file
    Developer: RealMamali <mohamadalinorouzi372@gmail.com>

    See more here https://github.com/Mamali/visionvoice

    Copyright (c) RealMamali 2026 All rights reserved
*/

#pragma once

#include <memory>
#include <string>

#include <d3d9.h>

#include "LocalStream.h"
#include "Channel.h"

class StreamAtObject : public LocalStream {

    StreamAtObject() = delete;
    StreamAtObject(const StreamAtObject&) = delete;
    StreamAtObject(StreamAtObject&&) = delete;
    StreamAtObject& operator=(const StreamAtObject&) = delete;
    StreamAtObject& operator=(StreamAtObject&&) = delete;

public:

    explicit StreamAtObject(D3DCOLOR color, std::string name,
                            float distance, WORD objectId) noexcept;

    ~StreamAtObject() noexcept = default;

public:

    void Tick() noexcept override;

private:

    void OnChannelCreate(const Channel& channel) noexcept override;

private:

    const WORD objectId;

};

using StreamAtObjectPtr = std::unique_ptr<StreamAtObject>;
#define MakeStreamAtObject std::make_unique<StreamAtObject>
