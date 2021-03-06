/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOTransitPrice : PBCodable <NSCopying> {

	int _amountInCents;
	NSString* _currencyCode;
	unsigned _subunit;
	SCD_Struct_GE21 _has;

}

@property (assign,nonatomic) BOOL hasAmountInCents; 
@property (assign,nonatomic) int amountInCents;                    //@synthesize amountInCents=_amountInCents - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrencyCode; 
@property (nonatomic,retain) NSString * currencyCode;              //@synthesize currencyCode=_currencyCode - In the implementation block
@property (assign,nonatomic) BOOL hasSubunit; 
@property (assign,nonatomic) unsigned subunit;                     //@synthesize subunit=_subunit - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasCurrencyCode;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(int)amountInCents;
-(unsigned)subunit;
-(void)setAmountInCents:(int)arg1 ;
-(void)setHasAmountInCents:(BOOL)arg1 ;
-(BOOL)hasAmountInCents;
-(void)setSubunit:(unsigned)arg1 ;
-(void)setHasSubunit:(BOOL)arg1 ;
-(BOOL)hasSubunit;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

