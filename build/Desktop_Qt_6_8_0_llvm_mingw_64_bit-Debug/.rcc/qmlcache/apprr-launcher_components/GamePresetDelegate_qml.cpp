// /qt/qml/rr_launcher/components/GamePresetDelegate.qml
#include <QtQml/qqmlprivate.h>
#include <QtCore/qdatetime.h>
#include <QtCore/qobject.h>
#include <QtCore/qstring.h>
#include <QtCore/qstringlist.h>
#include <QtCore/qtimezone.h>
#include <QtCore/qurl.h>
#include <QtCore/qvariant.h>
#include <QtQml/qjsengine.h>
#include <QtQml/qjsprimitivevalue.h>
#include <QtQml/qjsvalue.h>
#include <QtQml/qqmlcomponent.h>
#include <QtQml/qqmlcontext.h>
#include <QtQml/qqmlengine.h>
#include <QtQml/qqmllist.h>
#include <type_traits>
namespace QmlCacheGeneratedCode {
namespace _qt_qml_rr_launcher_components_GamePresetDelegate_qml {
extern const unsigned char qmlData alignas(16) [];
extern const unsigned char qmlData alignas(16) [] = {

0x71,0x76,0x34,0x63,0x64,0x61,0x74,0x61,
0x42,0x0,0x0,0x0,0x0,0x8,0x6,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x28,0x2,0x0,0x0,0x62,0x37,0x65,0x61,
0x36,0x62,0x37,0x61,0x37,0x38,0x66,0x65,
0x33,0x62,0x66,0x37,0x31,0x66,0x34,0x61,
0x38,0x34,0x37,0x35,0x35,0x39,0x37,0x63,
0x61,0x35,0x39,0x66,0x34,0x62,0x31,0x32,
0x39,0x33,0x35,0x64,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xcb,0x88,0x2a,0x4c,
0xee,0xdf,0x21,0x69,0xa8,0x61,0x81,0x8b,
0x99,0x9d,0xd4,0xf6,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x23,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x0,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x88,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x18,0x1,0x0,0x0,0x20,0x1,0x0,0x0,
0x38,0x1,0x0,0x0,0x50,0x1,0x0,0x0,
0x68,0x1,0x0,0x0,0x78,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x51,0x0,0x75,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x52,0x0,0x65,0x0,
0x63,0x0,0x74,0x0,0x61,0x0,0x6e,0x0,
0x67,0x0,0x6c,0x0,0x65,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x73,0x0,0x64,0x0,
0x52,0x0,0x6f,0x0,0x6f,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x63,0x0,0x6f,0x0,
0x6c,0x0,0x6f,0x0,0x72,0x0,0x0,0x0,
0x3,0x0,0x0,0x0,0x72,0x0,0x65,0x0,
0x64,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x24,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x10,0x0,
0xf,0x2,0x0,0x0,0x28,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,
0x0,0x0,0x1,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x60,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x60,0x0,0x0,0x0,
0x60,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0x60,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x78,0x0,0x0,0x0,0x3,0x0,0x10,0x0,
0x0,0x0,0x0,0x0,0x78,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x78,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x3,0x0,0x0,0x0,
0x5,0x0,0x0,0x20,0x4,0x0,0x50,0x0,
0x4,0x0,0x0,0x0,0x0,0x0,0x3,0x0,
0x0,0x0,0x0,0x0,0x5,0x0,0x0,0x0,
0x6,0x0,0x50,0x0,0x6,0x0,0xc0,0x0
};
QT_WARNING_PUSH
QT_WARNING_DISABLE_MSVC(4573)
extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[] = { { 0, 0, nullptr, nullptr } };
QT_WARNING_POP
}
}
