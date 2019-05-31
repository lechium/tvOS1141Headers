/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoServices.framework/CloudPhotoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoServices/PHMediaFormatConversionCompositeRequest.h>

@class PHMediaFormatConversionRequest;

@interface PHMediaFormatChainedConversionRequest : PHMediaFormatConversionCompositeRequest {

	PHMediaFormatConversionRequest* _independentRequest;
	PHMediaFormatConversionRequest* _dependentRequest;
	/*^block*/id _successUpdateHandler;

}

@property (retain) PHMediaFormatConversionRequest * independentRequest;              //@synthesize independentRequest=_independentRequest - In the implementation block
@property (retain) PHMediaFormatConversionRequest * dependentRequest;                //@synthesize dependentRequest=_dependentRequest - In the implementation block
@property (copy) id successUpdateHandler;                                            //@synthesize successUpdateHandler=_successUpdateHandler - In the implementation block
+(id)chainedRequestForRequest:(id)arg1 dependingOnRequest:(id)arg2 error:(id*)arg3 successUpdateHandler:(/*^block*/id)arg4 ;
+(id)requestForSource:(id)arg1 destinationCapabilities:(id)arg2 error:(id*)arg3 ;
+(id)chainedRequestForAdjustmentRenderRequest:(id)arg1 dependingOnRequest:(id)arg2 error:(id*)arg3 ;
-(void)enumerateSubrequests:(/*^block*/id)arg1 ;
-(void)postProcessSuccessfulCompositeRequest;
-(void)enqueueSubrequestsOnConversionManager:(id)arg1 ;
-(void)setIndependentRequest:(PHMediaFormatConversionRequest *)arg1 ;
-(void)setDependentRequest:(PHMediaFormatConversionRequest *)arg1 ;
-(void)setSuccessUpdateHandler:(id)arg1 ;
-(PHMediaFormatConversionRequest *)independentRequest;
-(id)successUpdateHandler;
-(PHMediaFormatConversionRequest *)dependentRequest;
@end

