/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSpringBoardSwitcherToAppTransition : PBCodable <NSCopying> {

	unsigned long long _absoluteDistanceInList;
	unsigned long long _timestamp;
	NSString* _switcherName;
	BOOL _isGoingToHomeScreen;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSwitcherName; 
@property (nonatomic,retain) NSString * switcherName;                                //@synthesize switcherName=_switcherName - In the implementation block
@property (assign,nonatomic) BOOL hasAbsoluteDistanceInList; 
@property (assign,nonatomic) unsigned long long absoluteDistanceInList;              //@synthesize absoluteDistanceInList=_absoluteDistanceInList - In the implementation block
@property (assign,nonatomic) BOOL hasIsGoingToHomeScreen; 
@property (assign,nonatomic) BOOL isGoingToHomeScreen;                               //@synthesize isGoingToHomeScreen=_isGoingToHomeScreen - In the implementation block
-(void)setSwitcherName:(NSString *)arg1 ;
-(BOOL)hasSwitcherName;
-(void)setAbsoluteDistanceInList:(unsigned long long)arg1 ;
-(void)setHasAbsoluteDistanceInList:(BOOL)arg1 ;
-(BOOL)hasAbsoluteDistanceInList;
-(void)setIsGoingToHomeScreen:(BOOL)arg1 ;
-(void)setHasIsGoingToHomeScreen:(BOOL)arg1 ;
-(BOOL)hasIsGoingToHomeScreen;
-(NSString *)switcherName;
-(unsigned long long)absoluteDistanceInList;
-(BOOL)isGoingToHomeScreen;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
