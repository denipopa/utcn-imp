// This file is part of the IMP project.

#include "program.h"
//modification added print method fo ropcodes

// -----------------------------------------------------------------------------
std::ostream &operator<<(std::ostream &os, Opcode op)
{
  switch (op) {
    case Opcode::PUSH_FUNC:  return os << "PUSH_FUNC";
    case Opcode::PUSH_PROTO: return os << "PUSH_PROTO";
    case Opcode::PUSH_INT: return os << "PUSH_INT";//added
    case Opcode::PEEK:       return os << "PEEK";
    case Opcode::POP:        return os << "POP";
    case Opcode::CALL:       return os << "CALL";
    case Opcode::ADD:        return os << "ADD";
    //added
    case Opcode::SUBTRACT:        return os << "SUBTRACT";
    case Opcode::MULTIPLY:        return os << "MULTIPLY";
    case Opcode::DIVIDE:        return os << "DIVIDE";
    case Opcode::MODULO:        return os << "MODULO";

    case Opcode::RET:        return os << "RET";
    case Opcode::JUMP_FALSE: return os << "JUMP_FALSE";
    case Opcode::JUMP:       return os << "JUMP";
    case Opcode::STOP:       return os << "STOP";
  }
  assert(!"invalid opcode");
}