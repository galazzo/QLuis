#ifndef QLUIS_GLOBAL_H
#define QLUIS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QLUIS_LIBRARY)
#  define QLUISSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QLUISSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QLUIS_GLOBAL_H
