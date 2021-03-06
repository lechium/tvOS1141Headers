/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/_UILayoutEngineSuspending.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UITable_UITableViewCellDelegate, UITableConstants;
@class _UITableViewCellOldEditingData, NSString, _UIFloatingContentView, UIView, UIImageView, UILabel, UIColor, UIVisualEffect, UIStoryboardPreviewingSegueTemplateStorage, UIControl, _UITableViewCellSeparatorView, UITextField, NSTimer, UIImage, UILongPressGestureRecognizer, NSIndexPath, UITableViewCellDeleteConfirmationView, UITapGestureRecognizer, UIFocusGuide;

@interface UITableViewCell : UIView <UIScrollViewDelegate, _UILayoutEngineSuspending, NSCoding, UIGestureRecognizerDelegate> {

	id<UITable_UITableViewCellDelegate> _tableView;
	id _layoutManager;
	id _target;
	SEL _editAction;
	SEL _accessoryAction;
	_UITableViewCellOldEditingData* _oldEditingData;
	id _editingData;
	double _rightMargin;
	long long _indentationLevel;
	double _indentationWidth;
	NSString* _reuseIdentifier;
	_UIFloatingContentView* _floatingContentView;
	long long _lineBreakModeBeforeFocus;
	UIView* _contentView;
	UIImageView* _imageView;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	UIView* _backgroundView;
	UIView* _selectedBackgroundView;
	UIView* _multipleSelectionBackgroundView;
	UIView* _selectedOverlayView;
	double _selectionFadeDuration;
	UIColor* _backgroundColor;
	UIColor* _separatorColor;
	UIVisualEffect* _separatorEffect;
	UIColor* _topShadowColor;
	UIColor* _bottomShadowColor;
	UIColor* _sectionBorderColor;
	UIView* _floatingSeparatorView;
	UIView* _topShadowAnimationView;
	UIView* _bottomShadowAnimationView;
	id _badge;
	CFDictionaryRef _unhighlightedStates;
	id _selectionSegueTemplate;
	id _accessoryActionSegueTemplate;
	UIStoryboardPreviewingSegueTemplateStorage* _accessoryActionPreviewingSegueTemplateStorage;
	UIControl* _accessoryView;
	UIControl* _editingAccessoryView;
	UIView* _customAccessoryView;
	UIView* _customEditingAccessoryView;
	_UITableViewCellSeparatorView* _separatorView;
	_UITableViewCellSeparatorView* _topSeparatorView;
	UIView* _topShadowView;
	UITextField* _editableTextField;
	double _lastSelectionTime;
	NSTimer* _deselectTimer;
	double _textFieldOffset;
	double _indexBarExtentFromEdge;
	UIEdgeInsets _separatorInset;
	UIEdgeInsets _backgroundInset;
	SEL _returnAction;
	UIColor* _selectionTintColor;
	UIColor* _accessoryTintColor;
	UIImage* _reorderControlImage;
	UILongPressGestureRecognizer* _longPressGesture;
	NSIndexPath* _representedIndexPath;
	BOOL _focusable;
	UITableViewCellDeleteConfirmationView* _swipeToDeleteConfirmationView;
	UITapGestureRecognizer* _swipeToDeleteCancelationGesture;
	UIView* _clearBlendingView;
	double _swipeToDeleteDistancePulled;
	double _sectionCornerRadius;
	double _sectionBorderWidth;
	double _defaultLeadingMarginWidth;
	double _defaultTrailingCellMarginWidth;
	UIFocusGuide* _editControlFocusGuide;
	UIFocusGuide* _reorderControlFocusGuide;
	id<UITableConstants> _constants;
	struct {
		unsigned showingDeleteConfirmation : 1;
		unsigned separatorStyle : 3;
		unsigned selectionStyle : 3;
		unsigned selectionFadeFraction : 11;
		unsigned editing : 1;
		unsigned editingStyle : 3;
		unsigned accessoryType : 3;
		unsigned editingAccessoryType : 3;
		unsigned showsAccessoryWhenEditing : 1;
		unsigned showsReorderControl : 1;
		unsigned showDisclosure : 1;
		unsigned showTopSeparator : 1;
		unsigned hideTopSeparatorDuringReordering : 1;
		unsigned disclosureClickable : 1;
		unsigned disclosureStyle : 1;
		unsigned showingRemoveControl : 1;
		unsigned sectionLocation : 3;
		unsigned tableViewStyle : 1;
		unsigned shouldIndentWhileEditing : 1;
		unsigned fontSet : 1;
		unsigned usingDefaultSelectedBackgroundView : 1;
		unsigned usingDefaultBackgroundView : 1;
		unsigned wasSwiped : 1;
		unsigned highlighted : 1;
		unsigned separatorDirty : 1;
		unsigned drawn : 1;
		unsigned drawingDisabled : 1;
		unsigned style : 12;
		unsigned showingMenu : 1;
		unsigned clipsContents : 1;
		unsigned animatingSelection : 1;
		unsigned backgroundColorSet : 1;
		unsigned needsSetup : 1;
		unsigned dontDrawTopShadow : 1;
		unsigned usingMultiselectbackgroundView : 1;
		unsigned isCarPlayCell : 1;
		unsigned deleteAnimationInProgress : 1;
		unsigned deleteCancelationAnimationInProgress : 1;
		unsigned animating : 1;
		unsigned shouldHaveFullLengthBottomSeparator : 1;
		unsigned shouldHaveFullLengthTopSeparator : 1;
		unsigned drawsSeparatorAtTopOfSection : 1;
		unsigned drawsSeparatorAtBottomOfSection : 1;
		unsigned separatorBackdropOverlayBlendMode : 3;
		unsigned separatorDrawsInVibrantLightMode : 1;
		unsigned separatorHidden : 1;
		unsigned hidingSeparatorsForSelection : 1;
		unsigned clippedBeforeSwiping : 1;
		unsigned allowsReorderingWhenNotEditing : 1;
		unsigned needsHeightCalculation : 1;
		unsigned reordering : 1;
		unsigned hasEditingFocusGuides : 1;
		unsigned focusStyle : 3;
		unsigned accessoryViewsHidden : 1;
		unsigned skipsLayout : 1;
		unsigned separatorInsetIsRelativeToCellEdges : 1;
		unsigned highlightingInteractively : 1;
		unsigned shouldHighlightAfterInteraction : 1;
		unsigned userInteractionEnabledBeforeDragging : 2;
		unsigned insetsContentViewsToSafeArea : 1;
	}  _tableCellFlags;
	BOOL _isLayoutEngineSuspended;
	BOOL _userInteractionEnabledWhileDragging;
	BOOL _shouldShowMenu;

}

@property (assign,setter=_setShouldShowMenu:,getter=_shouldShowMenu,nonatomic) BOOL shouldShowMenu;                                                      //@synthesize shouldShowMenu=_shouldShowMenu - In the implementation block
@property (setter=_setEditControlFocusGuide:,getter=_editControlFocusGuide,nonatomic,retain) UIFocusGuide * editControlFocusGuide;                       //@synthesize editControlFocusGuide=_editControlFocusGuide - In the implementation block
@property (setter=_setReorderControlFocusGuide:,getter=_reorderControlFocusGuide,nonatomic,retain) UIFocusGuide * reorderControlFocusGuide;              //@synthesize reorderControlFocusGuide=_reorderControlFocusGuide - In the implementation block
@property (assign,setter=_setSkipsLayout:,getter=_skipsLayout,nonatomic) BOOL skipsLayout; 
@property (nonatomic,readonly) UIImageView * imageView; 
@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) UILabel * detailTextLabel; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,retain) UIView * backgroundView; 
@property (nonatomic,retain) UIView * selectedBackgroundView; 
@property (nonatomic,retain) UIView * multipleSelectionBackgroundView; 
@property (nonatomic,copy,readonly) NSString * reuseIdentifier; 
@property (assign,nonatomic) long long selectionStyle; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (nonatomic,readonly) long long editingStyle; 
@property (assign,nonatomic) BOOL showsReorderControl; 
@property (assign,nonatomic) BOOL shouldIndentWhileEditing; 
@property (assign,nonatomic) long long accessoryType; 
@property (nonatomic,retain) UIView * accessoryView; 
@property (assign,nonatomic) long long editingAccessoryType; 
@property (nonatomic,retain) UIView * editingAccessoryView; 
@property (assign,nonatomic) long long indentationLevel; 
@property (assign,nonatomic) double indentationWidth; 
@property (assign,nonatomic) UIEdgeInsets separatorInset; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (nonatomic,readonly) BOOL showingDeleteConfirmation; 
@property (assign,nonatomic) long long focusStyle; 
@property (assign,nonatomic) BOOL userInteractionEnabledWhileDragging;                                                                                   //@synthesize userInteractionEnabledWhileDragging=_userInteractionEnabledWhileDragging - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setLayoutEngineSuspended:,getter=_isLayoutEngineSuspended,nonatomic) BOOL _layoutEngineSuspended;                              //@synthesize isLayoutEngineSuspended=_isLayoutEngineSuspended - In the implementation block
+(void)initialize;
+(void)_initializeForIdiom:(long long)arg1 ;
+(id)_defaultTopShadowColor;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(void)removeFromSuperview;
-(void)setFrame:(CGRect)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)backgroundColor;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)bringSubviewToFront:(id)arg1 ;
-(void)layoutSubviews;
-(void)sendSubviewToBack:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)_imageView;
-(long long)style;
-(id)image;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(BOOL)canBecomeFocused;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(id)preferredFocusedView;
-(UIView *)contentView;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(id)_target;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_setLayoutEngineSuspended:(BOOL)arg1 ;
-(BOOL)_canDrawContent;
-(id)_encodableSubviews;
-(void)_safeAreaInsetsDidChangeFromOldInsets:(UIEdgeInsets)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(id)_previewingSegueTemplateStorageForLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(BOOL)_isLayoutEngineSuspended;
-(void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3 ;
-(void)didMoveToSuperview;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)_setHiddenForReuse:(BOOL)arg1 ;
-(void)_descendent:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(void)_descendent:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(id)_swipeToDeleteConfirmationView;
-(void)_beginSwiping;
-(void)_updateSwipeWithDistancePulled:(double)arg1 ;
-(void)_setIndexPath:(id)arg1 ;
-(void)_multiselectColorChanged;
-(id)separatorColor;
-(void)setSectionBorderColor:(id)arg1 ;
-(void)_setDrawsTopShadow:(BOOL)arg1 ;
-(double)_indexBarExtentFromEdge;
-(void)_setIndexBarExtentFromEdge:(double)arg1 ;
-(id)_tableView;
-(id)_indexPath;
-(void)_setNeedsHeightCalculation:(BOOL)arg1 ;
-(void)setSeparatorStyle:(long long)arg1 ;
-(BOOL)_shouldApplyReadableWidthInsets;
-(BOOL)_separatorInsetIsRelativeToCellEdges;
-(BOOL)_isMultiselecting;
-(long long)selectionStyle;
-(void)_setSeparatorHidden:(BOOL)arg1 ;
-(void)_setDeleteAnimationInProgress:(BOOL)arg1 ;
-(long long)accessoryType;
-(void)setTableViewStyle:(long long)arg1 ;
-(void)_setConstants:(id)arg1 ;
-(id)_constants;
-(void)_setMarginWidth:(double)arg1 ;
-(void)_setRightMarginWidth:(double)arg1 ;
-(void)_setInsetsContentViewsToSafeArea:(BOOL)arg1 ;
-(NSString *)reuseIdentifier;
-(void)_prepareToEnterReuseQueue;
-(void)_setNeedsSetup:(BOOL)arg1 ;
-(void)_setAnimating:(BOOL)arg1 clippingAdjacentCells:(BOOL)arg2 ;
-(void)_setAnimating:(BOOL)arg1 ;
-(BOOL)_shouldMaskToBoundsWhileAnimating;
-(BOOL)_needsSetup;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_removeFloatingSeparator;
-(void)_removeInnerShadow;
-(void)_setDrawsSeparatorAtTopOfSection:(BOOL)arg1 ;
-(void)_setDrawsSeparatorAtBottomOfSection:(BOOL)arg1 ;
-(id)accessoryActionSegueTemplate;
-(void)setSeparatorColor:(id)arg1 ;
-(void)_setSeparatorInsetIsRelativeToCellEdges:(BOOL)arg1 ;
-(void)_systemTextSizeChanged;
-(void)_endSwiping:(BOOL)arg1 ;
-(long long)_popoverControllerStyle;
-(BOOL)drawingEnabled;
-(long long)editingStyle;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)selectionSegueTemplate;
-(BOOL)isSelected;
-(void)_setBackgroundInset:(UIEdgeInsets)arg1 ;
-(void)setTopShadowColor:(id)arg1 ;
-(void)setBottomShadowColor:(id)arg1 ;
-(void)_updateHighlightColors;
-(void)_setTableBackgroundCGColor:(CGColorRef)arg1 withSystemColorName:(id)arg2 ;
-(void)_updateAndCacheBackgroundColorForHighlightIgnoringSelection:(BOOL)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)prepareForReuse;
-(void)setReuseIdentifier:(NSString *)arg1 ;
-(id)layoutManager;
-(void)_startToEditTextField;
-(SEL)returnAction;
-(void)_setTableView:(id)arg1 ;
-(void)setIndentationLevel:(long long)arg1 ;
-(unsigned long long)currentStateMask;
-(void)_setMultiselecting:(BOOL)arg1 ;
-(void)_setDefaultLeadingMarginWidth:(double)arg1 ;
-(double)_defaultTrailingCellMarginWidth;
-(void)_setDefaultTrailingCellMarginWidth:(double)arg1 ;
-(void)_tableViewDidUpdateMarginWidth;
-(void)_setTarget:(id)arg1 ;
-(void)_setAccessoryAction:(SEL)arg1 ;
-(void)_setIsCarPlayCell:(BOOL)arg1 forceUpdateDefaults:(BOOL)arg2 ;
-(BOOL)_backgroundColorSet;
-(BOOL)_isCarPlayCell;
-(id)sectionBorderColor;
-(long long)_separatorBackdropOverlayBlendMode;
-(void)_setSeparatorBackdropOverlayBlendMode:(long long)arg1 ;
-(void)_setSeparatorEffect:(id)arg1 ;
-(double)_sectionBorderWidth;
-(void)_setSectionBorderWidth:(double)arg1 ;
-(void)_setAllowsReorderingWhenNotEditing:(BOOL)arg1 ;
-(void)_setCurrentScreenScale:(double)arg1 ;
-(void)setSectionLocation:(int)arg1 animated:(BOOL)arg2 ;
-(void)_setFrame:(CGRect)arg1 skipLayout:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(void)_saveOpaqueViewState:(id)arg1 ;
-(void)_setOpaque:(BOOL)arg1 forSubview:(id)arg2 ;
-(void)_setReordering:(BOOL)arg1 ;
-(void)_setShouldHaveFullLengthBottomSeparator:(BOOL)arg1 ;
-(void)_setShouldHaveFullLengthTopSeparator:(BOOL)arg1 ;
-(BOOL)_drawsTopSeparatorDuringReordering;
-(void)_setDrawsTopSeparator:(BOOL)arg1 ;
-(UILabel *)textLabel;
-(UILabel *)detailTextLabel;
-(void)setAccessoryType:(long long)arg1 ;
-(void)_setShowsReorderControl:(BOOL)arg1 ;
-(void)_setEditingStyle:(long long)arg1 ;
-(void)_setShouldIndentWhileEditing:(BOOL)arg1 ;
-(void)setWasSwiped:(BOOL)arg1 ;
-(void)_setShowingDeleteConfirmation:(BOOL)arg1 ;
-(BOOL)shouldIndentWhileEditing;
-(BOOL)showingDeleteConfirmation;
-(BOOL)showsReorderControl;
-(BOOL)_isAnimating;
-(void)willTransitionToState:(unsigned long long)arg1 ;
-(void)_setDeleteCancelationAnimationInProgress:(BOOL)arg1 ;
-(UIView *)backgroundView;
-(void)didTransitionToState:(unsigned long long)arg1 ;
-(long long)separatorStyle;
-(UIEdgeInsets)_backgroundInset;
-(void)_setSeparatorDrawsInVibrantLightMode:(BOOL)arg1 ;
-(BOOL)_needsHeightCalculation;
-(void)setShowingDeleteConfirmation:(BOOL)arg1 ;
-(void)_resetEditControlRotation;
-(UIEdgeInsets)separatorInset;
-(UIEdgeInsets)_effectiveSafeAreaInsets;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(UIEdgeInsets)_rawSeparatorInset;
-(BOOL)_isInModalViewController;
-(double)_marginWidth;
-(id)_titleForDeleteConfirmationButton;
-(BOOL)_allowsReorderingWhenNotEditing;
-(id)_separatorEffect;
-(id)tableBackgroundColor;
-(id)font;
-(id)textColor;
-(long long)textAlignment;
-(long long)lineBreakMode;
-(id)selectedImage;
-(void)setLayoutManager:(id)arg1 ;
-(UIImageView *)imageView;
-(void)_setBadgeText:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(BOOL)_isHighlighted;
-(void)_uiRemoveControlMinusButtonHideAnimationDone:(id)arg1 ;
-(CGRect)removeControl:(id)arg1 startFrameForTarget:(id)arg2 ;
-(CGRect)removeControl:(id)arg1 endFrameForTarget:(id)arg2 ;
-(void)removeControlWillHideRemoveConfirmation:(id)arg1 ;
-(CGRect)backgroundRectForBounds:(CGRect)arg1 ;
-(void)removeControl:(id)arg1 wasCanceledForTarget:(id)arg2 ;
-(void)insertControl:(id)arg1 shouldInsertWithTarget:(id)arg2 ;
-(void)removeControl:(id)arg1 willRemoveTarget:(id)arg2 ;
-(long long)tableViewStyle;
-(void)setNeedsUpdateConstraints;
-(id)topShadowColor;
-(id)bottomShadowColor;
-(int)sectionLocation;
-(void)setSectionLocation:(int)arg1 ;
-(void)setSelectionStyle:(long long)arg1 ;
-(id)_layoutDebuggingTitle;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(double)_defaultLeadingMarginWidth;
-(BOOL)_insetsContentViewsToSafeArea;
-(BOOL)_drawsSeparatorAtTopOfSection;
-(BOOL)_drawsSeparatorAtBottomOfSection;
-(long long)indentationLevel;
-(void)setEditingStyle:(long long)arg1 ;
-(void)setShouldIndentWhileEditing:(BOOL)arg1 ;
-(void)setShowsReorderControl:(BOOL)arg1 ;
-(UIView *)selectedBackgroundView;
-(void)setSelectedBackgroundView:(UIView *)arg1 ;
-(id)_accessoryView:(BOOL)arg1 ;
-(id)_separatorView:(BOOL)arg1 ;
-(id)editingData:(BOOL)arg1 ;
-(void)_setAccessoryViewsHidden:(BOOL)arg1 ;
-(void)removeEditingData;
-(void)_setEditing:(BOOL)arg1 animated:(BOOL)arg2 cellOrAncestorViewForAnimatedLayout:(id)arg3 ;
-(double)selectionFadeDuration;
-(UIView *)multipleSelectionBackgroundView;
-(void)setMultipleSelectionBackgroundView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(void)setAccessoryView:(UIView *)arg1 ;
-(long long)editingAccessoryType;
-(void)setEditingAccessoryType:(long long)arg1 ;
-(UIView *)editingAccessoryView;
-(void)setEditingAccessoryView:(UIView *)arg1 ;
-(double)indentationWidth;
-(void)setIndentationWidth:(double)arg1 ;
-(long long)focusStyle;
-(void)setFocusStyle:(long long)arg1 ;
-(id)_removeControl;
-(BOOL)_isReorderControlActive;
-(BOOL)_grabberBeganReorder:(id)arg1 touch:(id)arg2 ;
-(void)_grabberDragged:(id)arg1 yDelta:(float)arg2 touch:(id)arg3 ;
-(void)_grabberReleased:(id)arg1 ;
-(void)setSelectionTintColor:(id)arg1 ;
-(id)selectionTintColor;
-(id)_multiselectBackgroundColor;
-(void)_setSeparatorDrawsInVibrantLightModeUIAppearance:(id)arg1 ;
-(id)oldEditingData;
-(CGRect)reorderRectForBounds:(CGRect)arg1 ;
-(void)setOldEditingData:(id)arg1 ;
-(void)_releaseReorderingControl;
-(id)_disclosureChevronImage:(BOOL)arg1 ;
-(id)_tintedDisclosureImagePressed:(BOOL)arg1 ;
-(id)_detailDisclosureImage:(BOOL)arg1 ;
-(id)_checkmarkImage:(BOOL)arg1 ;
-(id)_defaultAccessoryView;
-(void)_releaseRemoveControl;
-(double)_separatorHeight;
-(void)_updateHighlightColorsForView:(id)arg1 highlighted:(BOOL)arg2 ;
-(BOOL)_isCurrentlyConsideredHighlighted;
-(id)_reorderingControl;
-(id)_currentAccessoryView:(BOOL)arg1 ;
-(void)_setShouldShowMenu:(BOOL)arg1 ;
-(BOOL)_shouldShowMenu;
-(void)_showMenuFromLongPressGesture;
-(void)_menuDismissed:(id)arg1 ;
-(BOOL)_insetsBackground;
-(BOOL)_drawsTopShadow;
-(id)_selectedBackgroundView:(BOOL)arg1 ;
-(void)_topShadowDidFadeOut;
-(void)_performAction:(SEL)arg1 sender:(id)arg2 ;
-(void)_updateSeparatorContent;
-(void)_setNeedsSeparatorUpdate;
-(double)_rightMarginWidth;
-(BOOL)_showFullLengthTopSeparatorForTopOfSection;
-(CGRect)_separatorFrame;
-(id)_addSeparatorWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldHideSeparator;
-(BOOL)_showSeparatorAtTopOfSection;
-(CGRect)_topSeparatorFrame;
-(id)initWithFrame:(CGRect)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelectionFadeDuration:(double)arg1 ;
-(id)_subviewsForFloatingContentView;
-(void)_releaseTextLabel;
-(void)_releaseDetailTextLabel;
-(void)_longPressGestureRecognized:(id)arg1 ;
-(void)_setupTableViewCellCommon;
-(void)_drawContentInRect:(CGRect)arg1 selected:(BOOL)arg2 ;
-(void)_setupMenuGesture;
-(id)_defaultFont;
-(void)_didCreateContentView;
-(id)_textLabel;
-(id)_detailTextLabel;
-(id)_textLabel:(BOOL)arg1 ;
-(void)_setFont:(id)arg1 layout:(BOOL)arg2 ;
-(id)_badge;
-(void)_updateTopShadowView:(BOOL)arg1 ;
-(void)_setupBackgroundView;
-(void)_setupSelectedBackgroundView;
-(void)setSelectedBackgroundView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_resetSelectionTimer;
-(void)_setSelectionStyle:(long long)arg1 selectionTintColor:(id)arg2 ;
-(void)_deselectAnimationFinished;
-(void)_updateHighlightColorsForAnimationHalfwayPoint;
-(void)_cancelInternalPerformRequests;
-(void)showSelectedBackgroundView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateFloatingContentControlStateAnimated:(BOOL)arg1 ;
-(void)_delayedDeselect;
-(void)_removeRemoveControl;
-(void)_ensureFocusedFloatingContentView;
-(void)_updateDefaultLabelsForFocus:(BOOL)arg1 ;
-(void)_updateDefaultAccessoryViewForFocus:(BOOL)arg1 ;
-(void)_removeFocusedFloatingContentView;
-(void)_willTransitionToState:(unsigned long long)arg1 ;
-(void)_didTransitionToState:(unsigned long long)arg1 ;
-(void)_createReorderControlIfNeeded;
-(void)_syncAccessoryViewsIfNecessary;
-(id)_editingAccessoryView:(BOOL)arg1 ;
-(void)_updateContentClip;
-(BOOL)wasSwiped;
-(id)_createRemoveControlForStyle:(long long)arg1 ;
-(void)_showReorderControl;
-(void)_layoutSubviewsAnimated:(BOOL)arg1 ;
-(double)_editingButtonOffset;
-(CGRect)accessoryRectForBounds:(CGRect)arg1 accessoryView:(id)arg2 isCustom:(BOOL)arg3 ;
-(CGRect)_delegateConfirmationRect;
-(CGSize)_textInsetSize;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(CGSize)_imageInsetSize;
-(void)_updateFullWidthSwipeDeletionView;
-(void)_updateViewsForDeleteButton;
-(void)_updateCellMaskViewsForView:(id)arg1 backdropView:(id)arg2 ;
-(void)_updateFloatingContentControlStateInContext:(id)arg1 withAnimationCoordinator:(id)arg2 animated:(BOOL)arg3 ;
-(void)_layoutFloatingContentView;
-(BOOL)_skipsLayout;
-(id)_reorderingSeparatorView;
-(CGRect)textRectForContentRect:(CGRect)arg1 ;
-(void)_setSectionLocation:(int)arg1 animated:(BOOL)arg2 forceBackgroundSetup:(BOOL)arg3 ;
-(void)_updateSeparatorContent:(BOOL)arg1 ;
-(id)_editableTextField;
-(void)_willBeDeleted;
-(void)_setGrabberHidden:(BOOL)arg1 ;
-(id)_disclosureImage:(BOOL)arg1 ;
-(id)_disclosurePressedImage:(BOOL)arg1 ;
-(id)_newAccessoryView:(BOOL)arg1 ;
-(void)_clearOpaqueViewState:(id)arg1 ;
-(id)editableTextField;
-(double)_imageViewExtentFromCellLeadingEdge;
-(void)_setIsCarPlayCell:(BOOL)arg1 ;
-(void)_actionButtonPushed:(id)arg1 ;
-(void)_handleSwipeDeleteCancelation:(id)arg1 ;
-(id)accessoryActionPreviewingSegueTemplateStorage;
-(void)_finishedFadingGrabber:(id)arg1 finished:(BOOL)arg2 ;
-(BOOL)_forwardsSystemLayoutFittingSizeToContentView:(id)arg1 ;
-(void)_contentViewLabelTextDidChange:(id)arg1 ;
-(void)_setDrawsTopSeparatorDuringReordering:(BOOL)arg1 ;
-(void)setAccessoryActionSegueTemplate:(id)arg1 ;
-(void)setSelectionSegueTemplate:(id)arg1 ;
-(BOOL)_shouldHaveFullLengthBottomSeparator;
-(BOOL)_shouldHaveFullLengthTopSeparator;
-(UIEdgeInsets)_backgroundSeparatorInset;
-(void)setDrawingEnabled:(BOOL)arg1 ;
-(void)setSelectedTextColor:(id)arg1 ;
-(id)selectedTextColor;
-(void)setSelectedImage:(id)arg1 ;
-(id)_badgeText;
-(id)_forSpringBoardDefaultSelectedBackgroundView;
-(void)_forSpringBoardSetDefaultSelectedBackgroundView:(id)arg1 ;
-(id)_contentBackgroundColor;
-(void)setTableBackgroundColor:(id)arg1 ;
-(BOOL)isAtLeastHalfSelected;
-(float)selectionPercent;
-(id)selectedOverlayView;
-(void)_transitionToReorderingAppearance:(BOOL)arg1 ;
-(void)_finishTransitioningToReorderingAppearance:(BOOL)arg1 ;
-(void)_setAccessoryTintColor:(id)arg1 ;
-(id)_accessoryTintColor;
-(void)setHidesAccessoryWhenEditing:(BOOL)arg1 ;
-(BOOL)hidesAccessoryWhenEditing;
-(void)setClipsContents:(BOOL)arg1 ;
-(BOOL)clipsContents;
-(CGRect)editRectForBounds:(CGRect)arg1 ;
-(void)_setSkipsLayout:(BOOL)arg1 ;
-(void)setEditAction:(SEL)arg1 ;
-(SEL)editAction;
-(void)setAccessoryAction:(SEL)arg1 ;
-(SEL)accessoryAction;
-(CGRect)contentRectForState:(unsigned long long)arg1 ;
-(id)_detailTextLabel:(BOOL)arg1 ;
-(id)_editableTextField:(BOOL)arg1 ;
-(id)_imageView:(BOOL)arg1 ;
-(id)_badge:(BOOL)arg1 ;
-(void)_setReorderControlImage:(id)arg1 ;
-(id)_reorderControlImage;
-(void)_drawSeparatorInRect:(CGRect)arg1 ;
-(void)_animateFloatingSeparatorForInsertion:(BOOL)arg1 withRowAnimation:(long long)arg2 ;
-(void)_animateInnerShadowForInsertion:(BOOL)arg1 withRowAnimation:(long long)arg2 ;
-(void)_grabberDragged:(id)arg1 yDelta:(float)arg2 ;
-(void)editControlWasClicked:(id)arg1 ;
-(void)deleteConfirmationControlWasClicked:(id)arg1 ;
-(void)deleteConfirmationControlWasCancelled:(id)arg1 ;
-(BOOL)_isReorderable;
-(id)_customAccessoryView:(BOOL)arg1 ;
-(id)_customEditingAccessoryView:(BOOL)arg1 ;
-(id)_backgroundView:(BOOL)arg1 ;
-(id)_topShadowView:(BOOL)arg1 ;
-(BOOL)_hasAccessoryView;
-(BOOL)_hasEditingAccessoryView;
-(SEL)_accessoryAction;
-(BOOL)_shouldSaveOpaqueStateForView:(id)arg1 ;
-(BOOL)_isUsingOldStyleMultiselection;
-(BOOL)_isDeleteCancelationAnimationInProgress;
-(id)_deleteConfirmationView;
-(BOOL)_isDeleteAnimationInProgress;
-(void)_swipeDeleteButtonPushed;
-(void)_swipeAccessoryButtonPushed;
-(void)setTextFieldOffset:(double)arg1 ;
-(double)textFieldOffset;
-(void)setPlaceHolderValue:(id)arg1 ;
-(void)textFieldDidBecomeFirstResponder:(id)arg1 ;
-(void)setReturnAction:(SEL)arg1 ;
-(BOOL)_separatorDrawsInVibrantLightMode;
-(BOOL)_separatorHidden;
-(BOOL)_accessoryViewsHidden;
-(BOOL)_usesRoundedGroups;
-(void)setAccessoryActionPreviewingSegueTemplateStorage:(id)arg1 ;
-(void)setTableSpecificElementsHidden:(BOOL)arg1 ;
-(BOOL)tableSpecificElementsHidden;
-(id)_editControlFocusGuide;
-(void)_setEditControlFocusGuide:(id)arg1 ;
-(id)_reorderControlFocusGuide;
-(void)_setReorderControlFocusGuide:(id)arg1 ;
-(BOOL)userInteractionEnabledWhileDragging;
-(void)setUserInteractionEnabledWhileDragging:(BOOL)arg1 ;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end

