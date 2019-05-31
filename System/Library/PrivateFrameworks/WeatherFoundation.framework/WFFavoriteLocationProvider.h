/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFFavoriteLocationProvider <NSObject>
@property (assign,nonatomic,__weak) id<WFFavoriteLocationProviderDelegate> delegate; 
@optional
-(id)migrationOperation;

@required
-(id)locations;
-(void)addLocation:(id)arg1;
-(id<WFFavoriteLocationProviderDelegate>)delegate;
-(void)setLocations:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id)initWithDelegate:(id)arg1 persistence:(id)arg2;
-(void)removeLocation:(id)arg1;

@end
