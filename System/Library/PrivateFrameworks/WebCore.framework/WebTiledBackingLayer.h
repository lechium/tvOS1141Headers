/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface WebTiledBackingLayer : CALayer {

	unique_ptr<WebCore::TileController, std::__1::default_delete<WebCore::TileController> >* _tileController;

}
-(TileController*)createTileController:(PlatformCALayer*)arg1 ;
-(void)setWantsDeepColorBackingStore:(BOOL)arg1 ;
-(void)setSupportsSubpixelAntialiasedText:(BOOL)arg1 ;
-(TiledBacking*)tiledBacking;
-(BOOL)wantsDeepColorBackingStore;
-(BOOL)supportsSubpixelAntialiasedText;
-(id)init;
-(void)invalidate;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setNeedsDisplay;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)setBorderColor:(CGColorRef)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(BOOL)isOpaque;
-(double)contentsScale;
-(void)setContentsScale:(double)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(BOOL)drawsAsynchronously;
-(void)setDrawsAsynchronously:(BOOL)arg1 ;
@end

