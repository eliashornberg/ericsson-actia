#pragma once
#include <receiver/ublox/types.hpp>

namespace receiver {
namespace ublox {

class Decoder;

using CfgLayer                                  = uint8_t;
UBLOX_CONSTEXPR static CfgLayer CFG_LAYER_RAM   = 0x01;
UBLOX_CONSTEXPR static CfgLayer CFG_LAYER_BBR   = 0x02;
UBLOX_CONSTEXPR static CfgLayer CFG_LAYER_FLASH = 0x04;

using CfgKey = uint32_t;

UBLOX_CONSTEXPR static CfgKey CFG_KEY_RATE_MEAS        = 0x30210001;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_NAVHPG_DGNSSMODE = 0x20140011;

UBLOX_CONSTEXPR static CfgKey CFG_KEY_UART1_ENABLED       = 0x10520005;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_UART1_BAUDRATE      = 0x40520001;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_UART1_STOPBITS      = 0x20520002;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_UART1_DATABITS      = 0x20520003;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_UART1_PARITY        = 0x20520004;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_UART1INPROT_UBX     = 0x10730001;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_UART1INPROT_NMEA    = 0x10730002;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_UART1INPROT_RTCM3X  = 0x10730004;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_UART1INPROT_SPARTN  = 0x10730005;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_UART1OUTPROT_UBX    = 0x10740001;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_UART1OUTPROT_NMEA   = 0x10740002;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_UART1OUTPROT_RTCM3X = 0x10740004;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_UART2_ENABLED       = 0x10530005;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_UART2_BAUDRATE      = 0x40530001;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_UART2_STOPBITS      = 0x20530002;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_UART2_DATABITS      = 0x20530003;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_UART2_PARITY        = 0x20530004;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_UART2INPROT_UBX     = 0x10750001;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_UART2INPROT_NMEA    = 0x10750002;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_UART2INPROT_RTCM3X  = 0x10750004;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_UART2INPROT_SPARTN  = 0x10750005;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_UART2OUTPROT_UBX    = 0x10760001;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_UART2OUTPROT_NMEA   = 0x10760002;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_UART2OUTPROT_RTCM3X = 0x10760004;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_I2C_ENABLED         = 0x10510003;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_I2C_ADDRESS         = 0x20510001;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_I2CINPROT_UBX       = 0x10710001;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_I2CINPROT_NMEA      = 0x10710002;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_I2CINPROT_RTCM3X    = 0x10710004;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_I2CINPROT_SPARTN    = 0x10710005;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_I2COUTPROT_UBX      = 0x10720001;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_I2COUTPROT_NMEA     = 0x10720002;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_I2COUTPROT_RTCM3X   = 0x10720004;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_USB_ENABLED         = 0x10650001;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_USBINPROT_UBX       = 0x10770001;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_USBINPROT_NMEA      = 0x10770002;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_USBINPROT_RTCM3X    = 0x10770004;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_USBINPROT_SPARTN    = 0x10770005;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_USBOUTPROT_UBX      = 0x10780001;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_USBOUTPROT_NMEA     = 0x10780002;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_USBOUTPROT_RTCM3X   = 0x10780004;

UBLOX_CONSTEXPR static CfgKey CFG_KEY_MSGOUT_UBX_NAV_PVT_UART1 = 0x20910007;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_MSGOUT_UBX_NAV_PVT_UART2 = 0x20910008;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_MSGOUT_UBX_NAV_PVT_I2C   = 0x20910006;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_MSGOUT_UBX_NAV_PVT_USB   = 0x20910009;

UBLOX_CONSTEXPR static CfgKey CFG_KEY_INFMSG_UBX_UART1 = 0x20920002;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_INFMSG_UBX_UART2 = 0x20920003;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_INFMSG_UBX_I2C   = 0x20920001;
UBLOX_CONSTEXPR static CfgKey CFG_KEY_INFMSG_UBX_USB   = 0x20920004;

UBLOX_CONSTEXPR static uint8_t INF_ERROR   = 0x01;
UBLOX_CONSTEXPR static uint8_t INF_WARNING = 0x02;
UBLOX_CONSTEXPR static uint8_t INF_NOTICE  = 0x04;
UBLOX_CONSTEXPR static uint8_t INF_TEST    = 0x08;
UBLOX_CONSTEXPR static uint8_t INF_DEBUG   = 0x10;

class Encoder;
struct CfgValue {
    enum Type {
        UNKNOWN,
        L,
        U1,
        U2,
        U4,
        U8,
    };

    UBLOX_EXPLICIT CfgValue() UBLOX_NOEXCEPT : mType(UNKNOWN) {}

    UBLOX_NODISCARD static CfgValue from_l(bool value) UBLOX_NOEXCEPT;
    UBLOX_NODISCARD static CfgValue from_u1(uint8_t value) UBLOX_NOEXCEPT;
    UBLOX_NODISCARD static CfgValue from_u2(uint16_t value) UBLOX_NOEXCEPT;
    UBLOX_NODISCARD static CfgValue from_u4(uint32_t value) UBLOX_NOEXCEPT;
    UBLOX_NODISCARD static CfgValue from_u8(uint64_t value) UBLOX_NOEXCEPT;

    UBLOX_NODISCARD static CfgValue parse_from_key(CfgKey key, Decoder& decoder) UBLOX_NOEXCEPT;
    UBLOX_NODISCARD static CfgValue parse_from_type(Type type, Decoder& decoder) UBLOX_NOEXCEPT;
    UBLOX_NODISCARD static Type     type_from_key(CfgKey key) UBLOX_NOEXCEPT;
    UBLOX_NODISCARD static uint32_t size_from_type(Type type) UBLOX_NOEXCEPT;

    UBLOX_NODISCARD Type type() const UBLOX_NOEXCEPT { return mType; }

    UBLOX_NODISCARD bool     l() const UBLOX_NOEXCEPT;
    UBLOX_NODISCARD uint8_t  u1() const UBLOX_NOEXCEPT;
    UBLOX_NODISCARD uint16_t u2() const UBLOX_NOEXCEPT;
    UBLOX_NODISCARD uint32_t u4() const UBLOX_NOEXCEPT;
    UBLOX_NODISCARD uint64_t u8() const UBLOX_NOEXCEPT;

    UBLOX_NODISCARD uint32_t size() const UBLOX_NOEXCEPT;
    void                     serialize(Encoder& encoder) const UBLOX_NOEXCEPT;

private:
    UBLOX_EXPLICIT CfgValue(Type type, bool value) UBLOX_NOEXCEPT;
    UBLOX_EXPLICIT CfgValue(Type type, uint8_t value) UBLOX_NOEXCEPT;
    UBLOX_EXPLICIT CfgValue(Type type, uint16_t value) UBLOX_NOEXCEPT;
    UBLOX_EXPLICIT CfgValue(Type type, uint32_t value) UBLOX_NOEXCEPT;
    UBLOX_EXPLICIT CfgValue(Type type, uint64_t value) UBLOX_NOEXCEPT;

    Type mType;
    union {
        bool     mL;
        uint8_t  mU1;
        uint16_t mU2;
        uint32_t mU4;
        uint64_t mU8;
    } mValue;
};

}  // namespace ublox
}  // namespace receiver
