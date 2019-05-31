/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WFTask.h>

@interface WFTemperatureUnitRequest : WFTask {

	/*^block*/id _resultHandler;

}

@property (nonatomic,copy) id resultHandler;              //@synthesize resultHandler=_resultHandler - In the implementation block
-(void)cleanup;
-(BOOL)requiresResponse;
-(void)handleResponse:(id)arg1 ;
-(void)startWithService:(id)arg1 ;
-(void)handleCancellation;
-(id)initWithResultHandler:(/*^block*/id)arg1 ;
-(id)resultHandler;
-(void)setResultHandler:(id)arg1 ;
@end

