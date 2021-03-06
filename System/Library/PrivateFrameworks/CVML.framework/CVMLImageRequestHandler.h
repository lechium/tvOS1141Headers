/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CVML/CVML-Structs.h>
#import <CVML/CVMLRequestHandler.h>

@class CVMLImageBuffer, NSDictionary;

@interface CVMLImageRequestHandler : CVMLRequestHandler {

	CVMLImageBuffer* _imageBuffer;
	NSDictionary* _properties;

}

@property (readonly) CVMLImageBuffer * imageBuffer;              //@synthesize imageBuffer=_imageBuffer - In the implementation block
@property (readonly) NSDictionary * properties;                  //@synthesize properties=_properties - In the implementation block
+(id)handlerForBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
+(id)handlerForCIImage:(id)arg1 options:(id)arg2 ;
+(id)handlerForCGImage:(CGImageRef)arg1 options:(id)arg2 ;
+(id)handlerForURL:(id)arg1 options:(id)arg2 ;
+(id)handlerForData:(id)arg1 options:(id)arg2 ;
-(id)initWithCIImage:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(id)initWithCGImage:(CGImageRef)arg1 options:(id)arg2 ;
-(id)initWithData:(id)arg1 options:(id)arg2 ;
-(NSDictionary *)properties;
-(void)releaseOriginalBuffer;
-(BOOL)useFullImageBufferForFaces:(id)arg1 ;
-(id)initWithBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(CVMLImageBuffer *)imageBuffer;
@end

