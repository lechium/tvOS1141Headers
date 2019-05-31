/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OKPresentationLookupDelegate;
#import <OpusKit/OpusKit-Structs.h>
@class NSMutableArray, OKPresentationInfo, NSMutableDictionary, NSMutableString, OFLRUCache, OKDocument, OKResourcesDiskCacheManager;

@interface OKPresentation : NSObject {

	NSMutableArray* _producerPlugins;
	OKPresentationInfo* _info;
	NSMutableDictionary* _pageTemplates;
	NSMutableDictionary* _widgetTemplates;
	NSMutableDictionary* _materialTemplates;
	NSMutableDictionary* _pages;
	NSMutableDictionary* _navigators;
	NSMutableDictionary* _couches;
	NSMutableDictionary* _feeders;
	BOOL _haveTemplatesChanged;
	BOOL _havePagesChanged;
	BOOL _haveNavigatorsChanged;
	BOOL _haveCouchesChanged;
	BOOL _haveFeedersChanged;
	NSMutableDictionary* _guidelines;
	BOOL _haveGuidelinesChanged;
	NSMutableString* _mainScript;
	BOOL _haveScriptsChanged;
	OFLRUCache* _feedersMemoryCache;
	OFLRUCache* _mediaItemsMemoryCache;
	OFLRUCache* _metadataMemoryCache;
	OFLRUCache* _lowThumbnailsMemoryCache;
	OFLRUCache* _intermediate1ThumbnailsMemoryCache;
	OFLRUCache* _intermediate2ThumbnailsMemoryCache;
	BOOL _canBeEdited;
	id<OKPresentationLookupDelegate> _lookupDelegate;
	BOOL _enableDisplayDebugging;
	OKDocument* _document;
	OKResourcesDiskCacheManager* _temporaryDiskCacheManager;

}

@property (assign,nonatomic) OKDocument * document;                                        //@synthesize document=_document - In the implementation block
@property (assign) BOOL canBeEdited;                                                       //@synthesize canBeEdited=_canBeEdited - In the implementation block
@property (readonly) BOOL haveTemplatesChanged;                                            //@synthesize haveTemplatesChanged=_haveTemplatesChanged - In the implementation block
@property (readonly) BOOL havePagesChanged;                                                //@synthesize havePagesChanged=_havePagesChanged - In the implementation block
@property (readonly) BOOL haveNavigatorsChanged;                                           //@synthesize haveNavigatorsChanged=_haveNavigatorsChanged - In the implementation block
@property (readonly) BOOL haveCouchesChanged;                                              //@synthesize haveCouchesChanged=_haveCouchesChanged - In the implementation block
@property (readonly) BOOL haveGuidelinesChanged;                                           //@synthesize haveGuidelinesChanged=_haveGuidelinesChanged - In the implementation block
@property (readonly) BOOL haveFeedersChanged;                                              //@synthesize haveFeedersChanged=_haveFeedersChanged - In the implementation block
@property (readonly) BOOL haveScriptsChanged;                                              //@synthesize haveScriptsChanged=_haveScriptsChanged - In the implementation block
@property (assign) BOOL enableDisplayDebugging;                                            //@synthesize enableDisplayDebugging=_enableDisplayDebugging - In the implementation block
@property (retain,readonly) OKPresentationInfo * info;                                     //@synthesize info=_info - In the implementation block
@property (assign,nonatomic) id<OKPresentationLookupDelegate> lookupDelegate;              //@synthesize lookupDelegate=_lookupDelegate - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_commonInit;
-(BOOL)canBeEdited;
-(OKPresentationInfo *)info;
-(OKDocument *)document;
-(void)addPage:(id)arg1 ;
-(void)setDocument:(OKDocument *)arg1 ;
-(void)_willTerminateNotification:(id)arg1 ;
-(id)mediaItemForURL:(id)arg1 ;
-(void)_didReceiveMemoryWarningNotification:(id)arg1 ;
-(void)_didEnterBackgroundNotification:(id)arg1 ;
-(void)_willEnterForegroundNotification:(id)arg1 ;
-(void)setCanBeEdited:(BOOL)arg1 ;
-(void)reloadTemplatesFromDictionary:(id)arg1 ;
-(void)reloadPagesFromDictionary:(id)arg1 ;
-(void)reloadNavigatorsFromDictionary:(id)arg1 ;
-(void)reloadCouchesFromDictionary:(id)arg1 ;
-(void)reloadGuidelinesFromArray:(id)arg1 ;
-(void)reloadFeedersFromDictionary:(id)arg1 ;
-(void)addMainScript:(id)arg1 extend:(BOOL)arg2 ;
-(void)resolveIfNeeded;
-(BOOL)haveTemplatesChanged;
-(id)templatesDictionary;
-(BOOL)havePagesChanged;
-(id)pagesDictionary;
-(BOOL)haveNavigatorsChanged;
-(id)navigatorsDictionary;
-(BOOL)haveCouchesChanged;
-(id)couchesDictionary;
-(BOOL)haveGuidelinesChanged;
-(id)guidelinesDictionary;
-(BOOL)haveFeedersChanged;
-(id)feedersDictionary;
-(BOOL)haveScriptsChanged;
-(id)mainScript;
-(void)setPresentationChanged:(BOOL)arg1 ;
-(id)couchWithName:(id)arg1 ;
-(id)canvasForKeyPath:(id)arg1 ;
-(id)pageWithName:(id)arg1 ;
-(id)pagesNames;
-(id)pageTemplateWithName:(id)arg1 ;
-(id)navigatorWithName:(id)arg1 ;
-(id)widgetTemplateWithName:(id)arg1 ;
-(void)_invalidateMemoryCachedMediaItem:(id)arg1 ;
-(id)_temporaryDiskCacheManager;
-(id)metadataInMemoryForMediaItem:(id)arg1 ;
-(void)setMetadataToMemory:(id)arg1 forMediaItem:(id)arg2 ;
-(void)invalidateMetadataMemoryCacheForMediaItem:(id)arg1 ;
-(id)thumbnailImageInMemoryCacheForMediaItem:(id)arg1 andResolution:(unsigned long long)arg2 ;
-(void)setThumbnailImageToMemoryCache:(id)arg1 forMediaItem:(id)arg2 andResolution:(unsigned long long)arg3 ;
-(void)invalidateThumbnailsMemoryCacheForMediaItem:(id)arg1 ;
-(BOOL)enableDisplayDebugging;
-(void)setLookupDelegate:(id<OKPresentationLookupDelegate>)arg1 ;
-(void)setRootMediaFeeder:(id)arg1 ;
-(void)addGuidelines:(id)arg1 ;
-(BOOL)guidelineLiveAuthoringEnabled;
-(void)addGuideline:(id)arg1 ;
-(id)rootMediaFeeder;
-(id)guidelineAuthoringUserMediaItems;
-(id)mediaItemsForURLs:(id)arg1 ;
-(id)allGuidelines;
-(void)removeAllGuidelines;
-(BOOL)registerProducerPlugin:(id)arg1 ;
-(void)removeAllFeeders;
-(void)removeAllTemplates;
-(void)removeAllNavigators;
-(void)removeAllPages;
-(void)removeAllCouches;
-(void)removeMainScript;
-(id)guidelineAuthoringProducerMediaItems;
-(void)guidelineAuthoringMediaAttributesUpdateForKey:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
-(void)removeGuidelineForGlobalUniqueKey:(id)arg1 ;
-(id)materialTemplateWithName:(id)arg1 ;
-(void)setGuidelines:(id)arg1 ;
-(CGSize)bestResolutionSizeForDisplaySize:(CGSize)arg1 keepAspectRatio:(BOOL*)arg2 ;
-(id)guidelineForGlobalUniqueKey:(id)arg1 ;
-(id)rootCouch;
-(id)navigatorsNames;
-(id)guidelineAuthoringSynopsis;
-(id)mediaFeederWithName:(id)arg1 ;
-(id)feederWithName:(id)arg1 ;
-(void)setMediaFeeder:(id)arg1 withName:(id)arg2 ;
-(void)addFeeder:(id)arg1 ;
-(id<OKPresentationLookupDelegate>)lookupDelegate;
-(void)removeAllPageTemplates;
-(void)removeAllWidgetTemplates;
-(void)removeAllMaterialTemplates;
-(id)rootNavigator;
-(id)trailerNavigator;
-(id)trailerCouch;
-(id)guidelineAuthoringUserMediaURLs;
-(id)guidelineAuthoringProducerMediaURLs;
-(id)guidelineAuthoringUserAudioURLs;
-(id)registeredProducerPluginWithIdentifier:(id)arg1 ;
-(id)feedersNames;
-(id)rootFeeder;
-(void)removeFeederWithName:(id)arg1 ;
-(id)pageTemplatesNames;
-(void)addPageTemplate:(id)arg1 ;
-(void)removePageTemplateWithName:(id)arg1 ;
-(id)widgetTemplatesNames;
-(void)addWidgetTemplate:(id)arg1 ;
-(void)removeWidgetTemplateWithName:(id)arg1 ;
-(id)materialTemplatesNames;
-(void)addMaterialTemplate:(id)arg1 ;
-(void)removeMaterialTemplateWithName:(id)arg1 ;
-(void)removePageWithName:(id)arg1 ;
-(void)addNavigator:(id)arg1 ;
-(void)removeNavigatorWithName:(id)arg1 ;
-(id)couchesNames;
-(void)addCouch:(id)arg1 ;
-(void)removeCouchWithName:(id)arg1 ;
-(void)removeGuideline:(id)arg1 ;
-(void)removeGuidelines:(id)arg1 ;
-(id)guidelineValueForGlobalUniqueKey:(id)arg1 ;
-(id)guidelinesForType:(unsigned long long)arg1 ;
-(id)guidelinesForKey:(id)arg1 ;
-(id)guidelinesForMediaItem:(id)arg1 ;
-(id)guidelinesForMediaItem:(id)arg1 andKey:(id)arg2 ;
-(id)guidelinesForPresentationCanvas:(id)arg1 ;
-(id)guidelinesForPresentationCanvas:(id)arg1 andKey:(id)arg2 ;
-(id)guidelinesForProducerPlugin:(id)arg1 ;
-(id)allGuidelineGlobalUniqueKeys;
-(id)guidelineAuthoringUserAudioItems;
-(unsigned long long)guidelineAuthoringRandomSeed;
-(id)guidelineAuthoringTitle;
-(id)guidelineAuthoringAttributedTitle;
-(id)guidelineAuthoringTransitionSettings;
-(id)guidelineAuthoringInteractiveTransitionSettings;
-(id)guidelineAuthoringMediaAttributes;
-(id)guidelineAuthoringMediaAttributesForKey:(id)arg1 ;
-(double)guidelineAuthoringPageDuration;
-(double)guidelineAuthoringDurationFactor;
-(double)guidelineAuthoringCurrentPageDuration;
-(double)guidelineAuthoringTotalDuration;
-(double)guidelineAuthoringMinimumDuration;
-(double)guidelineAuthoringMaximumDuration;
-(BOOL)guidelineAuthoringFitToAudioDuration;
-(id)guidelineAuthoringRecommendedResolutionSizes;
-(BOOL)guidelineAuthoringDebuggingEnabled;
-(void)setEnableDisplayDebugging:(BOOL)arg1 ;
@end

