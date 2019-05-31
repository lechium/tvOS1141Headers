/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSharingCoordinatedAlertResult : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _activityLevel;
	unsigned _eventType;
	int _otherDevices;
	BOOL _bestIsMe;
	BOOL _skipScanPhoneCall;
	BOOL _skipScanVeryActive;
	SCD_Struct_AW15 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) unsigned eventType;                        //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) BOOL hasActivityLevel; 
@property (assign,nonatomic) unsigned activityLevel;                    //@synthesize activityLevel=_activityLevel - In the implementation block
@property (assign,nonatomic) BOOL hasOtherDevices; 
@property (assign,nonatomic) int otherDevices;                          //@synthesize otherDevices=_otherDevices - In the implementation block
@property (assign,nonatomic) BOOL hasBestIsMe; 
@property (assign,nonatomic) BOOL bestIsMe;                             //@synthesize bestIsMe=_bestIsMe - In the implementation block
@property (assign,nonatomic) BOOL hasSkipScanPhoneCall; 
@property (assign,nonatomic) BOOL skipScanPhoneCall;                    //@synthesize skipScanPhoneCall=_skipScanPhoneCall - In the implementation block
@property (assign,nonatomic) BOOL hasSkipScanVeryActive; 
@property (assign,nonatomic) BOOL skipScanVeryActive;                   //@synthesize skipScanVeryActive=_skipScanVeryActive - In the implementation block
-(int)otherDevices;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setEventType:(unsigned)arg1 ;
-(unsigned)eventType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setActivityLevel:(unsigned)arg1 ;
-(void)setHasActivityLevel:(BOOL)arg1 ;
-(BOOL)hasActivityLevel;
-(void)setOtherDevices:(int)arg1 ;
-(void)setHasOtherDevices:(BOOL)arg1 ;
-(BOOL)hasOtherDevices;
-(void)setBestIsMe:(BOOL)arg1 ;
-(void)setHasBestIsMe:(BOOL)arg1 ;
-(BOOL)hasBestIsMe;
-(void)setSkipScanPhoneCall:(BOOL)arg1 ;
-(void)setHasSkipScanPhoneCall:(BOOL)arg1 ;
-(BOOL)hasSkipScanPhoneCall;
-(void)setSkipScanVeryActive:(BOOL)arg1 ;
-(void)setHasSkipScanVeryActive:(BOOL)arg1 ;
-(BOOL)hasSkipScanVeryActive;
-(unsigned)activityLevel;
-(BOOL)bestIsMe;
-(BOOL)skipScanPhoneCall;
-(BOOL)skipScanVeryActive;
@end

