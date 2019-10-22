#ifndef __java_lang_ThreadLocal_ThreadLocalMap_EntryProxy_H
#define __java_lang_ThreadLocal_ThreadLocalMap_EntryProxy_H


#include <jni.h>
#include <string>

#include "net/sourceforge/jnipp/JBooleanArrayHelper.h"
#include "net/sourceforge/jnipp/JByteArrayHelper.h"
#include "net/sourceforge/jnipp/JCharArrayHelper.h"
#include "net/sourceforge/jnipp/JDoubleArrayHelper.h"
#include "net/sourceforge/jnipp/JFloatArrayHelper.h"
#include "net/sourceforge/jnipp/JIntArrayHelper.h"
#include "net/sourceforge/jnipp/JLongArrayHelper.h"
#include "net/sourceforge/jnipp/JShortArrayHelper.h"
#include "net/sourceforge/jnipp/JStringHelper.h"
#include "net/sourceforge/jnipp/JStringHelperArray.h"
#include "net/sourceforge/jnipp/ProxyArray.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxyForward.h"

namespace java
{
	namespace lang
	{
		class ThreadLocal_ThreadLocalMap_EntryProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ThreadLocal_ThreadLocalMap_EntryProxy(void* unused);
			virtual jobject _getPeerObject() const;

		public:
			static jclass _getObjectClass();
			static inline std::string _getClassName()
			{
				return className;
			}

			jclass getObjectClass();
			operator jobject();
			// constructors
			ThreadLocal_ThreadLocalMap_EntryProxy(jobject obj);

			virtual ~ThreadLocal_ThreadLocalMap_EntryProxy();
			ThreadLocal_ThreadLocalMap_EntryProxy& operator=(const ThreadLocal_ThreadLocalMap_EntryProxy& rhs);

			// methods

		};
	}
}


#endif
