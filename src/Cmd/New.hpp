#pragma once

#include "../Rustify.hpp"

#include <span>

// NOLINTNEXTLINE(readability-identifier-naming)
static inline constexpr StringRef newDesc = "Create a new poac project";

String createPoacToml(StringRef projectName) noexcept;

int newMain(std::span<const StringRef> args);
void newHelp() noexcept;
