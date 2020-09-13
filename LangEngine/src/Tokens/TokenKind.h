#pragma once
#include <cstdint>
#include "../LangEngineDef.h"

namespace LangEngine::Tokens {

	typedef enum class _tokenKind : std::uint32_t {

		//Characters
		LEFT_PARENTH = 0,
		RIGHT_PARENTH = BIT(1),
		LEFT_BRACE = BIT(2),
		RIGHT_BRACE = BIT(3),
		COMMA = BIT(4),
		DOT = BIT(5),
		MINUS = BIT(6),
		PLUS = BIT(7),
		SEMICOLON = BIT(8),
		SLASH = BIT(9),
		STAR = BIT(10),

		BANG = BIT(11),
		BANG_EQUAL = BIT(12),
		EQUAL = BIT(13),
		EQUAL_EQUAL = BIT(14),
		GREATER = BIT(15),
		GREATER_EQUAL = BIT(16),
		LESS = BIT(17),
		LESS_EQUAL = BIT(18),

		//Literals
		IDENTIFIER = BIT(19),
		STRING = BIT(20),
		NUMBER = BIT(21),


		//Keywords
		AND = BIT(22),
		CLASS = BIT(23),
		ELSE = BIT(24),
		FALSE = BIT(25),
		FUN = BIT(26),
		FOR = BIT(27),
		IF = BIT(28),
		NIL = BIT(29),
		OR = BIT(30),
		PRINT = BIT(31),
		RETURN = BIT(32),
		SUPER = BIT(33),
		THIS = BIT(34),
		TRUE = BIT(35),
		VAR = BIT(36),
		WHILE = BIT(37),

		EOF = BIT(38)


	} TokenKind;
}