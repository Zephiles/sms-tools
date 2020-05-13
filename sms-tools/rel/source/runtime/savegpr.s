.global _savegpr_14
.global _savegpr_15
.global _savegpr_16
.global _savegpr_17
.global _savegpr_18
.global _savegpr_19
.global _savegpr_20
.global _savegpr_21
.global _savegpr_22
.global _savegpr_23
.global _savegpr_24
.global _savegpr_25
.global _savegpr_26
.global _savegpr_27
.global _savegpr_28
.global _savegpr_29
.global _savegpr_30
.global _savegpr_31

_savegpr_14: stw %r14,-0x48(%r11)
_savegpr_15: stw %r15,-0x44(%r11)
_savegpr_16: stw %r16,-0x40(%r11)
_savegpr_17: stw %r17,-0x3C(%r11)
_savegpr_18: stw %r18,-0x38(%r11)
_savegpr_19: stw %r19,-0x34(%r11)
_savegpr_20: stw %r20,-0x30(%r11)
_savegpr_21: stw %r21,-0x2C(%r11)
_savegpr_22: stw %r22,-0x28(%r11)
_savegpr_23: stw %r23,-0x24(%r11)
_savegpr_24: stw %r24,-0x20(%r11)
_savegpr_25: stw %r25,-0x1C(%r11)
_savegpr_26: stw %r26,-0x18(%r11)
_savegpr_27: stw %r27,-0x14(%r11)
_savegpr_28: stw %r28,-0x10(%r11)
_savegpr_29: stw %r29,-0xC(%r11)
_savegpr_30: stw %r30,-0x8(%r11)
_savegpr_31:
stw %r31,-0x4(%r11)
blr