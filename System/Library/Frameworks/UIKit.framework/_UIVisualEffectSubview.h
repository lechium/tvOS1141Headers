/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UIVisualEffectSubviewSource.h>

@protocol _UIVisualEffectViewSubviewMonitoring;
@class _UIVisualEffectViewBackdropCaptureGroup, NSArray, NSString;

@interface _UIVisualEffectSubview : UIView <_UIVisualEffectSubviewSource> {

	_UIVisualEffectViewBackdropCaptureGroup* _primaryCaptureGroup;
	id<_UIVisualEffectViewSubviewMonitoring> _subviewMonitor;
	NSArray* _viewEffects;
	NSArray* _filters;

}

@property (assign,nonatomic,__weak) id<_UIVisualEffectViewSubviewMonitoring> subviewMonitor;              //@synthesize subviewMonitor=_subviewMonitor - In the implementation block
@property (nonatomic,retain) _UIVisualEffectViewBackdropCaptureGroup * primaryCaptureGroup;               //@synthesize primaryCaptureGroup=_primaryCaptureGroup - In the implementation block
@property (nonatomic,copy,readonly) NSArray * viewEffects;                                                //@synthesize viewEffects=_viewEffects - In the implementation block
@property (nonatomic,copy) NSArray * filters;                                                             //@synthesize filters=_filters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setFilters:(NSArray *)arg1 ;
-(id)_initialValueForLayer:(id)arg1 keyPath:(id)arg2 usePresentationValue:(BOOL)arg3 ;
-(BOOL)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(NSArray *)filters;
-(void)_descendent:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(id)asLayer;
-(id)asView;
-(void)setSubviewMonitor:(id<_UIVisualEffectViewSubviewMonitoring>)arg1 ;
-(void)setPrimaryCaptureGroup:(_UIVisualEffectViewBackdropCaptureGroup *)arg1 ;
-(void)applyRequestedFilterEffects;
-(NSArray *)viewEffects;
-(void)_applyFilterValues:(id)arg1 baseName:(id)arg2 toLayer:(id)arg3 ;
-(void)removeViewEffects;
-(void)addViewEffects:(id)arg1 ;
-(void)applyIdentityFilterEffects;
-(void)applyIdentityViewEffects;
-(void)applyRequestedViewEffects;
-(_UIVisualEffectViewBackdropCaptureGroup *)primaryCaptureGroup;
-(id)asImageView;
-(id)asBackdropView;
-(id<_UIVisualEffectViewSubviewMonitoring>)subviewMonitor;
@end

