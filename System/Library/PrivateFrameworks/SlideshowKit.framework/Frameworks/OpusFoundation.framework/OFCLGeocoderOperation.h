/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OFNSOperation.h>

@class CLGeocoder, CLLocation, NSArray;

@interface OFCLGeocoderOperation : OFNSOperation {

	CLGeocoder* _geocoder;
	CLLocation* _location;
	double _accuracy;
	NSArray* _placemarks;

}

@property (retain) NSArray * placemarks;              //@synthesize placemarks=_placemarks - In the implementation block
+(id)operationWithLocation:(id)arg1 ;
+(double)recommendedAccuracy;
+(id)operationWithLocation:(id)arg1 accuracy:(double)arg2 ;
-(void)dealloc;
-(void)cancelOperation;
-(void)setPlacemarks:(NSArray *)arg1 ;
-(id)initWithLocation:(id)arg1 accuracy:(double)arg2 ;
-(unsigned long long)launchOperation;
-(void)finishOperation;
-(void)cleanupOperation;
-(NSArray *)placemarks;
@end

