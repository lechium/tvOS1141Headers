/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSafariPageLoadCompleteEvent : PBCodable <NSCopying> {

	unsigned long long _configurationID;
	long long _errorCode;
	unsigned long long _pageID;
	unsigned long long _pageLoadTime;
	unsigned long long _timestamp;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasConfigurationID; 
@property (assign,nonatomic) unsigned long long configurationID;              //@synthesize configurationID=_configurationID - In the implementation block
@property (assign,nonatomic) BOOL hasPageID; 
@property (assign,nonatomic) unsigned long long pageID;                       //@synthesize pageID=_pageID - In the implementation block
@property (assign,nonatomic) BOOL hasPageLoadTime; 
@property (assign,nonatomic) unsigned long long pageLoadTime;                 //@synthesize pageLoadTime=_pageLoadTime - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                             //@synthesize errorCode=_errorCode - In the implementation block
-(void)setConfigurationID:(unsigned long long)arg1 ;
-(void)setHasConfigurationID:(BOOL)arg1 ;
-(BOOL)hasConfigurationID;
-(void)setPageID:(unsigned long long)arg1 ;
-(void)setHasPageID:(BOOL)arg1 ;
-(BOOL)hasPageID;
-(void)setPageLoadTime:(unsigned long long)arg1 ;
-(void)setHasPageLoadTime:(BOOL)arg1 ;
-(BOOL)hasPageLoadTime;
-(unsigned long long)configurationID;
-(unsigned long long)pageID;
-(unsigned long long)pageLoadTime;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setErrorCode:(long long)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(long long)errorCode;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
