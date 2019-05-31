/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKFamiliarPlayerInternal.h>

@class NSString, NSDate, GKGameInternal;

@interface GKFriendPlayerInternal : GKFamiliarPlayerInternal {

	NSString* _status;
	NSDate* _lastPlayedDate;
	GKGameInternal* _lastPlayedGame;

}
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(void)setStatus:(id)arg1 ;
-(void)dealloc;
-(id)status;
-(id)lastPlayedDate;
-(void)setLastPlayedDate:(id)arg1 ;
-(id)lastPlayedGame;
-(int)defaultFamiliarity;
-(BOOL)isFriend;
-(void)setLastPlayedGame:(id)arg1 ;
@end
