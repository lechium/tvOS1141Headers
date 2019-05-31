/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>

@interface FigSubtitleWebVTTRegionCALayer : FigBaseCALayer {

	OpaqueFigSubtitleWebVTTRegionCALayerInternal* layerInternal;

}
-(void)finalize;
-(CFStringRef)getContentID;
-(void)setReLayout;
-(void)handleNeedsLayoutNotification;
-(void)setViewport:(CGRect)arg1 ;
-(void)setContent:(CFDictionaryRef)arg1 ;
-(id)init;
-(void)setNeedsDisplay;
-(void)dealloc;
-(void)layoutSublayers;
-(void)setRenderer:(OpaqueFigSubtitleRendererRef)arg1 ;
@end
