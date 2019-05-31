/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSViewController.h>
#import <UIKit/UIAppearance.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDataSourcePrefetching.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PSSpecifierObserver.h>
#import <libobjc.A.dylib/PSViewControllerOffsetProtocol.h>

@protocol PSSpecifierDataSource;
@class NSMutableArray, NSMutableDictionary, PSListContainerView, UITableView, NSArray, NSString, UIKeyboard, NSIndexPath, NSDictionary, UIColor;

@interface PSListController : PSViewController <UIAppearance, UITableViewDelegate, UITableViewDataSource, UITableViewDataSourcePrefetching, UIAlertViewDelegate, UIPopoverPresentationControllerDelegate, PSSpecifierObserver, PSViewControllerOffsetProtocol> {

	NSMutableArray* _prequeuedReusablePSTableCells;
	NSMutableDictionary* _cells;
	BOOL _cachesCells;
	BOOL _reusesCells;
	BOOL _forceSynchronousIconLoadForCreatedCells;
	PSListContainerView* _containerView;
	UITableView* _table;
	NSArray* _specifiers;
	NSMutableDictionary* _specifiersByID;
	NSMutableArray* _groups;
	NSString* _specifierID;
	NSMutableArray* _bundleControllers;
	BOOL _bundlesLoaded;
	BOOL _showingSetupController;
	BOOL _keyboardWasVisible;
	UIKeyboard* _keyboard;
	BOOL _popupIsModal;
	BOOL _popupIsDismissing;
	BOOL _hasAppeared;
	float _verticalContentOffset;
	NSString* _offsetItemName;
	CGPoint _contentOffsetWithKeyboard;
	NSString* _highlightItemName;
	BOOL _isVisible;
	id<PSSpecifierDataSource> _dataSource;
	BOOL _requestingSpecifiersFromDataSource;
	BOOL _sectionContentInsetInitialized;
	NSIndexPath* _savedSelectedIndexPath;
	BOOL _edgeToEdgeCells;
	BOOL _prefetchingEnabled;
	BOOL _usesDarkTheme;
	NSDictionary* _pendingURLResourceDictionary;
	NSString* _specifierIDPendingPush;
	UIColor* _backgroundColor;
	UIColor* _foregroundColor;
	UIColor* _separatorColor;
	UIColor* _cellHighlightColor;
	UIColor* _cellAccessoryColor;
	UIColor* _cellAccessoryHighlightColor;
	UIColor* _textColor;
	UIColor* _altTextColor;
	UIColor* _buttonTextColor;
	UIColor* _editableTextColor;
	UIColor* _editablePlaceholderTextColor;
	UIColor* _editableInsertionPointColor;
	UIColor* _editableSelectionBarColor;
	UIColor* _editableSelectionHighlightColor;
	UIColor* _footerHyperlinkColor;
	UIColor* _segmentedSliderTrackColor;

}

@property (assign,nonatomic) BOOL usesDarkTheme;                                         //@synthesize usesDarkTheme=_usesDarkTheme - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * foregroundColor;                                  //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;                                   //@synthesize separatorColor=_separatorColor - In the implementation block
@property (nonatomic,retain) UIColor * cellHighlightColor;                               //@synthesize cellHighlightColor=_cellHighlightColor - In the implementation block
@property (nonatomic,retain) UIColor * cellAccessoryColor;                               //@synthesize cellAccessoryColor=_cellAccessoryColor - In the implementation block
@property (nonatomic,retain) UIColor * cellAccessoryHighlightColor;                      //@synthesize cellAccessoryHighlightColor=_cellAccessoryHighlightColor - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                        //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * altTextColor;                                     //@synthesize altTextColor=_altTextColor - In the implementation block
@property (nonatomic,retain) UIColor * buttonTextColor;                                  //@synthesize buttonTextColor=_buttonTextColor - In the implementation block
@property (nonatomic,retain) UIColor * editableTextColor;                                //@synthesize editableTextColor=_editableTextColor - In the implementation block
@property (nonatomic,retain) UIColor * editablePlaceholderTextColor;                     //@synthesize editablePlaceholderTextColor=_editablePlaceholderTextColor - In the implementation block
@property (nonatomic,retain) UIColor * editableInsertionPointColor;                      //@synthesize editableInsertionPointColor=_editableInsertionPointColor - In the implementation block
@property (nonatomic,retain) UIColor * editableSelectionBarColor;                        //@synthesize editableSelectionBarColor=_editableSelectionBarColor - In the implementation block
@property (nonatomic,retain) UIColor * editableSelectionHighlightColor;                  //@synthesize editableSelectionHighlightColor=_editableSelectionHighlightColor - In the implementation block
@property (nonatomic,retain) UIColor * footerHyperlinkColor;                             //@synthesize footerHyperlinkColor=_footerHyperlinkColor - In the implementation block
@property (nonatomic,retain) UIColor * segmentedSliderTrackColor;                        //@synthesize segmentedSliderTrackColor=_segmentedSliderTrackColor - In the implementation block
@property (nonatomic,retain) id<PSSpecifierDataSource> specifierDataSource; 
@property (assign,nonatomic) BOOL forceSynchronousIconLoadForCreatedCells;               //@synthesize forceSynchronousIconLoadForCreatedCells=_forceSynchronousIconLoadForCreatedCells - In the implementation block
@property (assign,nonatomic) BOOL edgeToEdgeCells;                                       //@synthesize edgeToEdgeCells=_edgeToEdgeCells - In the implementation block
@property (nonatomic,retain) NSDictionary * pendingURLResourceDictionary;                //@synthesize pendingURLResourceDictionary=_pendingURLResourceDictionary - In the implementation block
@property (nonatomic,copy) NSString * specifierIDPendingPush;                            //@synthesize specifierIDPendingPush=_specifierIDPendingPush - In the implementation block
@property (assign,nonatomic) BOOL prefetchingEnabled;                                    //@synthesize prefetchingEnabled=_prefetchingEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long observerType; 
+(id)appearanceForTraitCollection:(id)arg1 ;
+(id)appearance;
+(id)appearanceWhenContainedInInstancesOfClasses:(id)arg1 ;
+(id)appearanceWhenContainedIn:(Class)arg1 ;
+(id)appearanceForTraitCollection:(id)arg1 whenContainedInInstancesOfClasses:(id)arg2 ;
+(id)appearanceForTraitCollection:(id)arg1 whenContainedIn:(Class)arg2 ;
+(id)aggregateReportingDomainOverride;
+(BOOL)displaysButtonBar;
+(void)setAggregateReportingDomainOverride:(id)arg1 ;
-(id)specifier;
-(id)init;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)dealloc;
-(NSString *)description;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)reload;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(UIColor *)separatorColor;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(id)tableView:(id)arg1 detailTextForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2 ;
-(long long)tableView:(id)arg1 titleAlignmentForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 titleAlignmentForFooterInSection:(long long)arg2 ;
-(void)beginUpdates;
-(void)endUpdates;
-(UIColor *)textColor;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)_setContentInset:(double)arg1 ;
-(id)table;
-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1 ;
-(long long)tableViewStyle;
-(id)bundle;
-(void)_keyboardDidHide:(id)arg1 ;
-(void)contentSizeDidChange:(id)arg1 ;
-(UIColor *)foregroundColor;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(void)setPrefetchingEnabled:(BOOL)arg1 ;
-(BOOL)usesDarkTheme;
-(void)setUsesDarkTheme:(BOOL)arg1 ;
-(void)clearCache;
-(void)reloadSpecifier:(id)arg1 ;
-(id)specifiers;
-(void)reloadSpecifiers;
-(void)_updateSectionContentInsetWithAnimation:(BOOL)arg1 ;
-(void)setCachesCells:(BOOL)arg1 ;
-(void)setReusesCells:(BOOL)arg1 ;
-(id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 bundle:(id)arg3 ;
-(void)setSpecifierID:(id)arg1 ;
-(id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 ;
-(long long)indexOfSpecifier:(id)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(void)setSpecifierDataSource:(id<PSSpecifierDataSource>)arg1 ;
-(void)prepareSpecifiersMetadata;
-(BOOL)getGroup:(long long*)arg1 row:(long long*)arg2 ofSpecifierAtIndex:(long long)arg3 ;
-(id)indexPathForIndex:(long long)arg1 ;
-(void)createGroupIndices;
-(long long)indexForIndexPath:(id)arg1 ;
-(id)specifiersInGroup:(long long)arg1 ;
-(void)reloadSpecifierAtIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)reloadSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(id)specifierForID:(id)arg1 ;
-(void)reloadSpecifierID:(id)arg1 animated:(BOOL)arg2 ;
-(id)specifierAtIndex:(long long)arg1 ;
-(BOOL)getGroup:(long long*)arg1 row:(long long*)arg2 ofSpecifier:(id)arg3 ;
-(id)getGroupSpecifierForSpecifier:(id)arg1 ;
-(BOOL)_getGroup:(long long*)arg1 row:(long long*)arg2 ofSpecifierAtIndex:(long long)arg3 groups:(id)arg4 ;
-(long long)rowsForGroup:(long long)arg1 ;
-(long long)indexOfSpecifierID:(id)arg1 ;
-(void)insertContiguousSpecifiers:(id)arg1 atIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)insertSpecifier:(id)arg1 atIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2 animated:(BOOL)arg3 ;
-(void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2 animated:(BOOL)arg3 ;
-(void)insertSpecifier:(id)arg1 atEndOfGroup:(long long)arg2 animated:(BOOL)arg3 ;
-(void)_addIdentifierForSpecifier:(id)arg1 ;
-(void)_insertContiguousSpecifiers:(id)arg1 atIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2 animated:(BOOL)arg3 ;
-(void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2 animated:(BOOL)arg3 ;
-(void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(long long)arg2 animated:(BOOL)arg3 ;
-(void)addSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)addSpecifiersFromArray:(id)arg1 animated:(BOOL)arg2 ;
-(void)removeContiguousSpecifiers:(id)arg1 animated:(BOOL)arg2 ;
-(void)removeSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)removeSpecifierID:(id)arg1 animated:(BOOL)arg2 ;
-(void)removeSpecifierAtIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)removeLastSpecifierAnimated:(BOOL)arg1 ;
-(void)_removeIdentifierForSpecifier:(id)arg1 ;
-(void)_removeContiguousSpecifiers:(id)arg1 animated:(BOOL)arg2 ;
-(void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2 animated:(BOOL)arg3 ;
-(void)updateSpecifiersInRange:(NSRange)arg1 withSpecifiers:(id)arg2 ;
-(long long)_nextGroupInSpecifiersAfterIndex:(long long)arg1 inArray:(id)arg2 ;
-(void)dismissConfirmationViewAnimated:(BOOL)arg1 ;
-(void)_unloadBundleControllers;
-(void)_returnKeyPressed:(id)arg1 ;
-(void)contentSizeChangedNotificationPosted:(id)arg1 ;
-(Class)tableViewClass;
-(BOOL)edgeToEdgeCells;
-(BOOL)_isRegularWidth;
-(id)_createGroupIndices:(id)arg1 ;
-(void)migrateSpecifierMetadataFrom:(id)arg1 to:(id)arg2 ;
-(void)setForceSynchronousIconLoadForCreatedCells:(BOOL)arg1 ;
-(id)cachedCellForSpecifier:(id)arg1 ;
-(id)_customViewForSpecifier:(id)arg1 class:(Class)arg2 isHeader:(BOOL)arg3 ;
-(double)_tableView:(id)arg1 heightForCustomInSection:(long long)arg2 isHeader:(BOOL)arg3 ;
-(id)_tableView:(id)arg1 viewForCustomInSection:(long long)arg2 isHeader:(BOOL)arg3 ;
-(void)_scrollToSpecifierWithID:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isEmptyGroup:(unsigned long long)arg1 ;
-(void)_loadBundleControllers;
-(BOOL)shouldSelectResponderOnAppearance;
-(id)findFirstVisibleResponder;
-(void)_performHighlightForSpecifierWithID:(id)arg1 tryAgainIfFailed:(BOOL)arg2 ;
-(void)formSheetViewWillDisappear;
-(void)popupViewWillDisappear;
-(void)returnPressedAtEnd;
-(void)confirmationViewAcceptedForSpecifier:(id)arg1 ;
-(void)confirmationViewCancelledForSpecifier:(id)arg1 ;
-(void)showConfirmationViewForSpecifier:(id)arg1 useAlert:(BOOL)arg2 ;
-(BOOL)performConfirmationActionForSpecifier:(id)arg1 ;
-(BOOL)performConfirmationCancelActionForSpecifier:(id)arg1 ;
-(id)controllerForSpecifier:(id)arg1 ;
-(BOOL)performActionForSpecifier:(id)arg1 ;
-(BOOL)performButtonActionForSpecifier:(id)arg1 ;
-(BOOL)performLoadActionForSpecifier:(id)arg1 ;
-(id)indexPathForSpecifier:(id)arg1 ;
-(void)showConfirmationViewForSpecifier:(id)arg1 ;
-(void)showController:(id)arg1 ;
-(void)setEdgeToEdgeCells:(BOOL)arg1 ;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(BOOL)shouldDeferPushForSpecifierID:(id)arg1 ;
-(void)setPendingURLResourceDictionary:(NSDictionary *)arg1 ;
-(void)setSpecifierIDPendingPush:(NSString *)arg1 ;
-(void)handleURL:(id)arg1 ;
-(void)clearPendingURL;
-(void)setDesiredVerticalContentOffset:(float)arg1 ;
-(void)setDesiredVerticalContentOffsetItemNamed:(id)arg1 ;
-(float)verticalContentOffset;
-(void)highlightSpecifierWithID:(id)arg1 ;
-(BOOL)prepareHandlingURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 animatePush:(BOOL*)arg3 ;
-(void)reloadIconForSpecifierForBundle:(id)arg1 ;
-(double)_getKeyboardIntersectionHeightFromUserInfo:(id)arg1 ;
-(void)_performHighlightForSpecifierWithID:(id)arg1 ;
-(void)performSpecifierUpdates:(id)arg1 ;
-(void)_moveSpecifierAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)prefetchResourcesFor:(id)arg1 ;
-(void)dataSource:(id)arg1 performUpdates:(id)arg2 ;
-(void)invalidateSpecifiersForDataSource:(id)arg1 ;
-(long long)observerType;
-(void)setSpecifiers:(id)arg1 ;
-(void)reloadSpecifierAtIndex:(long long)arg1 ;
-(void)reloadSpecifierID:(id)arg1 ;
-(BOOL)containsSpecifier:(id)arg1 ;
-(long long)numberOfGroups;
-(id)specifierAtIndexPath:(id)arg1 ;
-(id)getGroupSpecifierForSpecifierID:(id)arg1 ;
-(BOOL)getGroup:(long long*)arg1 row:(long long*)arg2 ofSpecifierID:(id)arg3 ;
-(long long)indexForRow:(long long)arg1 inGroup:(long long)arg2 ;
-(NSRange)rangeOfSpecifiersInGroupID:(id)arg1 ;
-(void)insertSpecifier:(id)arg1 atIndex:(long long)arg2 ;
-(void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2 ;
-(void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2 ;
-(void)insertSpecifier:(id)arg1 atEndOfGroup:(long long)arg2 ;
-(void)insertContiguousSpecifiers:(id)arg1 atIndex:(long long)arg2 ;
-(void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2 ;
-(void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2 ;
-(void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(long long)arg2 ;
-(void)addSpecifier:(id)arg1 ;
-(void)addSpecifiersFromArray:(id)arg1 ;
-(void)removeSpecifier:(id)arg1 ;
-(void)removeSpecifierID:(id)arg1 ;
-(void)removeSpecifierAtIndex:(long long)arg1 ;
-(void)removeLastSpecifier;
-(void)removeContiguousSpecifiers:(id)arg1 ;
-(void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2 ;
-(void)updateSpecifiers:(id)arg1 withSpecifiers:(id)arg2 ;
-(id)initForContentSize:(CGSize)arg1 ;
-(void)loseFocus;
-(id)specifierID;
-(id)cachedCellForSpecifierID:(id)arg1 ;
-(void)createPrequeuedPSTableCells:(unsigned long long)arg1 ;
-(void)_scrollToSpecifierNamed:(id)arg1 ;
-(void)showConfirmationViewForSpecifier:(id)arg1 useAlert:(BOOL)arg2 swapAlertButtons:(BOOL)arg3 ;
-(void)lazyLoadBundle:(id)arg1 ;
-(id)controllerForRowAtIndexPath:(id)arg1 ;
-(id)specifiersForIDs:(id)arg1 ;
-(void)dismissPopover;
-(void)pushController:(id)arg1 animate:(BOOL)arg2 ;
-(BOOL)handlePendingURL;
-(void)selectRowForSpecifier:(id)arg1 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(void)_setNotShowingSetupController;
-(id<PSSpecifierDataSource>)specifierDataSource;
-(BOOL)forceSynchronousIconLoadForCreatedCells;
-(NSDictionary *)pendingURLResourceDictionary;
-(NSString *)specifierIDPendingPush;
-(BOOL)prefetchingEnabled;
-(UIColor *)cellHighlightColor;
-(void)setCellHighlightColor:(UIColor *)arg1 ;
-(UIColor *)cellAccessoryColor;
-(void)setCellAccessoryColor:(UIColor *)arg1 ;
-(UIColor *)cellAccessoryHighlightColor;
-(void)setCellAccessoryHighlightColor:(UIColor *)arg1 ;
-(UIColor *)altTextColor;
-(void)setAltTextColor:(UIColor *)arg1 ;
-(UIColor *)buttonTextColor;
-(void)setButtonTextColor:(UIColor *)arg1 ;
-(UIColor *)editableTextColor;
-(void)setEditableTextColor:(UIColor *)arg1 ;
-(UIColor *)editablePlaceholderTextColor;
-(void)setEditablePlaceholderTextColor:(UIColor *)arg1 ;
-(UIColor *)editableInsertionPointColor;
-(void)setEditableInsertionPointColor:(UIColor *)arg1 ;
-(UIColor *)editableSelectionBarColor;
-(void)setEditableSelectionBarColor:(UIColor *)arg1 ;
-(UIColor *)editableSelectionHighlightColor;
-(void)setEditableSelectionHighlightColor:(UIColor *)arg1 ;
-(UIColor *)footerHyperlinkColor;
-(void)setFooterHyperlinkColor:(UIColor *)arg1 ;
-(UIColor *)segmentedSliderTrackColor;
-(void)setSegmentedSliderTrackColor:(UIColor *)arg1 ;
-(void)showPINSheet:(id)arg1 allowOptionsButton:(BOOL)arg2 ;
-(void)showPINSheet:(id)arg1 ;
-(id)popupStylePopoverController;
-(long long)indexOfGroup:(long long)arg1 ;
@end

