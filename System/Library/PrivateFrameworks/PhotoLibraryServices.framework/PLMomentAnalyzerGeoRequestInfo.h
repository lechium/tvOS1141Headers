/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCopying, GEOMapServiceTicket;
@class NSObject, NSString, NSArray, PLRevGeoLocationInfo;

@interface PLMomentAnalyzerGeoRequestInfo : NSObject {

	unsigned long long _requestType;
	NSObject*<NSCopying> _momentId;
	NSString* _momentUuid;
	NSArray* _assetIds;
	id<GEOMapServiceTicket> _reverseGeocodeRequest;
	unsigned long long _failureCount;
	NSArray* _extraAssetIds;
	NSArray* _extraLocations;
	PLRevGeoLocationInfo* _revGeoLocationInfo;

}

@property (assign,nonatomic) unsigned long long requestType;                             //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,retain) NSObject*<NSCopying> momentId;                              //@synthesize momentId=_momentId - In the implementation block
@property (nonatomic,copy) NSString * momentUuid;                                        //@synthesize momentUuid=_momentUuid - In the implementation block
@property (nonatomic,copy) NSArray * assetIds;                                           //@synthesize assetIds=_assetIds - In the implementation block
@property (nonatomic,retain) id<GEOMapServiceTicket> reverseGeocodeRequest;              //@synthesize reverseGeocodeRequest=_reverseGeocodeRequest - In the implementation block
@property (assign,nonatomic) unsigned long long failureCount;                            //@synthesize failureCount=_failureCount - In the implementation block
@property (nonatomic,copy) NSArray * extraAssetIds;                                      //@synthesize extraAssetIds=_extraAssetIds - In the implementation block
@property (nonatomic,copy) NSArray * extraLocations;                                     //@synthesize extraLocations=_extraLocations - In the implementation block
@property (getter=hasExtraData,nonatomic,readonly) BOOL extraData; 
@property (nonatomic,retain) PLRevGeoLocationInfo * revGeoLocationInfo;                  //@synthesize revGeoLocationInfo=_revGeoLocationInfo - In the implementation block
-(unsigned long long)requestType;
-(void)setRequestType:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSArray *)assetIds;
-(void)setAssetIds:(NSArray *)arg1 ;
-(void)setMomentId:(NSObject*<NSCopying>)arg1 ;
-(void)setMomentUuid:(NSString *)arg1 ;
-(void)setReverseGeocodeRequest:(id<GEOMapServiceTicket>)arg1 ;
-(NSString *)momentUuid;
-(id)initWithRequestType:(unsigned long long)arg1 momentId:(id)arg2 momentUuid:(id)arg3 assetIds:(id)arg4 reverseGeocodeRequest:(id)arg5 ;
-(BOOL)hasExtraData;
-(NSObject*<NSCopying>)momentId;
-(id<GEOMapServiceTicket>)reverseGeocodeRequest;
-(unsigned long long)failureCount;
-(void)setFailureCount:(unsigned long long)arg1 ;
-(NSArray *)extraAssetIds;
-(void)setExtraAssetIds:(NSArray *)arg1 ;
-(NSArray *)extraLocations;
-(void)setExtraLocations:(NSArray *)arg1 ;
-(PLRevGeoLocationInfo *)revGeoLocationInfo;
-(void)setRevGeoLocationInfo:(PLRevGeoLocationInfo *)arg1 ;
@end
