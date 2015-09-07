#pragma once

#pragma warning(disable:4127)   // conditional expression is constant

#include <string>
#include <cstdint>
#include <memory>
#include <algorithm>
#include <deque>
#include <unordered_map>
#include <set>
#include <filesystem>

#define PLATFORM_WINDOWS
#define PLATFORM_X64
#define ASSERT(x) do { if (!(x)) __debugbreak(); } while(0) 

#include "Hash.h"
#include "Handle.h"
#include "BumpAllocator.h"
#include "ArrayRef.h"
#include "Buffer.h"
#include "StringRef.h"
#include "FileTracker.h"
#include "BitVector.h"
#include "Diagnostics.h"
#include "Trivia.h"
#include "Token.h"
#include "Lexer.h"
#include "TokenConsumer.h"
#include "Preprocessor.h"
#include "SyntaxFacts.h"