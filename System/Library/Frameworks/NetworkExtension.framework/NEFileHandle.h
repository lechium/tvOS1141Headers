/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFileHandle;

@interface NEFileHandle : NSObject {

	BOOL _launchOwnerWhenReadable;
	NSFileHandle* _handle;

}

@property (readonly) unsigned long long type; 
@property (readonly) NSObject*<OS_xpc_object> dictionary; 
@property (readonly) BOOL launchOwnerWhenReadable;                     //@synthesize launchOwnerWhenReadable=_launchOwnerWhenReadable - In the implementation block
@property (readonly) NSFileHandle * handle;                            //@synthesize handle=_handle - In the implementation block
+(id)fileHandleFromDictionary:(id)arg1 ;
-(NSFileHandle *)handle;
-(NSObject*<OS_xpc_object>)dictionary;
-(unsigned long long)type;
-(id)initFromDictionary:(id)arg1 ;
-(id)initWithFileDescriptor:(int)arg1 launchOwnerWhenReadable:(BOOL)arg2 ;
-(BOOL)launchOwnerWhenReadable;
@end

