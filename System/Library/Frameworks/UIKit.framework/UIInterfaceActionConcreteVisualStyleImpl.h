/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIInterfaceActionConcreteVisualStyleImpl <NSObject>
@optional
-(id)actionPropertiesAffectingImageViewStyling;
-(void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3;
-(id)newActionSeparatorViewForGroupViewState:(id)arg1;
-(UIEdgeInsets*)actionSequenceEdgeInsets;
-(CGSize*)minimumActionContentSize;
-(id)newSectionSeparatorViewForGroupViewState:(id)arg1;
-(id)actionViewStateForAttachingToActionRepresentationView:(id)arg1;
-(double)actionSectionSpacing;
-(CGSize*)maximumActionGroupContentSize;
-(BOOL)selectByPressGestureRequired;
-(id)actionClassificationLabelFontForViewState:(id)arg1;
-(id)actionClassificationLabelColorForViewState:(id)arg1;
-(id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2;
-(void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;
-(id)actionPropertiesAffectingLabelStyling;
-(void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2;
-(id)actionPropertiesAffectingActionRepresentationViewStyling;
-(void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2;
-(id)actionGroupPropertiesAffectingActionsScrollViewStyling;
-(void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;
-(void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;

@required
-(id)defaultScreen;
-(id)actionTitleLabelFontForViewState:(id)arg1;
-(id)actionTitleLabelColorForViewState:(id)arg1;
-(double)contentCornerRadius;
-(UIEdgeInsets*)contentMargin;
-(double)horizontalImageContentSpacing;
-(double)verticalImageContentSpacing;
-(id)newActionBackgroundViewForViewState:(id)arg1;
-(id)newGroupBackgroundViewWithGroupViewState:(id)arg1;

@end

