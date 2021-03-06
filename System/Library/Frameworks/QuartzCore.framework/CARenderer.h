/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class CAContext, CALayer;

@interface CARenderer : NSObject {

	CARendererPriv* _priv;

}

@property (retain) CAContext * context; 
@property (__weak) id<CARendererDelegate> delegate; 
@property (retain) CALayer * layer; 
@property (assign) CGRect bounds; 
+(id)rendererWithMTLTexture:(id)arg1 options:(id)arg2 ;
+(id)rendererWithEAGLContext:(id)arg1 options:(id)arg2 ;
-(id)_initWithOptions:(id)arg1 ;
-(id)_initWithMTLTexture:(id)arg1 options:(id)arg2 ;
-(id)_initWithEAGLContext:(id)arg1 options:(id)arg2 ;
-(BOOL)hasMissingContent;
-(id<CARendererDelegate>)delegate;
-(CGRect)bounds;
-(CALayer *)layer;
-(void)setDelegate:(id<CARendererDelegate>)arg1 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)setLayer:(CALayer *)arg1 ;
-(CAContext *)context;
-(void)endFrame;
-(void)setContext:(CAContext *)arg1 ;
-(CGRect)updateBounds;
-(void)beginFrameAtTime:(double)arg1 timeStamp:(SCD_Struct_CA27*)arg2 ;
-(double)nextFrameTime;
-(void)addUpdateRect:(CGRect)arg1 ;
-(void)render;
@end

