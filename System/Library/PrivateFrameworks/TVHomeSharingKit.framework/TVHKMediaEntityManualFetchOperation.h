/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKMediaEntityFetchOperation.h>

@interface TVHKMediaEntityManualFetchOperation : TVHKMediaEntityFetchOperation {

	/*^block*/id _fetchMediaEntitiesBlock;

}

@property (nonatomic,copy) id fetchMediaEntitiesBlock;              //@synthesize fetchMediaEntitiesBlock=_fetchMediaEntitiesBlock - In the implementation block
-(void)executionDidBegin;
-(void)setFetchMediaEntitiesBlock:(id)arg1 ;
-(void)_processPredicate;
-(void)_fetchMediaEntities;
-(void)_completeFetchWithMediaEntities:(id)arg1 error:(id)arg2 ;
-(id)fetchMediaEntitiesBlock;
-(id)_mediaEntityFetchResponseWithMediaEntities:(id)arg1 ;
-(BOOL)_shouldGenerateSortHeaders;
-(id)_sortHeadersForMediaEntities:(id)arg1 ;
@end

