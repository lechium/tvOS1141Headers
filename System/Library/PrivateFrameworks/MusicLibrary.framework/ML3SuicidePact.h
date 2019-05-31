/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface ML3SuicidePact : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableSet* _signatures;
	int _notifyToken;

}

@property (nonatomic,readonly) BOOL isSigned; 
+(id)sharedPact;
-(id)init;
-(void)dealloc;
-(BOOL)isSigned;
-(void)signForReason:(long long)arg1 ;
-(void)_carryOutSuicidePact;
-(void)secedeForReason:(long long)arg1 ;
-(BOOL)isSignedForReason:(long long)arg1 ;
-(void)execute;
@end

