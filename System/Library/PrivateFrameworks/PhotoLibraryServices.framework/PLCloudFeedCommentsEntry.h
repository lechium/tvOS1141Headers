/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudFeedEntry.h>

@class NSString, NSOrderedSet, NSMutableOrderedSet;

@interface PLCloudFeedCommentsEntry : PLCloudFeedEntry

@property (nonatomic,retain) NSString * entryCloudAssetGUID; 
@property (nonatomic,retain) NSOrderedSet * entryLikeComments; 
@property (nonatomic,retain) NSOrderedSet * entryComments; 
@property (nonatomic,readonly) NSMutableOrderedSet * mutableEntryLikeComments; 
@property (nonatomic,readonly) NSMutableOrderedSet * mutableEntryComments; 
+(id)entityName;
-(BOOL)shouldBeRemovedFromPhotoLibrary:(id)arg1 ;
-(NSMutableOrderedSet *)mutableEntryLikeComments;
-(NSMutableOrderedSet *)mutableEntryComments;
@end

