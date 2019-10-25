#include "R.hpp"

// R type operators implementations
void R_TYPE::SLL(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt)
{
    write_register(rd, read_register(rt) << shamt);
}
void R_TYPE::SRL(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt)
{

}
void R_TYPE::SRA(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt)
{

}
void R_TYPE::SLLV(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt)
{
    write_register(rd, read_register(rt) << read_register(rs));
}
void R_TYPE::SRLV(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt) {}
void R_TYPE::SRAV(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt) {}
void R_TYPE::JR(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt) {}
void R_TYPE::JALR(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt) {}
void R_TYPE::SYSCALL(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt) {}
void R_TYPE::MFHI(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt)
{
    write_register(rd, read_HI());
}
void R_TYPE::MTHI(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt)
{
    write_HI(read_register(rd));
}
void R_TYPE::MFLO(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt)
{
    write_register(rd, read_LO());
}
void R_TYPE::MTLO(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt)
{
    write_LO(read_register(rd));
}
void R_TYPE::MULT(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt) {}
void R_TYPE::MULTU(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt) {}
void R_TYPE::DIV(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt) {}
void R_TYPE::DIVU(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt) {}
void R_TYPE::ADD(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt) {}
void R_TYPE::ADDU(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt)
{
    write_register(rd, read_register(rs) + read_register(rt));
}
void R_TYPE::SUB(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt) {}
void R_TYPE::SUBU(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt)
{
    write_register(rd, read_register(rs) - read_register(rt));
}
void R_TYPE::AND(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt)
{
    write_register(rd, read_register(rs) & read_register(rt));
}
void R_TYPE::OR(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt)
{
    write_register(rd, read_register(rs) | read_register(rt));
}
void R_TYPE::XOR(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt)
{
    write_register(rd, read_register(rs) ^ read_register(rt));
}
void R_TYPE::NOR(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt)
{
    write_register(rd, ~(read_register(rs) | read_register(rt)));
}
void R_TYPE::SLT(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt){}
void R_TYPE::SLTU(const uchar &rs, const uchar &rt, const uchar &rd, const uchar &shamt) {}