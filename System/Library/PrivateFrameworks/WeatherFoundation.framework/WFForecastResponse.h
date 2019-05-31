/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WFResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFWeatherConditions, NSData;

@interface WFForecastResponse : WFResponse <NSSecureCoding> {

	BOOL _responseWasFromCache;
	WFWeatherConditions* _forecast;
	unsigned long long _forecastType;
	NSData* _rawAPIData;

}

@property (nonatomic,retain) WFWeatherConditions * forecast;               //@synthesize forecast=_forecast - In the implementation block
@property (assign,nonatomic) unsigned long long forecastType;              //@synthesize forecastType=_forecastType - In the implementation block
@property (assign,nonatomic) BOOL responseWasFromCache;                    //@synthesize responseWasFromCache=_responseWasFromCache - In the implementation block
@property (nonatomic,retain) NSData * rawAPIData;                          //@synthesize rawAPIData=_rawAPIData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(WFWeatherConditions *)forecast;
-(void)setResponseWasFromCache:(BOOL)arg1 ;
-(BOOL)responseWasFromCache;
-(unsigned long long)forecastType;
-(void)setForecastType:(unsigned long long)arg1 ;
-(void)setForecast:(WFWeatherConditions *)arg1 ;
-(NSData *)rawAPIData;
-(void)setRawAPIData:(NSData *)arg1 ;
@end
