/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigSubtitleBackdropCALayer.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class NSString;

@interface FigSubtitleWebVTTCueCALayer : FigSubtitleBackdropCALayer <CALayerDelegate> {

	OpaqueFigSubtitleWebVTTCueCALayerInternal* layerInternal;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finalize;
-(CGRect)getSuggestedBounds:(unsigned char)arg1 ;
-(void)setCuePosition:(CGPoint)arg1 ;
-(CFStringRef)getContentID;
-(void)setViewport:(CGRect)arg1 ;
-(void)setContent:(CFAttributedStringRef)arg1 ;
-(void)setDefaultFontSize:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(unsigned char)isDirty;
-(void)setRenderer:(OpaqueFigSubtitleRendererRef)arg1 ;
@end
