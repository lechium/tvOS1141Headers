/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTransitSectionOption : PBCodable <NSCopying> {

	SCD_Struct_GE20* _sections;
	unsigned _defaultSectionIndex;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,readonly) unsigned long long sectionsCount; 
@property (nonatomic,readonly) unsigned* sections; 
@property (assign,nonatomic) BOOL hasDefaultSectionIndex; 
@property (assign,nonatomic) unsigned defaultSectionIndex;                    //@synthesize defaultSectionIndex=_defaultSectionIndex - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearSections;
-(unsigned long long)sectionsCount;
-(unsigned)defaultSectionIndex;
-(unsigned)sectionAtIndex:(unsigned long long)arg1 ;
-(void)addSection:(unsigned)arg1 ;
-(void)setSections:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setDefaultSectionIndex:(unsigned)arg1 ;
-(void)setHasDefaultSectionIndex:(BOOL)arg1 ;
-(BOOL)hasDefaultSectionIndex;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned*)sections;
@end

