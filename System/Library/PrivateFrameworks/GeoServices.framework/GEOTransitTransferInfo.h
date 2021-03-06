/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTransitTransferInfo : PBCodable <NSCopying> {

	unsigned long long _transferMuid;
	unsigned _transferTime;
	SCD_Struct_GE21 _has;

}

@property (assign,nonatomic) BOOL hasTransferMuid; 
@property (assign,nonatomic) unsigned long long transferMuid;              //@synthesize transferMuid=_transferMuid - In the implementation block
@property (assign,nonatomic) BOOL hasTransferTime; 
@property (assign,nonatomic) unsigned transferTime;                        //@synthesize transferTime=_transferTime - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)transferTime;
-(void)setTransferMuid:(unsigned long long)arg1 ;
-(void)setHasTransferMuid:(BOOL)arg1 ;
-(BOOL)hasTransferMuid;
-(void)setTransferTime:(unsigned)arg1 ;
-(void)setHasTransferTime:(BOOL)arg1 ;
-(BOOL)hasTransferTime;
-(unsigned long long)transferMuid;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

