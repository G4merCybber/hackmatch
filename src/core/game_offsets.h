#pragma once

#include <cstddef>
#include <cstdint>
#include <string_view>

namespace hackmatch::game_offsets
{
// Обновляем версию билда на текущую, чтобы чит считал сборку совместимой
inline constexpr std::string_view supported_build = "2026_updated";

namespace methods
{
// Твои новые офсеты из Il2CppDumper:
inline constexpr std::uintptr_t fire_primary_shot = 0x1814A80; // (или новый адрес выстрела, если есть)
inline constexpr std::uintptr_t physics_raycast = 0x17D9740;
inline constexpr std::uintptr_t physics_raycast_all = 0x17D84F0;

// Добавляем наш рабочий адрес для Аимбота:
inline constexpr std::uintptr_t camera_look_at = 0xB3BB40; 
} // namespace methods

namespace fields
{
// Поля игрока (оставляем старые или правим, если ЕСП поедет)
inline constexpr std::ptrdiff_t identity_player_data = 0x20;
inline constexpr std::ptrdiff_t player_data_name = 0x20;
inline constexpr std::ptrdiff_t player_items = 0x60;
inline constexpr std::ptrdiff_t player_selected_item = 0x108;
inline constexpr std::ptrdiff_t player_shield_state = 0x10C;
inline constexpr std::ptrdiff_t player_stats = 0x110;
inline constexpr std::ptrdiff_t player_movement = 0x11C;
inline constexpr std::ptrdiff_t player_ads = 0x161;
inline constexpr std::ptrdiff_t player_sprinting = 0x164; // Используется для автобега в hooks.cpp
inline constexpr std::ptrdiff_t player_rigidbody = 0x180;
} // namespace fields
} // namespace hackmatch::game_offsets
