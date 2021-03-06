/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNRequest.h>

@class NSArray;

@interface VNFaceObservationDrivenClusteringRequest : VNRequest {

	NSArray* _inputFaceObservations;

}

@property (nonatomic,copy,readonly) NSArray * inputFaceObservations; 
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)observationsCacheKey;
-(id)sequencedRequestPreviousObservationsKey;
-(id)newDefaultRequestInstance;
-(NSArray *)inputFaceObservations;
-(id)initWithFaceObservations:(id)arg1 ;
-(id)initWithFaceObservations:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)getOptionalValidatedInputFaceObservations:(id*)arg1 error:(id*)arg2 ;
-(id)validatedInputFaceObservationsWithError:(id*)arg1 ;
@end

