/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOWiFiConnectionQuality;

@interface GEOLogMsgEventWifiConnectionQualityProbe : PBCodable <NSCopying> {

	GEOWiFiConnectionQuality* _wifiConnectionQuality;

}

@property (nonatomic,readonly) BOOL hasWifiConnectionQuality; 
@property (nonatomic,retain) GEOWiFiConnectionQuality * wifiConnectionQuality;              //@synthesize wifiConnectionQuality=_wifiConnectionQuality - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setWifiConnectionQuality:(GEOWiFiConnectionQuality *)arg1 ;
-(BOOL)hasWifiConnectionQuality;
-(GEOWiFiConnectionQuality *)wifiConnectionQuality;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

