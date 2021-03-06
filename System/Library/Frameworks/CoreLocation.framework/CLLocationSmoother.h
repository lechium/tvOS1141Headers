/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _CLLocationSmootherProxy;

@interface CLLocationSmoother : NSObject {

	_CLLocationSmootherProxy* _locationManagerSmootherProxy;

}

@property (nonatomic,retain,readonly) _CLLocationSmootherProxy * locationManagerSmootherProxy; 
@property (assign,nonatomic) id<CLLocationManagerDelegateInternal> delegate; 
-(void)smoothLocations:(id)arg1 handler:(/*^block*/id)arg2 ;
-(_CLLocationSmootherProxy *)locationManagerSmootherProxy;
-(void)smoothLocations:(id)arg1 ;
-(id<CLLocationManagerDelegateInternal>)delegate;
-(void)setDelegate:(id<CLLocationManagerDelegateInternal>)arg1 ;
-(void)dealloc;
@end

