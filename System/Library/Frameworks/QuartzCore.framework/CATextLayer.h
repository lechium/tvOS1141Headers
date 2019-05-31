/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString;

@interface CATextLayer : CALayer {

	CATextLayerPrivateRef _state;

}

@property (copy) id truncationString; 
@property (getter=isTruncated,readonly) BOOL truncated; 
@property (copy) id string; 
@property (assign) const void* font; 
@property (assign) double fontSize; 
@property (assign) CGColorRef foregroundColor; 
@property (getter=isWrapped) BOOL wrapped; 
@property (copy) NSString * truncationMode; 
@property (copy) NSString * alignmentMode; 
@property (assign) BOOL allowsFontSubpixelQuantization; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(id)_createStringDict;
-(CTTypesetterRef)_retainTypesetter;
-(CTLineRef)_createTruncationToken;
-(void)_applyLinesToFunction:(/*function pointer*/void*)arg1 info:(void*)arg2 ;
-(void)_applyLinesToFunction:(/*function pointer*/void*)arg1 info:(void*)arg2 truncated:(BOOL*)arg3 ;
-(void)_drawLine:(CTLineRef)arg1 inContext:(CGContextRef)arg2 atPoint:(CGPoint)arg3 ;
-(BOOL)allowsFontSubpixelQuantization;
-(void)setAllowsFontSubpixelQuantization:(BOOL)arg1 ;
-(id)truncationString;
-(BOOL)wrapped;
-(void)setTruncationString:(id)arg1 ;
-(CGSize)_preferredSize;
-(void)_prepareContext:(CGContextRef)arg1 ;
-(void)setWrapped:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setFont:(const void*)arg1 ;
-(id)string;
-(void)setString:(id)arg1 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(const void*)font;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setFontSize:(double)arg1 ;
-(CGColorRef)foregroundColor;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setForegroundColor:(CGColorRef)arg1 ;
-(void)setAlignmentMode:(NSString *)arg1 ;
-(double)fontSize;
-(void)setTruncationMode:(NSString *)arg1 ;
-(NSString *)truncationMode;
-(BOOL)isTruncated;
-(BOOL)isWrapped;
-(NSString *)alignmentMode;
@end
