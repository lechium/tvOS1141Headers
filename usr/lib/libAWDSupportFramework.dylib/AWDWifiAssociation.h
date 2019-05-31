/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface AWDWifiAssociation : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _band;
	NSData* _bssidOui;
	int _channel;
	NSString* _countryCode;
	int _deauthReason;
	NSData* _deauthSourceOui;
	unsigned _error;
	int _noise;
	unsigned _phymode;
	NSString* _security;
	int _signal;
	int _txrate;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) unsigned error;                            //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL hasChannel; 
@property (assign,nonatomic) int channel;                               //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) BOOL hasSignal; 
@property (assign,nonatomic) int signal;                                //@synthesize signal=_signal - In the implementation block
@property (nonatomic,readonly) BOOL hasBssidOui; 
@property (nonatomic,retain) NSData * bssidOui;                         //@synthesize bssidOui=_bssidOui - In the implementation block
@property (nonatomic,readonly) BOOL hasSecurity; 
@property (nonatomic,retain) NSString * security;                       //@synthesize security=_security - In the implementation block
@property (assign,nonatomic) BOOL hasDeauthReason; 
@property (assign,nonatomic) int deauthReason;                          //@synthesize deauthReason=_deauthReason - In the implementation block
@property (nonatomic,readonly) BOOL hasDeauthSourceOui; 
@property (nonatomic,retain) NSData * deauthSourceOui;                  //@synthesize deauthSourceOui=_deauthSourceOui - In the implementation block
@property (assign,nonatomic) BOOL hasNoise; 
@property (assign,nonatomic) int noise;                                 //@synthesize noise=_noise - In the implementation block
@property (assign,nonatomic) BOOL hasTxrate; 
@property (assign,nonatomic) int txrate;                                //@synthesize txrate=_txrate - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                    //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) BOOL hasPhymode; 
@property (assign,nonatomic) unsigned phymode;                          //@synthesize phymode=_phymode - In the implementation block
@property (assign,nonatomic) BOOL hasBand; 
@property (assign,nonatomic) int band;                                  //@synthesize band=_band - In the implementation block
-(void)setHasError:(BOOL)arg1 ;
-(void)setBssidOui:(NSData *)arg1 ;
-(void)setSecurity:(NSString *)arg1 ;
-(void)setDeauthSourceOui:(NSData *)arg1 ;
-(void)setSignal:(int)arg1 ;
-(void)setHasSignal:(BOOL)arg1 ;
-(BOOL)hasSignal;
-(BOOL)hasBssidOui;
-(BOOL)hasSecurity;
-(void)setDeauthReason:(int)arg1 ;
-(void)setHasDeauthReason:(BOOL)arg1 ;
-(BOOL)hasDeauthReason;
-(BOOL)hasDeauthSourceOui;
-(void)setNoise:(int)arg1 ;
-(void)setHasNoise:(BOOL)arg1 ;
-(BOOL)hasNoise;
-(void)setTxrate:(int)arg1 ;
-(void)setHasTxrate:(BOOL)arg1 ;
-(BOOL)hasTxrate;
-(void)setPhymode:(unsigned)arg1 ;
-(void)setHasPhymode:(BOOL)arg1 ;
-(BOOL)hasPhymode;
-(NSData *)bssidOui;
-(NSString *)security;
-(int)deauthReason;
-(NSData *)deauthSourceOui;
-(int)noise;
-(int)txrate;
-(unsigned)phymode;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)countryCode;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setCountryCode:(NSString *)arg1 ;
-(BOOL)hasCountryCode;
-(BOOL)hasError;
-(void)setChannel:(int)arg1 ;
-(void)setHasChannel:(BOOL)arg1 ;
-(BOOL)hasChannel;
-(int)channel;
-(unsigned)error;
-(void)setError:(unsigned)arg1 ;
-(void)setBand:(int)arg1 ;
-(void)setHasBand:(BOOL)arg1 ;
-(BOOL)hasBand;
-(int)band;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)signal;
@end

