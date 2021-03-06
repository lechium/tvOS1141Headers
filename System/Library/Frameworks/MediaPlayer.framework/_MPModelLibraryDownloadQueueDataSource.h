/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPModelLazySectionedCollectionDataSource.h>

@class MPModelLibraryDownloadQueueRequest, MPMediaLibraryEntityTranslator, MPMediaLibraryEntityTranslationContext, NSString;

@interface _MPModelLibraryDownloadQueueDataSource : NSObject <MPModelLazySectionedCollectionDataSource> {

	MPModelLibraryDownloadQueueRequest* _request;
	MPMediaLibraryEntityTranslator* _entityTranslator;
	MPMediaLibraryEntityTranslationContext* _entityTranslationContext;
	shared_ptr<mlcore::EntityQueryResult>* _entityQueryResult;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSections;
-(id)initWithRequest:(id)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)identifiersForItemAtIndexPath:(id)arg1 ;
@end

