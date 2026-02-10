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

class StreamAtVehicle : public LocalStream {

    StreamAtVehicle() = delete;
    StreamAtVehicle(const StreamAtVehicle&) = delete;
    StreamAtVehicle(StreamAtVehicle&&) = delete;
    StreamAtVehicle& operator=(const StreamAtVehicle&) = delete;
    StreamAtVehicle& operator=(StreamAtVehicle&&) = delete;

public:

    explicit StreamAtVehicle(D3DCOLOR color, std::string name,
                             float distance, WORD vehicleId) noexcept;

    ~StreamAtVehicle() noexcept = default;

public:

    void Tick() noexcept override;

private:

    void OnChannelCreate(const Channel& channel) noexcept override;

private:

    const WORD vehicleId;

};

using StreamAtVehiclePtr = std::unique_ptr<StreamAtVehicle>;
#define MakeStreamAtVehicle std::make_unique<StreamAtVehicle>
