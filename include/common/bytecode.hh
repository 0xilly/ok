#pragma once

#include <common/defs.hh>

#include <common/registers.def>
#include <common/bytecode.def>

#include <string>

namespace ok {
	enum class Register : u8 {
		#define R(kind, name) kind,
			_REGISTER_LIST
		#undef R
	};

	auto register_to_string(Register reg) -> const std::string;
	auto register_from_string(const std::string& str) -> Register;
	
	
	enum class Bytecode : u8 {
		#define B(kind, name) kind,
			_BYTECODE_LIST
		#undef B
	};

	auto bytecode_to_string(Bytecode bc) -> const std::string;
	auto bytecode_from_string(const std::string& str) -> Bytecode;

} // namespace ok
