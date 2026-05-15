0x00000000000011a9 <+0>:     endbr64
0x00000000000011ad <+4>:     push   rbp
0x00000000000011ae <+5>:     mov    rbp,rsp
0x00000000000011b1 <+8>:     sub    rsp,0x30
0x00000000000011b5 <+12>:    mov    QWORD PTR [rbp-0x28],rdi
0x00000000000011b9 <+16>:    mov    DWORD PTR [rbp-0x2c],esi
0x00000000000011bc <+19>:    mov    edi,0x10
0x00000000000011c1 <+24>:    call   0x10b0 <malloc@plt>
0x00000000000011c6 <+29>:    mov    QWORD PTR [rip+0x2e4b],rax        # 0x4018 <first_node>
0x00000000000011cd <+36>:    mov    rax,QWORD PTR [rip+0x2e44]        # 0x4018 <first_node>
0x00000000000011d4 <+43>:    mov    rdx,QWORD PTR [rbp-0x28]
0x00000000000011d8 <+47>:    mov    edx,DWORD PTR [rdx]
0x00000000000011da <+49>:    mov    DWORD PTR [rax],edx
0x00000000000011dc <+51>:    mov    rax,QWORD PTR [rip+0x2e35]        # 0x4018 <first_node>
0x00000000000011e3 <+58>:    mov    QWORD PTR [rax+0x8],0x0
0x00000000000011eb <+66>:    mov    rax,QWORD PTR [rip+0x2e26]        # 0x4018 <first_node>
0x00000000000011f2 <+73>:    mov    QWORD PTR [rbp-0x10],rax
0x00000000000011f6 <+77>:    mov    DWORD PTR [rbp-0x14],0x1
0x00000000000011fd <+84>:    jmp    0x124d <create_linked_list+164>
0x00000000000011ff <+86>:    mov    edi,0x10
0x0000000000001204 <+91>:    call   0x10b0 <malloc@plt>
0x0000000000001209 <+96>:    mov    QWORD PTR [rbp-0x8],rax
0x000000000000120d <+100>:   mov    eax,DWORD PTR [rbp-0x14]
0x0000000000001210 <+103>:   cdqe
0x0000000000001212 <+105>:   lea    rdx,[rax*4+0x0]
0x000000000000121a <+113>:   mov    rax,QWORD PTR [rbp-0x28]
0x000000000000121e <+117>:   add    rax,rdx
0x0000000000001221 <+120>:   mov    edx,DWORD PTR [rax]
0x0000000000001223 <+122>:   mov    rax,QWORD PTR [rbp-0x8]
0x0000000000001227 <+126>:   mov    DWORD PTR [rax],edx
0x0000000000001229 <+128>:   mov    rax,QWORD PTR [rbp-0x8]
0x000000000000122d <+132>:   mov    QWORD PTR [rax+0x8],0x0
0x0000000000001235 <+140>:   mov    rax,QWORD PTR [rbp-0x10]
0x0000000000001239 <+144>:   mov    rdx,QWORD PTR [rbp-0x8]
0x000000000000123d <+148>:   mov    QWORD PTR [rax+0x8],rdx
0x0000000000001241 <+152>:   mov    rax,QWORD PTR [rbp-0x8]
0x0000000000001245 <+156>:   mov    QWORD PTR [rbp-0x10],rax
0x0000000000001249 <+160>:   add    DWORD PTR [rbp-0x14],0x1
0x000000000000124d <+164>:   mov    eax,DWORD PTR [rbp-0x14]
0x0000000000001250 <+167>:   cmp    eax,DWORD PTR [rbp-0x2c]
0x0000000000001253 <+170>:   jl     0x11ff <create_linked_list+86>
0x0000000000001255 <+172>:   nop
0x0000000000001256 <+173>:   nop
0x0000000000001257 <+174>:   leave
0x0000000000001258 <+175>:   ret