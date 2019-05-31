/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOTransitSection : PBCodable <NSCopying> {

	SCD_Struct_GE20* _actionSheetArtworkIndexs;
	SCD_Struct_GE20* _routeDetailsArtworkIndexs;
	SCD_Struct_GE20* _stepIndexs;
	NSString* _actionSheetName;
	int _nextOptionsIndex;
	BOOL _disableAlightNotifications;
	SCD_Struct_GE21 _has;

}

@property (nonatomic,readonly) unsigned long long stepIndexsCount; 
@property (nonatomic,readonly) unsigned* stepIndexs; 
@property (assign,nonatomic) BOOL hasNextOptionsIndex; 
@property (assign,nonatomic) int nextOptionsIndex;                                             //@synthesize nextOptionsIndex=_nextOptionsIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasActionSheetName; 
@property (nonatomic,retain) NSString * actionSheetName;                                       //@synthesize actionSheetName=_actionSheetName - In the implementation block
@property (nonatomic,readonly) unsigned long long actionSheetArtworkIndexsCount; 
@property (nonatomic,readonly) unsigned* actionSheetArtworkIndexs; 
@property (nonatomic,readonly) unsigned long long routeDetailsArtworkIndexsCount; 
@property (nonatomic,readonly) unsigned* routeDetailsArtworkIndexs; 
@property (assign,nonatomic) BOOL hasDisableAlightNotifications; 
@property (assign,nonatomic) BOOL disableAlightNotifications;                                  //@synthesize disableAlightNotifications=_disableAlightNotifications - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)stepIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)stepIndexsCount;
-(int)nextOptionsIndex;
-(BOOL)hasNextOptionsIndex;
-(unsigned*)stepIndexs;
-(void)clearStepIndexs;
-(void)addStepIndex:(unsigned)arg1 ;
-(void)setStepIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setNextOptionsIndex:(int)arg1 ;
-(void)setHasNextOptionsIndex:(BOOL)arg1 ;
-(BOOL)hasActionSheetName;
-(unsigned long long)actionSheetArtworkIndexsCount;
-(unsigned*)actionSheetArtworkIndexs;
-(void)clearActionSheetArtworkIndexs;
-(void)addActionSheetArtworkIndex:(unsigned)arg1 ;
-(unsigned)actionSheetArtworkIndexAtIndex:(unsigned long long)arg1 ;
-(void)setActionSheetArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)routeDetailsArtworkIndexsCount;
-(unsigned*)routeDetailsArtworkIndexs;
-(void)clearRouteDetailsArtworkIndexs;
-(void)addRouteDetailsArtworkIndex:(unsigned)arg1 ;
-(unsigned)routeDetailsArtworkIndexAtIndex:(unsigned long long)arg1 ;
-(void)setRouteDetailsArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setDisableAlightNotifications:(BOOL)arg1 ;
-(void)setHasDisableAlightNotifications:(BOOL)arg1 ;
-(BOOL)hasDisableAlightNotifications;
-(NSString *)actionSheetName;
-(void)setActionSheetName:(NSString *)arg1 ;
-(BOOL)disableAlightNotifications;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

