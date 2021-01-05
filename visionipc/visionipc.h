#pragma once

#include <cstdint>
#include <cstddef>

#define VISIONIPC_MAX_FDS 64

struct VIPCBufExtra {
  uint32_t frame_id;
  uint64_t timestamp_sof;
  uint64_t timestamp_eof;
};

struct VisionIpcPacket {
  uint64_t server_id;
  size_t idx;
  struct VIPCBufExtra extra;
};
