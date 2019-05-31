/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPLibraryKeepLocalStatusObserverConfiguration.h>

@class NSArray;

@interface MPLibraryKeepLocalStatusObserverDetailedContainerConfiguration : MPLibraryKeepLocalStatusObserverConfiguration {

	NSArray* _pendingItemIdentifiers;
	long long _downloadEnabledItemCount;
	long long _nonPurgeableItemCount;
	long long _redownloadableItemCount;

}

@property (nonatomic,copy) NSArray * pendingItemIdentifiers;                  //@synthesize pendingItemIdentifiers=_pendingItemIdentifiers - In the implementation block
@property (assign,nonatomic) long long downloadEnabledItemCount;              //@synthesize downloadEnabledItemCount=_downloadEnabledItemCount - In the implementation block
@property (assign,nonatomic) long long nonPurgeableItemCount;                 //@synthesize nonPurgeableItemCount=_nonPurgeableItemCount - In the implementation block
@property (assign,nonatomic) long long redownloadableItemCount;               //@synthesize redownloadableItemCount=_redownloadableItemCount - In the implementation block
-(void)setRedownloadableItemCount:(long long)arg1 ;
-(void)setDownloadEnabledItemCount:(long long)arg1 ;
-(void)setNonPurgeableItemCount:(long long)arg1 ;
-(void)setPendingItemIdentifiers:(NSArray *)arg1 ;
-(long long)redownloadableItemCount;
-(long long)nonPurgeableItemCount;
-(long long)downloadEnabledItemCount;
-(NSArray *)pendingItemIdentifiers;
@end

