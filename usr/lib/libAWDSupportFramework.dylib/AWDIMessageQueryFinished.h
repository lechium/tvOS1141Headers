/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIMessageQueryFinished : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectionType;
	int _genericError;
	NSString* _guid;
	unsigned _isEmail;
	unsigned _isPhoneNumber;
	int _pOSIXError;
	unsigned _queryDuration;
	int _resultCode;
	unsigned _success;
	int _uRLError;
	unsigned _wasReversePushAttempted;
	SCD_Struct_AW14 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                               //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) unsigned success;                              //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                       //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasQueryDuration; 
@property (assign,nonatomic) unsigned queryDuration;                        //@synthesize queryDuration=_queryDuration - In the implementation block
@property (assign,nonatomic) BOOL hasIsPhoneNumber; 
@property (assign,nonatomic) unsigned isPhoneNumber;                        //@synthesize isPhoneNumber=_isPhoneNumber - In the implementation block
@property (assign,nonatomic) BOOL hasIsEmail; 
@property (assign,nonatomic) unsigned isEmail;                              //@synthesize isEmail=_isEmail - In the implementation block
@property (assign,nonatomic) BOOL hasResultCode; 
@property (assign,nonatomic) int resultCode;                                //@synthesize resultCode=_resultCode - In the implementation block
@property (assign,nonatomic) BOOL hasGenericError; 
@property (assign,nonatomic) int genericError;                              //@synthesize genericError=_genericError - In the implementation block
@property (assign,nonatomic) BOOL hasURLError; 
@property (assign,nonatomic) int uRLError;                                  //@synthesize uRLError=_uRLError - In the implementation block
@property (assign,nonatomic) BOOL hasPOSIXError; 
@property (assign,nonatomic) int pOSIXError;                                //@synthesize pOSIXError=_pOSIXError - In the implementation block
@property (assign,nonatomic) BOOL hasWasReversePushAttempted; 
@property (assign,nonatomic) unsigned wasReversePushAttempted;              //@synthesize wasReversePushAttempted=_wasReversePushAttempted - In the implementation block
-(void)setSuccess:(unsigned)arg1 ;
-(void)setHasSuccess:(BOOL)arg1 ;
-(BOOL)hasSuccess;
-(void)setGenericError:(int)arg1 ;
-(void)setHasGenericError:(BOOL)arg1 ;
-(BOOL)hasGenericError;
-(int)genericError;
-(void)setResultCode:(int)arg1 ;
-(void)setHasResultCode:(BOOL)arg1 ;
-(BOOL)hasResultCode;
-(void)setURLError:(int)arg1 ;
-(void)setHasURLError:(BOOL)arg1 ;
-(BOOL)hasURLError;
-(void)setPOSIXError:(int)arg1 ;
-(void)setHasPOSIXError:(BOOL)arg1 ;
-(BOOL)hasPOSIXError;
-(int)uRLError;
-(int)pOSIXError;
-(void)setQueryDuration:(unsigned)arg1 ;
-(void)setHasQueryDuration:(BOOL)arg1 ;
-(BOOL)hasQueryDuration;
-(void)setIsPhoneNumber:(unsigned)arg1 ;
-(void)setHasIsPhoneNumber:(BOOL)arg1 ;
-(BOOL)hasIsPhoneNumber;
-(void)setIsEmail:(unsigned)arg1 ;
-(void)setHasIsEmail:(BOOL)arg1 ;
-(BOOL)hasIsEmail;
-(void)setWasReversePushAttempted:(unsigned)arg1 ;
-(void)setHasWasReversePushAttempted:(BOOL)arg1 ;
-(BOOL)hasWasReversePushAttempted;
-(unsigned)queryDuration;
-(unsigned)isPhoneNumber;
-(unsigned)isEmail;
-(unsigned)wasReversePushAttempted;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned)connectionType;
-(void)setConnectionType:(unsigned)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(void)setGuid:(NSString *)arg1 ;
-(BOOL)hasGuid;
-(NSString *)guid;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)resultCode;
-(unsigned)success;
@end

