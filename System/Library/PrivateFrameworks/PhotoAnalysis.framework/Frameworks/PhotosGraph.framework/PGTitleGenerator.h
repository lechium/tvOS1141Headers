/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, PGTitleGeneratorDateMatching, PHAsset, PHAssetCollection, PGTitle, NSLocale;

@interface PGTitleGenerator : NSObject {

	NSSet* _momentNodes;
	PGTitleGeneratorDateMatching* _dateMatching;
	PHAsset* _keyAsset;
	PHAssetCollection* _curatedAssetCollection;
	PHAssetCollection* _assetCollection;
	PGTitle* _title;
	PGTitle* _subtitle;
	NSSet* _usedLocationNodes;
	NSLocale* _locale;

}

@property (nonatomic,readonly) PHAsset * keyAsset;                                       //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * assetCollection;                      //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * curatedAssetCollection;               //@synthesize curatedAssetCollection=_curatedAssetCollection - In the implementation block
@property (nonatomic,readonly) NSSet * momentNodes;                                      //@synthesize momentNodes=_momentNodes - In the implementation block
@property (nonatomic,retain) NSSet * usedLocationNodes;                                  //@synthesize usedLocationNodes=_usedLocationNodes - In the implementation block
@property (nonatomic,readonly) PGTitleGeneratorDateMatching * dateMatching;              //@synthesize dateMatching=_dateMatching - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                          //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) PGTitle * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) PGTitle * subtitle;                                       //@synthesize subtitle=_subtitle - In the implementation block
-(PGTitle *)title;
-(void)setLocale:(NSLocale *)arg1 ;
-(PGTitle *)subtitle;
-(NSLocale *)locale;
-(PHAssetCollection *)assetCollection;
-(PHAsset *)keyAsset;
-(NSSet *)momentNodes;
-(id)initWithMomentNodes:(id)arg1 type:(long long)arg2 ;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)initWithMomentNodes:(id)arg1 referenceDateInterval:(id)arg2 keyAsset:(id)arg3 curatedAssetCollection:(id)arg4 assetCollection:(id)arg5 type:(long long)arg6 ;
-(BOOL)_useSplitTimeTitlesIfNeeded;
-(void)setUsedLocationNodes:(NSSet *)arg1 ;
-(PGTitleGeneratorDateMatching *)dateMatching;
-(NSSet *)usedLocationNodes;
-(BOOL)_triggerDefaultTitleGenerationIfNil;
-(PHAssetCollection *)curatedAssetCollection;
-(id)initWithMomentNode:(id)arg1 type:(long long)arg2 ;
-(id)initWithMomentNode:(id)arg1 referenceDateInterval:(id)arg2 keyAsset:(id)arg3 curatedAssetCollection:(id)arg4 assetCollection:(id)arg5 type:(long long)arg6 ;
-(void)_generateTitleAndSubtitle;
-(id)_defaultLocationTitle;
-(id)_defaultTimeTitle;
-(id)_splitTimeTitles;
-(id)_defaultTitle;
-(id)_addressNodeFromKeyAsset;
-(id)_addressNodesFromCuratedAssetCollection;
@end

