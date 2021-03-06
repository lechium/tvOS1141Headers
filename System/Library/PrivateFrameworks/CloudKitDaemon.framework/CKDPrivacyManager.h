/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface CKDPrivacyManager : NSObject {

	NSObject*<OS_dispatch_queue> _privacyManagerQueue;
	NSMutableSet* _requests;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> privacyManagerQueue;              //@synthesize privacyManagerQueue=_privacyManagerQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * requests;                                       //@synthesize requests=_requests - In the implementation block
+(id)sharedManager;
-(NSMutableSet *)requests;
-(void)setRequests:(NSMutableSet *)arg1 ;
-(id)init;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)privacyManagerQueue;
-(void)_resetPrivacySettingsForAppContainerTuple:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetPrivacySettingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPrivacyManagerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

