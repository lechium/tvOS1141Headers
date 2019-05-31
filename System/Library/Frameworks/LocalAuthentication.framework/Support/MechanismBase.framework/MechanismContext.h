/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LABackoffCounter, OS_dispatch_queue;
@class NSObject;

@interface MechanismContext : NSObject {

	id<LABackoffCounter> _backoffCounter;
	NSObject*<OS_dispatch_queue> _serverQueue;

}

@property (nonatomic,retain) id<LABackoffCounter> backoffCounter;                   //@synthesize backoffCounter=_backoffCounter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serverQueue;              //@synthesize serverQueue=_serverQueue - In the implementation block
+(id)sharedInstance;
-(NSObject*<OS_dispatch_queue>)serverQueue;
-(void)setServerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setBackoffCounter:(id<LABackoffCounter>)arg1 ;
-(id<LABackoffCounter>)backoffCounter;
@end
