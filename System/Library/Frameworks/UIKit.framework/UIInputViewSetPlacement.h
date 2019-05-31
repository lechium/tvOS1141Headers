/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol UIInputViewSetPlacementDelegate;
@interface UIInputViewSetPlacement : NSObject <NSSecureCoding> {

	BOOL _dirty;
	id<UIInputViewSetPlacementDelegate> delegate;
	double _extendedHeight;

}

@property (nonatomic,readonly) BOOL showsInputViews; 
@property (nonatomic,readonly) BOOL showsKeyboard; 
@property (nonatomic,readonly) BOOL isUndocked; 
@property (nonatomic,readonly) BOOL isInteractive; 
@property (assign,nonatomic) double extendedHeight;                                     //@synthesize extendedHeight=_extendedHeight - In the implementation block
@property (assign,nonatomic) id<UIInputViewSetPlacementDelegate> delegate; 
+(BOOL)supportsSecureCoding;
+(id)placement;
+(id)encodablePlacementsForXPC;
-(id<UIInputViewSetPlacementDelegate>)delegate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UIInputViewSetPlacementDelegate>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isInteractive;
-(double)alpha;
-(BOOL)showsInputViews;
-(BOOL)isUndocked;
-(BOOL)showsKeyboard;
-(BOOL)inputViewWillAppear;
-(void)setDirty;
-(id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(unsigned long long)notificationsForTransitionToPlacement:(id)arg1 ;
-(BOOL)accessoryViewWillAppear;
-(CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(BOOL)arg2 ;
-(Class)applicatorClassForKeyboard:(BOOL)arg1 ;
-(id)applicatorInfoForOwner:(id)arg1 ;
-(void)checkSizeForOwner:(id)arg1 ;
-(double)extendedHeight;
-(void)setExtendedHeight:(double)arg1 ;
@end
