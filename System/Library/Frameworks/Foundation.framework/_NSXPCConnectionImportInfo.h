/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSLock, NSMutableDictionary;

@interface _NSXPCConnectionImportInfo : NSObject {

	unsigned long long _generationCount;
	NSLock* _lock;
	CFDictionaryRef _proxyNumberToCount;
	NSMutableDictionary* _remoteSideEntitlementCache;

}
-(id)_valueForEntitlement:(id)arg1 auditToken:(SCD_Struct_NS67)arg2 ;
-(void)addProxy:(id)arg1 ;
-(BOOL)removeProxy:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

