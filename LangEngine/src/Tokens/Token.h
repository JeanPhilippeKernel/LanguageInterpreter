#pragma once
#include "TokenKind.h"
#include <string>


namespace LangEngine::Tokens {

	class Token {
	public:
		Token(TokenKind kind, const char* lexeme, const char* literal, int line)
			:m_token_kind(kind), m_lexeme(lexeme), m_literal(literal), m_line(line) 
		{}

		~Token() = default;

	private:
		TokenKind m_token_kind;
		std::string m_lexeme;
		std::string m_literal;
		int m_line;
	};
}
