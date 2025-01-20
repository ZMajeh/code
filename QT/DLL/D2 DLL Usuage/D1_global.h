#ifndef D1_GLOBAL_H
#define D1_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(D1_LIBRARY)
#  define D1SHARED_EXPORT Q_DECL_EXPORT
#else
#  define D1SHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // D1_GLOBAL_H
