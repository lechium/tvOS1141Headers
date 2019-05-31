/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIScreenEdgePanRecognizerDelegate.h>
#import <UIKit/_UIScreenEdgePanRecognizing.h>

@protocol _UIScreenEdgePanRecognizingDelegate;
@class NSMutableDictionary, NSMutableIndexSet, _UIScreenEdgePanRecognizerSettings, NSString;

@interface _UIScreenEdgePanRecognizingMultipleTouch : NSObject <_UIScreenEdgePanRecognizerDelegate, _UIScreenEdgePanRecognizing> {

	long long _type;
	NSMutableDictionary* _recognizers;
	NSMutableIndexSet* _touchIdentifiersToIgnore;
	BOOL _recognizeImmediatelyFromEdgeLocked;
	BOOL _recognizeAlongEdge;
	BOOL _shouldUseGrapeFlags;
	id<_UIScreenEdgePanRecognizingDelegate> _delegate;
	long long _state;
	unsigned long long _targetEdges;
	_UIScreenEdgePanRecognizerSettings* _settings;
	CGRect _screenBounds;

}

@property (assign,nonatomic,__weak) id<_UIScreenEdgePanRecognizingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long state;                                                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL recognizeImmediatelyFromEdgeLocked;                              //@synthesize recognizeImmediatelyFromEdgeLocked=_recognizeImmediatelyFromEdgeLocked - In the implementation block
@property (assign,nonatomic) BOOL recognizeAlongEdge;                                              //@synthesize recognizeAlongEdge=_recognizeAlongEdge - In the implementation block
@property (assign,nonatomic) BOOL shouldUseGrapeFlags;                                             //@synthesize shouldUseGrapeFlags=_shouldUseGrapeFlags - In the implementation block
@property (assign,nonatomic) CGRect screenBounds;                                                  //@synthesize screenBounds=_screenBounds - In the implementation block
@property (assign,nonatomic) unsigned long long targetEdges;                                       //@synthesize targetEdges=_targetEdges - In the implementation block
@property (nonatomic,readonly) _UIScreenEdgePanRecognizerSettings * settings;                      //@synthesize settings=_settings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_UIScreenEdgePanRecognizingDelegate>)delegate;
-(void)setDelegate:(id<_UIScreenEdgePanRecognizingDelegate>)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(_UIScreenEdgePanRecognizerSettings *)settings;
-(void)reset;
-(id)initWithType:(long long)arg1 ;
-(void)setScreenBounds:(CGRect)arg1 ;
-(unsigned long long)targetEdges;
-(void)setTargetEdges:(unsigned long long)arg1 ;
-(void)screenEdgePanRecognizerStateDidChange:(id)arg1 ;
-(void)setShouldUseGrapeFlags:(BOOL)arg1 ;
-(CGRect)screenBounds;
-(BOOL)isRequiringLongPress;
-(unsigned long long)touchedEdgesForInterfaceOrientation:(long long)arg1 ;
-(BOOL)shouldUseGrapeFlags;
-(BOOL)recognizeImmediatelyFromEdgeLocked;
-(void)setRecognizeImmediatelyFromEdgeLocked:(BOOL)arg1 ;
-(BOOL)recognizeAlongEdge;
-(void)setRecognizeAlongEdge:(BOOL)arg1 ;
-(unsigned long long)maxInitialTouches;
-(void)incorporateTouchSampleAtLocation:(CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6 forTouchIdentifier:(unsigned)arg7 ;
-(void)giveTouchIdentifiersToIgnore:(/*^block*/id)arg1 ;
-(void)ignoreTouchIdentifier:(id)arg1 ;
@end

