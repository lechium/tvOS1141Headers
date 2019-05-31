/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSNumber, NSDate, PLManagedAsset, PLCloudFeedCommentsEntry;

@interface PLCloudSharedComment : PLManagedObject

@property (nonatomic,retain) NSString * cloudGUID; 
@property (nonatomic,retain) NSString * commenterHashedPersonID; 
@property (nonatomic,retain) NSNumber * isDeletable; 
@property (nonatomic,retain) NSNumber * isLike; 
@property (nonatomic,retain) NSNumber * isCaption; 
@property (nonatomic,retain) NSNumber * isBatchComment; 
@property (nonatomic,retain) NSNumber * isMyComment; 
@property (nonatomic,retain) NSString * commentText; 
@property (nonatomic,retain) NSDate * commentDate; 
@property (nonatomic,retain) NSDate * commentClientDate; 
@property (nonatomic,retain) PLManagedAsset * commentedAsset; 
@property (nonatomic,retain) PLManagedAsset * likedAsset; 
@property (nonatomic,retain) PLCloudFeedCommentsEntry * cloudFeedCommentEntry; 
@property (nonatomic,retain) PLCloudFeedCommentsEntry * cloudFeedLikeCommentEntry; 
@property (nonatomic,readonly) BOOL isLikeBoolValue; 
@property (nonatomic,readonly) NSString * commenterEmail; 
@property (nonatomic,readonly) NSString * commenterFirstName; 
@property (nonatomic,readonly) NSString * commenterLastName; 
@property (nonatomic,readonly) NSString * commenterFullName; 
@property (nonatomic,readonly) PLCloudFeedCommentsEntry * cloudFeedEntry; 
@property (nonatomic,retain) NSString * commentType; 
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)insertNewCommentIntoAsset:(id)arg1 commentDate:(id)arg2 withText:(id)arg3 isLike:(BOOL)arg4 isMyComment:(BOOL)arg5 inLibrary:(id)arg6 ;
+(id)cloudSharedCommentWithGUIDs:(id)arg1 inLibrary:(id)arg2 ;
+(id)cloudSharedCommentWithGUID:(id)arg1 inLibrary:(id)arg2 ;
+(id)entityName;
-(id)init;
-(void)dealloc;
-(id)asset;
-(void)awakeFromInsert;
-(void)willSave;
-(void)prepareForDeletion;
-(BOOL)isLikeBoolValue;
-(BOOL)isInterestingForAlbumsSorting;
-(BOOL)shouldNotifyAsBulletinWithMediaStreamInfo:(id)arg1 asCaptionOnly:(BOOL*)arg2 ;
-(id)commenterDisplayName;
-(NSString *)commenterEmail;
-(BOOL)_isInterestingToUser;
-(NSString *)commenterFirstName;
-(NSString *)commenterLastName;
-(NSString *)commenterFullName;
-(PLCloudFeedCommentsEntry *)cloudFeedEntry;
-(BOOL)canBeDeletedByUser;
@end

