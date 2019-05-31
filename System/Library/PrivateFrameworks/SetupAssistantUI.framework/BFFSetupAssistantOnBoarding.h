/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BFFSetupAssistantOnBoarding : PBCodable <NSCopying> {

	unsigned long long _durationPlaceholder;
	unsigned long long _durationVideo;
	unsigned long long _timestamp;
	unsigned _feature;
	SCD_Struct_BF3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasFeature; 
@property (assign,nonatomic) unsigned feature;                                    //@synthesize feature=_feature - In the implementation block
@property (assign,nonatomic) BOOL hasDurationPlaceholder; 
@property (assign,nonatomic) unsigned long long durationPlaceholder;              //@synthesize durationPlaceholder=_durationPlaceholder - In the implementation block
@property (assign,nonatomic) BOOL hasDurationVideo; 
@property (assign,nonatomic) unsigned long long durationVideo;                    //@synthesize durationVideo=_durationVideo - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)feature;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setFeature:(unsigned)arg1 ;
-(void)setDurationPlaceholder:(unsigned long long)arg1 ;
-(void)setDurationVideo:(unsigned long long)arg1 ;
-(void)setHasFeature:(BOOL)arg1 ;
-(BOOL)hasFeature;
-(void)setHasDurationPlaceholder:(BOOL)arg1 ;
-(BOOL)hasDurationPlaceholder;
-(void)setHasDurationVideo:(BOOL)arg1 ;
-(BOOL)hasDurationVideo;
-(unsigned long long)durationPlaceholder;
-(unsigned long long)durationVideo;
@end
