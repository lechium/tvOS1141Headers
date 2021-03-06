/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKInviteInternal, GKPlayer, NSString, NSData;

@interface GKInvite : NSObject {

	BOOL _cancelled;
	GKInviteInternal* _internal;
	GKPlayer* _sender;

}

@property (retain) GKInviteInternal * internal;                              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) NSString * inviteID; 
@property (nonatomic,readonly) NSData * sessionToken; 
@property (nonatomic,readonly) NSString * message; 
@property (nonatomic,readonly) BOOL isNearby; 
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain,readonly) GKPlayer * sender;                     //@synthesize sender=_sender - In the implementation block
@property (nonatomic,retain,readonly) NSString * inviter; 
@property (getter=isHosted,nonatomic,readonly) BOOL hosted; 
@property (nonatomic,readonly) unsigned long long playerGroup; 
@property (nonatomic,readonly) unsigned playerAttributes; 
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
-(BOOL)isHosted;
-(id)init;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GKPlayer *)sender;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(NSString *)inviter;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(GKInviteInternal *)internal;
-(void)setInternal:(GKInviteInternal *)arg1 ;
@end

