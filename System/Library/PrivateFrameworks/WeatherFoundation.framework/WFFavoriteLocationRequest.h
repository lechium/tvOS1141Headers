/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WFTask.h>

@interface WFFavoriteLocationRequest : WFTask {

	/*^block*/id _resultHandler;

}

@property (readonly) id resultHandler;              //@synthesize resultHandler=_resultHandler - In the implementation block
-(void)handleResponse:(id)arg1 ;
-(void)startWithService:(id)arg1 ;
-(void)handleCancellation;
-(id)initWithResultHandler:(/*^block*/id)arg1 ;
-(id)resultHandler;
@end

