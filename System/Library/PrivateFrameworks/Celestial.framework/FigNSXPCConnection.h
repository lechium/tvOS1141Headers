/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSXPCConnection.h>

@protocol OS_dispatch_group;
@class NSObject;

@interface FigNSXPCConnection : NSXPCConnection {

	NSObject*<OS_dispatch_group> _connectionRunningGroup;
	BOOL _explicitlyInvalidated;

}

@property (nonatomic,readonly) BOOL explicitlyInvalidated;              //@synthesize explicitlyInvalidated=_explicitlyInvalidated - In the implementation block
-(void)blockUntilInvalidateHandlerHasBeenCalled;
-(BOOL)explicitlyInvalidated;
-(void)invalidate;
-(void)dealloc;
-(void)resume;
-(void)setInvalidationHandler:(/*^block*/id)arg1 ;
@end
