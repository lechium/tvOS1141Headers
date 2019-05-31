/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCSessionConfiguration : NSObject {

	unsigned long long _maxRemoteParticipants;
	long long _sessionType;

}

@property (assign,nonatomic) unsigned long long maxRemoteParticipants;              //@synthesize maxRemoteParticipants=_maxRemoteParticipants - In the implementation block
@property (assign,nonatomic) long long sessionType;                                 //@synthesize sessionType=_sessionType - In the implementation block
@property (nonatomic,readonly) BOOL isContinuity; 
-(BOOL)applyConfigurationUsingClientDict:(id)arg1 ;
-(id)initWithClientDictionary:(id)arg1 ;
-(BOOL)updateWithClientDictionary:(id)arg1 ;
-(BOOL)isContinuity;
-(unsigned long long)maxRemoteParticipants;
-(void)setMaxRemoteParticipants:(unsigned long long)arg1 ;
-(long long)sessionType;
-(void)setSessionType:(long long)arg1 ;
@end

