/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PipelineKit/PIOperationSubclass.h>

@interface CLSCachedGeocoderOperation : PIOperationSubclass {

	id _location;
	double _accuracy;

}
+(id)operationWithLocation:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(id)operationWithLocation:(id)arg1 ;
+(id)operationWithLocation:(id)arg1 withAccuracy:(double)arg2 ;
+(double)recommendedAccuracy;
-(void)cancel;
-(void)execute;
-(id)initWithLocation:(id)arg1 withAccuracy:(double)arg2 ;
@end
