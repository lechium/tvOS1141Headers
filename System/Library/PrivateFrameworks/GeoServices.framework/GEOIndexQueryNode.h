/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, NSMutableArray;

@interface GEOIndexQueryNode : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _field;
	NSMutableArray* _operands;
	int _type;
	NSString* _value;

}

@property (assign,nonatomic) int type;                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasField; 
@property (nonatomic,retain) NSString * field;                               //@synthesize field=_field - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) NSString * value;                               //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSMutableArray * operands;                      //@synthesize operands=_operands - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)operandsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setField:(NSString *)arg1 ;
-(BOOL)hasField;
-(BOOL)hasValue;
-(void)clearOperands;
-(void)addOperands:(id)arg1 ;
-(unsigned long long)operandsCount;
-(id)operandsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)operands;
-(void)setOperands:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
-(id)dictionaryRepresentation;
-(NSString *)field;
@end

