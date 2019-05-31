/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVPhotoSources.framework/TVPhotoSources
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, TVPhotoSourceAppProvider;

@interface TVPhotoSourceManager : NSObject {

	NSArray* _photoSources;
	id _sourceMatchingContext;
	TVPhotoSourceAppProvider* _appProviderPhotoSource;

}

@property (nonatomic,copy,readonly) NSArray * photoSources; 
+(id)defaultManager;
-(void)setupPhotoSources;
-(NSArray *)photoSources;
-(void)_fetchPhotoCollections:(/*^block*/id)arg1 ;
-(id)_photoSourcesFromExtensions:(id)arg1 ;
-(id)_photoSourcesFromAppProviders;
-(void)_updatePhotoSources:(id)arg1 ;
-(void)fetchPhotoCollectionsInfoWithCompletion:(/*^block*/id)arg1 ;
@end
