/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITraitEnvironment, TVMediaQueryEvaluatorDelegate;
#import <TVMLKit/TVMLKit-Structs.h>
@class _TVWindowSizeAdaptor, IKViewElement;

@interface TVMediaQueryEvaluator : NSObject {

	_TVWindowSizeAdaptor* _windowSizeAdaptor;
	struct {
		unsigned respondsToEvaluate : 1;
	}  _implFlags;
	IKViewElement* _templateElement;
	id<UITraitEnvironment> _traitEnvironment;
	id<TVMediaQueryEvaluatorDelegate> _delegate;

}

@property (nonatomic,retain,readonly) IKViewElement * templateElement;                       //@synthesize templateElement=_templateElement - In the implementation block
@property (nonatomic,retain,readonly) id<UITraitEnvironment> traitEnvironment;               //@synthesize traitEnvironment=_traitEnvironment - In the implementation block
@property (nonatomic,retain,readonly) _TVWindowSizeAdaptor * windowSizeAdaptor;              //@synthesize windowSizeAdaptor=_windowSizeAdaptor - In the implementation block
@property (assign,nonatomic,__weak) id<TVMediaQueryEvaluatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)evaluatorForTemplateElement:(id)arg1 inWindow:(id)arg2 traitEnvironment:(id)arg3 ;
+(id)_mobileGestaltStringForKey:(CFStringRef)arg1 ;
+(id)_productType;
+(id)evaluatorForTemplateElement:(id)arg1 inWindow:(id)arg2 ;
-(id<TVMediaQueryEvaluatorDelegate>)delegate;
-(void)setDelegate:(id<TVMediaQueryEvaluatorDelegate>)arg1 ;
-(IKViewElement *)templateElement;
-(id)initWithTemplateElement:(id)arg1 inWindow:(id)arg2 traitEnvironment:(id)arg3 ;
-(id)initWithTemplateElement:(id)arg1 inWindow:(id)arg2 ;
-(BOOL)_evaluateTemplateFeatureType:(id)arg1 withValue:(id)arg2 ;
-(BOOL)_evaluateAllMediaFeatureType:(id)arg1 withValue:(id)arg2 ;
-(BOOL)_evaluateDeviceFeatureType:(id)arg1 withValue:(id)arg2 ;
-(id<UITraitEnvironment>)traitEnvironment;
-(id)initWithTemplateElement:(id)arg1 ;
-(BOOL)evaluateMediaQuery:(id)arg1 ;
-(_TVWindowSizeAdaptor *)windowSizeAdaptor;
@end
