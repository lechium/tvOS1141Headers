/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@class NSDictionary, VNImageSpecifier, VNRequestPerformer, VNObservationsCache;

@interface VNImageRequestHandler : NSObject {

	NSDictionary* _options;
	VNImageSpecifier* _imageSpecifier;
	VNRequestPerformer* _requestPerformer;
	VNObservationsCache* _observationsCache;

}
+(void)requestForcedCleanupWithOptions:(id)arg1 ;
+(void)forcedCleanupWithOptions:(id)arg1 ;
+(id)asyncProcessingDispatchQueue;
+(void)forcedCleanup;
+(void)requestForcedCleanupWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)requestForcedCleanup;
-(id)initWithCIImage:(id)arg1 options:(id)arg2 ;
-(id)initWithCGImage:(CGImageRef)arg1 options:(id)arg2 ;
-(id)initWithData:(id)arg1 options:(id)arg2 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
-(id)imageBufferAndReturnError:(id*)arg1 ;
-(id)initWithBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
-(BOOL)prepareForPerformingRequestsOfClass:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareForPerformingRequests:(id)arg1 error:(id*)arg2 ;
-(id)initWithBuffer:(CVBufferRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithImageSpecifier:(id)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithCIImage:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithURL:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithData:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(void)cancelAllRequests;
-(BOOL)performRequests:(id)arg1 error:(id*)arg2 ;
@end
