/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class CAEAGLLayer, PLGLLayerDelegate, EAGLContext;

@interface CMKGLView : UIView {

	unsigned _framebuffer;
	unsigned _renderbuffer;
	CAEAGLLayer* _glLayer;
	PLGLLayerDelegate* _glLayerDelegate;
	BOOL _disableLayoutForGLLayer;
	BOOL __atomicRetainedBacking;
	BOOL __shouldDeleteFramebuffer;
	BOOL __disableLayoutForGLLayerInternal;
	long long _drawableWidth;
	long long _drawableHeight;
	/*^block*/id _renderNotifyBlock;
	EAGLContext* __atomicContext;
	CGSize __atomicFixedSize;

}

@property (setter=_setAtomicContext:,retain) EAGLContext * _atomicContext;                                                                                              //@synthesize _atomicContext=__atomicContext - In the implementation block
@property (setter=_setAtomicRetainedBacking:) BOOL _atomicRetainedBacking;                                                                                              //@synthesize _atomicRetainedBacking=__atomicRetainedBacking - In the implementation block
@property (setter=_setAtomicFixedSize:) CGSize _atomicFixedSize;                                                                                                        //@synthesize _atomicFixedSize=__atomicFixedSize - In the implementation block
@property (setter=_setShouldDeleteFramebuffer:) BOOL _shouldDeleteFramebuffer;                                                                                          //@synthesize _shouldDeleteFramebuffer=__shouldDeleteFramebuffer - In the implementation block
@property (assign) long long drawableWidth;                                                                                                                             //@synthesize drawableWidth=_drawableWidth - In the implementation block
@property (assign) long long drawableHeight;                                                                                                                            //@synthesize drawableHeight=_drawableHeight - In the implementation block
@property (assign,setter=_setDisableLayoutForGLLayerInternal:,getter=_isDisabledLayoutForGLLayerInternal,nonatomic) BOOL _disableLayoutForGLLayerInternal;              //@synthesize _disableLayoutForGLLayerInternal=__disableLayoutForGLLayerInternal - In the implementation block
@property (nonatomic,retain) EAGLContext * context; 
@property (assign,nonatomic) CGSize fixedSize; 
@property (assign,nonatomic) BOOL retainedBacking; 
@property (nonatomic,retain,readonly) CAEAGLLayer * glLayer;                                                                                                            //@synthesize glLayer=_glLayer - In the implementation block
@property (assign,getter=isDisabledLayoutForGLLayer,nonatomic) BOOL disableLayoutForGLLayer;                                                                            //@synthesize disableLayoutForGLLayer=_disableLayoutForGLLayer - In the implementation block
@property (nonatomic,copy) id renderNotifyBlock;                                                                                                                        //@synthesize renderNotifyBlock=_renderNotifyBlock - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentScaleFactor:(double)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setContentMode:(long long)arg1 ;
-(EAGLContext *)context;
-(void)setContext:(EAGLContext *)arg1 ;
-(CGSize)fixedSize;
-(void)setFixedSize:(CGSize)arg1 ;
-(void)setRenderNotifyBlock:(id)arg1 ;
-(void)setRetainedBacking:(BOOL)arg1 ;
-(void)forceDestroyGLResources;
-(void)renderPixelBuffer:(CVBufferRef)arg1 ciContext:(id)arg2 mirrorRendering:(BOOL)arg3 ;
-(CAEAGLLayer *)glLayer;
-(void)renderWithBlock:(/*^block*/id)arg1 ;
-(long long)drawableWidth;
-(long long)drawableHeight;
-(void)_configureLayer;
-(void)_deleteFramebufferInContext:(id)arg1 ;
-(BOOL)retainedBacking;
-(BOOL)_atomicRetainedBacking;
-(void)_setAtomicRetainedBacking:(BOOL)arg1 ;
-(void)_setShouldDeleteFramebuffer:(BOOL)arg1 ;
-(EAGLContext *)_atomicContext;
-(void)_setAtomicContext:(id)arg1 ;
-(CGSize)_atomicFixedSize;
-(void)_setAtomicFixedSize:(CGSize)arg1 ;
-(void)_setDisableLayoutForGLLayerInternal:(BOOL)arg1 ;
-(void)setDrawableWidth:(long long)arg1 ;
-(void)setDrawableHeight:(long long)arg1 ;
-(BOOL)_shouldDeleteFramebuffer;
-(void)_createFramebufferInContext:(id)arg1 ;
-(BOOL)_setFramebuffer:(BOOL*)arg1 context:(id)arg2 ;
-(void)_handleRenderNotifyBlock;
-(id)renderNotifyBlock;
-(BOOL)isDisabledLayoutForGLLayer;
-(BOOL)_isDisabledLayoutForGLLayerInternal;
-(void)_layoutGLLayer;
-(void)setDisableLayoutForGLLayer:(BOOL)arg1 ;
@end

