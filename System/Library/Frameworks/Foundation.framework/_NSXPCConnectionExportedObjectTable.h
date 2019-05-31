/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
#import <Foundation/Foundation-Structs.h>
@class _NSXPCConnectionExportInfo, NSObject;

@interface _NSXPCConnectionExportedObjectTable : NSObject {

	opaque_pthread_mutex_t _lock;
	_NSXPCConnectionExportInfo* _proxy1;
	CFDictionaryRef _proxyNumberToObject;
	CFDictionaryRef _objectToProxyNumber;
	unsigned long long _next;
	BOOL _valid;
	NSObject*<OS_dispatch_group> _replyGroup;

}
-(id)exportedObjectForProxyNumber:(unsigned long long)arg1 ;
-(id)interfaceForProxyNumber:(unsigned long long)arg1 ;
-(void)incrementOutstandingReplyCount;
-(void)decrementOutstandingReplyCount;
-(void)setExportedObject:(id)arg1 forProxyNumber:(unsigned long long)arg2 ;
-(void)setInterface:(id)arg1 forProxyNumber:(unsigned long long)arg2 ;
-(void)receivedReleaseForProxyNumber:(unsigned long long)arg1 userQueue:(id)arg2 ;
-(void)releaseExportedObject:(unsigned long long)arg1 ;
-(unsigned long long)proxyNumberForExportedObject:(id)arg1 interface:(id)arg2 ;
-(id)init;
-(void)invalidate;
-(void)dealloc;
-(id)description;
@end

