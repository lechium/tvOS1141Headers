/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MPStoreSocialServiceTransientStatesSnapshot : NSObject {

	NSMutableDictionary* _transientFollowStatesPerProfileID;
	NSMutableDictionary* _transientFollowPendingRequestStatesPerProfileID;

}
-(id)init;
-(void)_addTransientFollowState:(long long)arg1 transientFollowPendingRequestState:(long long)arg2 forPerson:(id)arg3 ;
-(long long)transientFollowStateForPerson:(id)arg1 ;
-(long long)transientFollowPendingRequestStateForPerson:(id)arg1 ;
@end

