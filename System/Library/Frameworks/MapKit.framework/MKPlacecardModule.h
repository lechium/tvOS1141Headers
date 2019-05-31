/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface MKPlacecardModule : PBCodable <NSCopying> {

	NSMutableArray* _margins;
	unsigned _offset;
	int _type;
	SCD_Struct_MK20 _has;

}

@property (assign,nonatomic) BOOL hasOffset; 
@property (assign,nonatomic) unsigned offset;                       //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSMutableArray * margins;              //@synthesize margins=_margins - In the implementation block
+(Class)marginsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOffset:(unsigned)arg1 ;
-(unsigned)offset;
-(id)dictionaryRepresentation;
-(NSMutableArray *)margins;
-(void)setMargins:(NSMutableArray *)arg1 ;
-(void)setHasOffset:(BOOL)arg1 ;
-(BOOL)hasOffset;
-(void)clearMargins;
-(void)addMargins:(id)arg1 ;
-(unsigned long long)marginsCount;
-(id)marginsAtIndex:(unsigned long long)arg1 ;
@end

