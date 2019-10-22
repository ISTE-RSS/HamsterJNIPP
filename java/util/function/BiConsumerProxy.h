#ifndef __java_util_function_BiConsumerProxy_H
#define __java_util_function_BiConsumerProxy_H


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
	namespace util
	{
		namespace function
		{
			class BiConsumerProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				BiConsumerProxy(void* unused);
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
				BiConsumerProxy(jobject obj);

				virtual ~BiConsumerProxy();
				BiConsumerProxy& operator=(const BiConsumerProxy& rhs);

				// methods
				/*
				 * void accept(Object, Object);
				 */
				void accept(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1);
				/*
				 * BiConsumer andThen(BiConsumer);
				 */
				::java::util::function::BiConsumerProxy andThen(::java::util::function::BiConsumerProxy p0);

			};
		}
	}
}


#endif
