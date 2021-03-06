/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOClientMetrics;

@interface GEOTileUsageInfo : NSObject {

	double _startTime;
	double _endTime;
	int _tileStyle;
	BOOL _hasTileStyle;
	unsigned long long _tileSize;
	unsigned long long _requestSize;
	double _queuedTime;
	double _decodingTime;
	int _httpResponseStatusCode;
	GEOClientMetrics* _metrics;

}

@property (assign,nonatomic) double startTime;                            //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double endTime;                              //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) int tileStyle;                             //@synthesize tileStyle=_tileStyle - In the implementation block
@property (nonatomic,readonly) BOOL hasTileStyle;                         //@synthesize hasTileStyle=_hasTileStyle - In the implementation block
@property (assign,nonatomic) unsigned long long tileSize;                 //@synthesize tileSize=_tileSize - In the implementation block
@property (assign,nonatomic) unsigned long long requestSize;              //@synthesize requestSize=_requestSize - In the implementation block
@property (assign,nonatomic) double queuedTime;                           //@synthesize queuedTime=_queuedTime - In the implementation block
@property (assign,nonatomic) double decodingTime;                         //@synthesize decodingTime=_decodingTime - In the implementation block
@property (assign,nonatomic) int httpResponseStatusCode;                  //@synthesize httpResponseStatusCode=_httpResponseStatusCode - In the implementation block
@property (nonatomic,readonly) GEOClientMetrics * metrics;                //@synthesize metrics=_metrics - In the implementation block
-(int)httpResponseStatusCode;
-(id)initWithTileKey:(const GEOTileKey*)arg1 withTileUsageData:(id)arg2 andMetrics:(id)arg3 ;
-(void)setEndTime:(double)arg1 ;
-(void)setQueuedTime:(double)arg1 ;
-(void)setHttpResponseStatusCode:(int)arg1 ;
-(void)setRequestSize:(unsigned long long)arg1 ;
-(void)setDecodingTime:(double)arg1 ;
-(double)queuedTime;
-(double)decodingTime;
-(double)endTime;
-(unsigned long long)requestSize;
-(int)resourceFetchType;
-(int)protocolType;
-(id)transactionMetrics;
-(int)tileStyle;
-(BOOL)hasTileStyle;
-(id)description;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(void)setTileSize:(unsigned long long)arg1 ;
-(unsigned long long)tileSize;
-(GEOClientMetrics *)metrics;
@end

