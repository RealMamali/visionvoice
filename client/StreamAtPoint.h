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

#include <game/CVector.h>

#include "LocalStream.h"
#include "Channel.h"

class StreamAtPoint : public LocalStream {

    StreamAtPoint() = delete;
    StreamAtPoint(const StreamAtPoint&) = delete;
    StreamAtPoint(StreamAtPoint&&) = delete;
    StreamAtPoint& operator=(const StreamAtPoint&) = delete;
    StreamAtPoint& operator=(StreamAtPoint&&) = delete;

public:

    explicit StreamAtPoint(D3DCOLOR color, std::string name,
                           float distance, const CVector& position) noexcept;

    ~StreamAtPoint() noexcept = default;

public:

    void SetPosition(const CVector& position) noexcept;

private:

    void OnChannelCreate(const Channel& channel) noexcept override;

private:

    CVector position;

};

using StreamAtPointPtr = std::unique_ptr<StreamAtPoint>;
#define MakeStreamAtPoint std::make_unique<StreamAtPoint>
