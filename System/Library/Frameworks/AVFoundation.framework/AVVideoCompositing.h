/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol AVVideoCompositing <NSObject>
@property (nonatomic,readonly) NSDictionary * sourcePixelBufferAttributes; 
@property (nonatomic,readonly) NSDictionary * requiredPixelBufferAttributesForRenderContext; 
@property (nonatomic,readonly) BOOL supportsWideColorSourceFrames; 
@optional
-(void)cancelAllPendingVideoCompositionRequests;
-(BOOL)supportsWideColorSourceFrames;

@required
-(NSDictionary *)sourcePixelBufferAttributes;
-(void)renderContextChanged:(id)arg1;
-(void)startVideoCompositionRequest:(id)arg1;
-(NSDictionary *)requiredPixelBufferAttributesForRenderContext;

@end
