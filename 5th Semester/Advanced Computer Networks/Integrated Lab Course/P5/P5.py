def fragment(packet, mtu):
    header, payload = packet[:20], packet[20:]
    fragments = [header + payload[i:i + mtu-20] for i in range(0, len(payload), mtu-20)]
    return fragments

def reassemble(fragments):
    return b"".join(fragments)

packet = b"A" * 100
fragments = fragment(packet, 40)
print("Fragments:", fragments)
print("Reassembled:", reassemble(fragments))