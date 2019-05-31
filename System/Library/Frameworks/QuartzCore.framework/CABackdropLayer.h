/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString;

@interface CABackdropLayer : CALayer

@property (getter=isEnabled) BOOL enabled; 
@property (copy) NSString * groupName; 
@property (assign) BOOL usesGlobalGroupNamespace; 
@property (assign) double scale; 
@property (assign) CGRect backdropRect; 
@property (assign) double marginWidth; 
@property (assign) BOOL disablesOccludedBackdropBlurs; 
@property (assign) BOOL captureOnly; 
@property (assign) BOOL allowsInPlaceFiltering; 
@property (assign) BOOL tracksLuma; 
@property (__weak) id<CABackdropLayerDelegate><CALayerDelegate> delegate; 
@property (copy) NSString * statisticsType; 
@property (assign) double statisticsInterval; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(id)statisticsValues;
-(BOOL)usesGlobalGroupNamespace;
-(void)setUsesGlobalGroupNamespace:(BOOL)arg1 ;
-(CGRect)backdropRect;
-(void)setBackdropRect:(CGRect)arg1 ;
-(BOOL)allowsInPlaceFiltering;
-(void)setAllowsInPlaceFiltering:(BOOL)arg1 ;
-(BOOL)tracksLuma;
-(void)setTracksLuma:(BOOL)arg1 ;
-(void)setStatisticsType:(NSString *)arg1 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(double)marginWidth;
-(void)setMarginWidth:(double)arg1 ;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setGroupName:(NSString *)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(NSString *)groupName;
-(BOOL)captureOnly;
-(void)setCaptureOnly:(BOOL)arg1 ;
-(void)setStatisticsInterval:(double)arg1 ;
-(double)statisticsInterval;
-(void)setDisablesOccludedBackdropBlurs:(BOOL)arg1 ;
-(BOOL)disablesOccludedBackdropBlurs;
-(NSString *)statisticsType;
@end

