/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNImageBasedRequest.h>

@class NSNumber;

@interface VNCreateImageprintRequest : VNImageBasedRequest {

	NSNumber* _timeStamp;

}

@property (nonatomic,retain) NSNumber * timeStamp;              //@synthesize timeStamp=_timeStamp - In the implementation block
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSNumber *)timeStamp;
-(void)setTimeStamp:(NSNumber *)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
-(id)observationsCacheKey;
-(id)sequencedRequestPreviousObservationsKey;
-(BOOL)internalPerformInContext:(id)arg1 error:(id*)arg2 ;
@end

