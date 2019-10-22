#ifndef __java_lang_ThreadLocal_ThreadLocalMapProxy_H
#define __java_lang_ThreadLocal_ThreadLocalMapProxy_H


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
#include "java\lang\ThreadLocal_ThreadLocalMap_EntryProxy.h"

namespace java
{
	namespace lang
	{
		class ThreadLocal_ThreadLocalMapProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ThreadLocal_ThreadLocalMapProxy(void* unused);
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
			ThreadLocal_ThreadLocalMapProxy(jobject obj);

			virtual ~ThreadLocal_ThreadLocalMapProxy();
			ThreadLocal_ThreadLocalMapProxy& operator=(const ThreadLocal_ThreadLocalMapProxy& rhs);

			// methods

		};
	}
}


#endif
