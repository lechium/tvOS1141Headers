/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UICompoundObjectMap, NSMutableSet;

@interface _UIViewAnimatablePropertyTransformer : NSObject {

	BOOL _presentationValueCallbackRan;
	/*^block*/id _modelValueChangedCallback;
	/*^block*/id _presentationValueChangedCallback;
	/*^block*/id _stabilizedCallback;
	_UICompoundObjectMap* _capturedProperties;
	NSMutableSet* _runningProgresses;

}

@property (nonatomic,copy) id modelValueChangedCallback;                             //@synthesize modelValueChangedCallback=_modelValueChangedCallback - In the implementation block
@property (nonatomic,copy) id presentationValueChangedCallback;                      //@synthesize presentationValueChangedCallback=_presentationValueChangedCallback - In the implementation block
@property (nonatomic,copy) id stabilizedCallback;                                    //@synthesize stabilizedCallback=_stabilizedCallback - In the implementation block
@property (nonatomic,retain) _UICompoundObjectMap * capturedProperties;              //@synthesize capturedProperties=_capturedProperties - In the implementation block
@property (nonatomic,retain) NSMutableSet * runningProgresses;                       //@synthesize runningProgresses=_runningProgresses - In the implementation block
-(id)initWithProgressAnimatableProperty:(id)arg1 modelValueSetter:(/*^block*/id)arg2 presentationValueSetter:(/*^block*/id)arg3 ;
-(void)setCapturedProperties:(_UICompoundObjectMap *)arg1 ;
-(_UICompoundObjectMap *)capturedProperties;
-(id)initWithInputAnimatableProperties:(id)arg1 modelValueSetter:(/*^block*/id)arg2 presentationValueSetter:(/*^block*/id)arg3 ;
-(id)initWithInputAnimatableProperties:(id)arg1 presentationValueChangedCallback:(/*^block*/id)arg2 ;
-(void)setModelValueChangedCallback:(id)arg1 ;
-(void)setPresentationValueChangedCallback:(id)arg1 ;
-(void)setStabilizedCallback:(id)arg1 ;
-(void)setRunningProgresses:(NSMutableSet *)arg1 ;
-(id)initWithInputAnimatableProperties:(id)arg1 modelValueSetter:(/*^block*/id)arg2 presentationValueSetter:(/*^block*/id)arg3 stabilizedCallback:(/*^block*/id)arg4 allowsProgressAnimatableProperties:(BOOL)arg5 ;
-(id)initWithInputAnimatableProperties:(id)arg1 modelValueSetter:(/*^block*/id)arg2 presentationValueSetter:(/*^block*/id)arg3 stabilizedCallback:(/*^block*/id)arg4 ;
-(NSMutableSet *)runningProgresses;
-(id)presentationValueChangedCallback;
-(id)modelValueChangedCallback;
-(void)presentationValueUpdatedForProgress:(id)arg1 ;
-(void)presentationValueStabilizedForProgress:(id)arg1 ;
-(void)modelValueUpdatedForProgress:(id)arg1 ;
-(void)progressInvalidated:(id)arg1 ;
-(id)stabilizedCallback;
@end
