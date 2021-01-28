#ifndef PINKOODIDLL_GLOBAL_H
#define PINKOODIDLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PINKOODIDLL_LIBRARY)
#  define PINKOODIDLL_EXPORT Q_DECL_EXPORT
#else
#  define PINKOODIDLL_EXPORT Q_DECL_IMPORT
#endif

#endif // PINKOODIDLL_GLOBAL_H
