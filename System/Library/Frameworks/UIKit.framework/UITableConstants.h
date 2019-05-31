/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITableConstants <NSObject>
@optional
-(id)defaultTextColorForCell:(id)arg1 inTableView:(id)arg2 forUserInterfaceStyle:(long long)arg3;
-(id)defaultDetailTextColorForCell:(id)arg1 inTableView:(id)arg2 forUserInterfaceStyle:(long long)arg3;
-(id)defaultHeaderTextColorForTableViewStyle:(long long)arg1 userInterfaceStyle:(long long)arg2;
-(id)defaultFocusedTextColorForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultFocusedDetailTextColorForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultFocusedDisclosureImageForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultFocusedCheckmarkImageForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultFocusedDeleteImageForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultFocusedInsertImageForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultFocusedMultiSelectSelectedImageForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultFocusedMultiSelectNotSelectedImageForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultFocusedReorderControlImageForCell:(id)arg1 inTableView:(id)arg2;

@required
+(id)sharedConstants;
-(double)defaultRowHeightForTableView:(id)arg1;
-(id)defaultBackgroundColorForTableViewStyle:(long long)arg1;
-(id)defaultSeparatorColorForTableViewStyle:(long long)arg1;
-(long long)defaultSeparatorStyleForTableViewStyle:(long long)arg1;
-(double)defaultSectionHeaderHeightForTableView:(id)arg1;
-(double)defaultSectionFooterHeightForTableView:(id)arg1;
-(double)defaultFocusedShadowRadiusForTableView:(id)arg1;
-(UIEdgeInsets*)defaultLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;
-(double)defaultMaskGradientHeightForTableView:(id)arg1;
-(double)defaultAlphaForReorderingCell:(id)arg1 inTableView:(id)arg2;
-(BOOL)reorderingCellWantsShadows:(id)arg1 inTableView:(id)arg2;
-(double)defaultPaddingBetweenRowsForTableView:(id)arg1;
-(double)defaultRowHeightForTableView:(id)arg1 cellStyle:(long long)arg2;
-(double)defaultMarginWidthForTableView:(id)arg1;
-(double)defaultLeadingCellMarginWidthForTableView:(id)arg1;
-(double)defaultTrailingCellMarginWidthForTableView:(id)arg1;
-(id)defaultHeaderFontForTableViewStyle:(long long)arg1;
-(double)defaultTextLabelFontSizeForCell:(id)arg1 inTableView:(id)arg2;
-(double)defaultDetailTextLabelFontSizeForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultFooterFontForTableViewStyle:(long long)arg1;
-(id)defaultHeaderTextColorForTableViewStyle:(long long)arg1;
-(id)defaultFooterTextColorForTableViewStyle:(long long)arg1;
-(id)defaultDisclosureImageForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultDeleteBackgroundImageForCell:(id)arg1 inTableView:(id)arg2;
-(CGRect*)defaultDeleteMinusRectForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultMultiSelectSelectedImageForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultReorderControlImageForCell:(id)arg1 inTableView:(id)arg2;
-(BOOL)supportsUserInterfaceStyles;
-(BOOL)defaultRowHeightDependsOnCellStyle;
-(UIEdgeInsets*)defaultLayoutMarginsForTableView:(id)arg1;
-(BOOL)imageViewOffsetByLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;
-(double)defaultContentEditPaddingForCell:(id)arg1 inTableView:(id)arg2;
-(double)defaultContentReorderPaddingForCell:(id)arg1 inTableView:(id)arg2;
-(double)defaultContentAccessoryPaddingForCell:(id)arg1 inTableView:(id)arg2;
-(double)defaultPaddingBetweenHeaderAndRowsForTableView:(id)arg1;
-(id)defaultBackgroundColorForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultSelectionTintColorForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultTextColorForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultTextLabelFontForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultDetailTextColorForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultDetailTextFontForCell:(id)arg1 inTableView:(id)arg2;
-(double)defaultPlainFirstSectionHeaderHeightForTableView:(id)arg1;
-(double)defaultPlainHeaderLabelYPositionForTableView:(id)arg1 headerBounds:(CGRect)arg2 textRect:(CGRect)arg3 isHeader:(BOOL)arg4;
-(id)defaultHeaderFontForView:(id)arg1 inTableView:(id)arg2;
-(id)defaultFooterFontForView:(id)arg1 inTableView:(id)arg2;
-(id)defaultHeaderTextColorForView:(id)arg1 inTableView:(id)arg2;
-(id)defaultFooterTextColorForView:(id)arg1 inTableView:(id)arg2;
-(id)defaultHeaderBackgroundColorForView:(id)arg1 inTableView:(id)arg2;
-(id)defaultFooterBackgroundColorForView:(id)arg1 inTableView:(id)arg2;
-(id)defaultDisclosurePressedImageForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultCheckmarkImageForCell:(id)arg1 inTableView:(id)arg2;
-(CGSize*)defaultEditControlSizeForCell:(id)arg1 inTableView:(id)arg2;
-(double)defaultEditControlPaddingForCell:(id)arg1 inTableView:(id)arg2;
-(double)defaultSpaceBetweenEditAndReorderControlsForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultDeleteImageForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultInsertImageForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultMultiSelectNotSelectedImageForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultMultiSelectHighlightedImageForCell:(id)arg1 inTableView:(id)arg2;
-(CGSize*)defaultReorderControlSizeForCell:(id)arg1 inTableView:(id)arg2;
-(double)defaultAlphaForDraggingCell:(id)arg1 inTableView:(id)arg2;
-(double)defaultFocusedHorizontalOutsetForTableView:(id)arg1;

@end

