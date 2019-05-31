/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCMediaNegotiationBlobVideoRuleCollection : PBCodable <NSCopying> {

	unsigned _formats;
	int _operation;
	unsigned _preferredFormat;
	int _transport;
	SCD_Struct_VC29 _has;

}

@property (assign,nonatomic) int transport;                         //@synthesize transport=_transport - In the implementation block
@property (assign,nonatomic) int operation;                         //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic) unsigned formats;                      //@synthesize formats=_formats - In the implementation block
@property (assign,nonatomic) BOOL hasPreferredFormat; 
@property (assign,nonatomic) unsigned preferredFormat;              //@synthesize preferredFormat=_preferredFormat - In the implementation block
-(unsigned)formats;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)operation;
-(void)setOperation:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)preferredFormat;
-(id)dictionaryRepresentation;
-(void)setPreferredFormat:(unsigned)arg1 ;
-(void)setFormats:(unsigned)arg1 ;
-(BOOL)hasPreferredFormat;
-(id)operationAsString:(int)arg1 ;
-(int)StringAsOperation:(id)arg1 ;
-(void)setHasPreferredFormat:(BOOL)arg1 ;
-(int)transport;
-(void)setTransport:(int)arg1 ;
-(id)transportAsString:(int)arg1 ;
-(int)StringAsTransport:(id)arg1 ;
@end

