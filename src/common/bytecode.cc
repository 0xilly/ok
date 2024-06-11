#include <common/defs.hh>
#include <common/bytecode.hh>

#include <map>

namespace ok {
	auto name_register_map = std::map<Register, std::string> {
		#define R(kind, name) {Register::kind, name},
			_REGISTER_LIST
		#undef R
	};

	auto register_to_string(Register reg) -> const std::string {
		return name_register_map[reg];
	}

	auto register_from_string(const std::string& str) -> Register {
		for (const auto& [reg, name] : name_register_map) {
			if (name == str) {
				return reg;
			}
		}
		return Register::INVALID;
	}

	auto name_bytecode_map = std::map<Bytecode, std::string> {
		#define B(kind, name) {Bytecode::kind, name},
			_BYTECODE_LIST
		#undef B
	};

	auto bytecode_to_string(Bytecode bc) -> const std::string {
		return name_bytecode_map[bc];
	}
	
	auto bytecode_from_string(const std::string& str) -> Bytecode {
		for (const auto& [bc, name] : name_bytecode_map) {
			if (name == str) {
				return bc;
			}
		}
		return Bytecode::INVALID;
	}
}
