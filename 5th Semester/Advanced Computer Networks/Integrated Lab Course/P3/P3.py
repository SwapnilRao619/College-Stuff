def cc(data,poly=0x1021):
    crc=0xFFFF 
    for byte in data.encode():
        for bit in range(8):
            crc=((crc<<1)&0xFFFF)^(poly if (crc&0x8000) else 0)
            if(byte&(1<<(7-bit))):
                crc^=1
    return crc
data=input("Enter message: ")
print(f"CRC-CCITT: {cc(data):04X}")