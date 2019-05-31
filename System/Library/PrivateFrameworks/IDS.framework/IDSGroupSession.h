/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _IDSGroupSession, NSString;

@interface IDSGroupSession : NSObject {

	_IDSGroupSession* _internal;

}

@property (nonatomic,readonly) NSString * sessionID; 
@property (nonatomic,readonly) NSString * destination; 
@property (nonatomic,readonly) unsigned sessionEndedReason; 
-(id)_internal;
-(NSString *)sessionID;
-(void)dealloc;
-(unsigned)state;
-(void)setPreferences:(id)arg1 ;
-(NSString *)destination;
-(unsigned)sessionEndedReason;
-(void)updateMembers:(id)arg1 forGroupID:(id)arg2 isTriggeredLocally:(BOOL)arg3 ;
-(void)setParticipantInfo:(id)arg1 ;
-(void)joinGroupSession;
-(void)leaveGroupSession;
-(void)groupSessionParticipantsWithRequestID:(id)arg1 ;
-(id)initWithAccount:(id)arg1 options:(id)arg2 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
@end
