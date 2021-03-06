/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, NSArray;

@interface NAUILayoutConstraintSet : NSObject {

	UIView* _owningView;
	/*^block*/id _builder;
	NSArray* _constraints;

}

@property (nonatomic,copy) NSArray * constraints;                        //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,__weak,readonly) UIView * owningView;               //@synthesize owningView=_owningView - In the implementation block
@property (nonatomic,copy,readonly) id builder;                          //@synthesize builder=_builder - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
-(void)invalidate;
-(BOOL)isActive;
-(UIView *)owningView;
-(NSArray *)constraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)activateIfNeeded;
-(id)builder;
-(id)initWithOwningView:(id)arg1 constraintBuilder:(/*^block*/id)arg2 ;
-(void)updateConstraintConstants;
@end

