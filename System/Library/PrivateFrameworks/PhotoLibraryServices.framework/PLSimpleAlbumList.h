/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLAssetContainerList.h>

@class NSOrderedSet, NSString;

@interface PLSimpleAlbumList : NSObject <PLAssetContainerList> {

	NSOrderedSet* _containers;

}

@property (nonatomic,retain) NSOrderedSet * containers;                         //@synthesize containers=_containers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long containersCount; 
-(void)dealloc;
-(BOOL)isEmpty;
-(id)managedObjectContext;
-(id)initWithAssetContainers:(id)arg1 ;
-(NSOrderedSet *)containers;
-(BOOL)canEditContainers;
-(id)containersRelationshipName;
-(unsigned long long)containersCount;
-(id)initWithAssetContainer:(id)arg1 ;
-(void)setContainers:(NSOrderedSet *)arg1 ;
-(id)photoLibrary;
@end

