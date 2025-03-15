; int __fastcall main(int argc, const char **argv, const char **envp)
main proc near

n1= dword ptr -18h
n2= dword ptr -14h
var_10= qword ptr -10h
arg_8= qword ptr  10h

argc = ecx
argv = rdx
; __unwind { // __GSHandlerCheck
mov     [rsp+arg_8], rbx
push    rdi
sub     rsp, 30h
mov     rax, cs:__security_cookie
xor     rax, rsp
mov     [rsp+38h+var_10], rax
movsxd  rdi, argc
lea     r8, [rsp+38h+n2]
lea     rcx, _Format
lea     argv, [rsp+38h+n1]
call    scanf_s
mov     edx, [rsp+38h+n1]
lea     rcx, aN11D
inc     edx
call    printf
mov     edx, 3
lea     rcx, a12D
call    printf
mov     edx, [rsp+38h+n1]
lea     rcx, aN1N2D_1
add     edx, [rsp+38h+n2]
call    printf
mov     edx, [rsp+38h+n1]
lea     rcx, aN11D_0
dec     edx
call    printf
mov     edx, 0FFFFFFFFh
lea     rcx, a12D_0
call    printf
mov     edx, [rsp+38h+n1]
lea     rcx, aN1N2D
sub     edx, [rsp+38h+n2]
call    printf
imul    edx, [rsp+38h+n1], 7
lea     rcx, aN17D
call    printf
mov     edx, [rsp+38h+n1]
lea     rcx, aN18D
lea     edx, ds:0[argv*8]
call    printf
mov     edx, 9
lea     rcx, a33D
call    printf
mov     eax, [rsp+38h+n1]
lea     rcx, aN165D
lea     edx, [rax+rax*2]
lea     edx, ds:5[argv*2]
call    printf
mov     edx, [rsp+38h+n1]
lea     rcx, aN1N2D_0
imul    edx, [rsp+38h+n2]
call    printf
mov     edx, edi
lea     rcx, aArgc16U
shr     edx, 4
call    printf
mov     argv, rdi
lea     rcx, aArgc16Llu
shr     argv, 4
call    printf
mov     eax, 38E38E39h
lea     rcx, aArgc9U
mul     edi
shr     edx, 1
call    printf
mov     rax, 0E38E38E38E38E38Fh
lea     rcx, aArgc9Llu
mul     rdi
shr     argv, 3
call    printf
mov     eax, 24924925h
lea     rcx, aArgc7U
mul     edi
mov     eax, edi
sub     eax, edx
shr     eax, 1
add     edx, eax
shr     edx, 2
call    printf
mov     rax, 2492492492492493h
lea     rcx, aArgc7Llu
mul     rdi
mov     rax, rdi
sub     rax, argv
shr     rax, 1
add     argv, rax
shr     argv, 2
call    printf
mov     eax, edi
lea     rcx, aArgc4D
cdq
and     edx, 1FFFh
add     edx, eax
sar     edx, 0Dh
call    printf
mov     rax, rdi
lea     rcx, aArgc4Lld
cqo
and     edx, 1FFFh
add     argv, rax
sar     argv, 0Dh
call    printf
mov     eax, edi
lea     rcx, aArgc4D
cdq
and     edx, 1FFFh
add     edx, eax
sar     edx, 0Dh
neg     edx
call    printf
mov     rax, rdi
lea     rcx, aArgc4Lld
cqo
and     edx, 1FFFh
add     argv, rax
sar     argv, 0Dh
neg     argv
call    printf
mov     eax, 38E38E39h
lea     rcx, aArgc9D
imul    edi
sar     edx, 1
mov     eax, edx
shr     eax, 1Fh
add     edx, eax
call    printf
mov     rax, 1C71C71C71C71C72h
lea     rcx, aArgc9Lld
imul    rdi
mov     rax, argv
shr     rax, 3Fh
add     argv, rax
call    printf
mov     eax, 92492493h
lea     rcx, aArgc7D_0
imul    edi
add     edx, edi
sar     edx, 2
mov     eax, edx
shr     eax, 1Fh
add     edx, eax
call    printf
mov     rax, 4924924924924925h
lea     rcx, aArgc7Lld
imul    rdi
sar     argv, 1
mov     rax, argv
shr     rax, 3Fh
add     argv, rax
call    printf
mov     eax, 99999999h
lea     rcx, aArgc5D
imul    edi
sar     edx, 1
mov     eax, edx
shr     eax, 1Fh
add     edx, eax
call    printf
mov     rax, 9999999999999999h
lea     rcx, aArgc5Lld
imul    rdi
sar     argv, 1
mov     rax, argv
shr     rax, 3Fh
add     argv, rax
call    printf
mov     eax, 6DB6DB6Dh
imul    edi
sub     edx, edi
lea     rcx, aArgc7D
sar     edx, 2
mov     eax, edx
shr     eax, 1Fh
add     edx, eax
call    printf
mov     rax, 0B6DB6DB6DB6DB6DBh
lea     rcx, aArgc7Lld_0
imul    rdi
sar     argv, 1
mov     rax, argv
shr     rax, 3Fh
add     argv, rax
call    printf
xor     eax, eax
mov     rcx, [rsp+38h+var_10]
xor     rcx, rsp        ; StackCookie
call    __security_check_cookie
mov     rbx, [rsp+38h+arg_8]
add     rsp, 30h
pop     rdi
retn
; } // starts at 1400010E0
main endp
