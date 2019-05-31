/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMCloudKitSyncStatistics : NSObject {

	unsigned long long _syncedChatCount;
	unsigned long long _totalChatCount;
	unsigned long long _syncedAttachmentCount;
	unsigned long long _totalAttachmentCount;
	unsigned long long _syncedMessageCount;
	unsigned long long _totalMessageCount;
	unsigned long long _totalRecordCount;
	unsigned long long _syncedRecordCount;

}

@property (assign,nonatomic) unsigned long long syncedChatCount;                    //@synthesize syncedChatCount=_syncedChatCount - In the implementation block
@property (assign,nonatomic) unsigned long long totalChatCount;                     //@synthesize totalChatCount=_totalChatCount - In the implementation block
@property (assign,nonatomic) unsigned long long syncedAttachmentCount;              //@synthesize syncedAttachmentCount=_syncedAttachmentCount - In the implementation block
@property (assign,nonatomic) unsigned long long totalAttachmentCount;               //@synthesize totalAttachmentCount=_totalAttachmentCount - In the implementation block
@property (assign,nonatomic) unsigned long long syncedMessageCount;                 //@synthesize syncedMessageCount=_syncedMessageCount - In the implementation block
@property (assign,nonatomic) unsigned long long totalMessageCount;                  //@synthesize totalMessageCount=_totalMessageCount - In the implementation block
@property (assign,nonatomic) unsigned long long totalRecordCount;                   //@synthesize totalRecordCount=_totalRecordCount - In the implementation block
@property (assign,nonatomic) unsigned long long syncedRecordCount;                  //@synthesize syncedRecordCount=_syncedRecordCount - In the implementation block
@property (nonatomic,readonly) double percentSynced; 
+(double)calculatePercentageOfTotal:(double)arg1 count:(double)arg2 ;
+(id)percentStringFromDouble:(double)arg1 ;
+(id)percentStringFromTotal:(double)arg1 count:(double)arg2 ;
+(id)_createSyncStatisticsDictionary:(long long)arg1 messageSyncCount:(long long)arg2 chatCount:(long long)arg3 chatSyncCount:(long long)arg4 attachmentCount:(long long)arg5 attachmentSyncCount:(long long)arg6 ;
+(id)_createSyncStatisticsDictionaryForSyncControllerSyncState:(unsigned long long)arg1 syncType:(long long)arg2 count:(double)arg3 max:(double)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setTotalChatCount:(unsigned long long)arg1 ;
-(void)setSyncedChatCount:(unsigned long long)arg1 ;
-(void)setTotalMessageCount:(unsigned long long)arg1 ;
-(void)setSyncedMessageCount:(unsigned long long)arg1 ;
-(void)setTotalAttachmentCount:(unsigned long long)arg1 ;
-(void)setSyncedAttachmentCount:(unsigned long long)arg1 ;
-(void)setTotalRecordCount:(unsigned long long)arg1 ;
-(void)setSyncedRecordCount:(unsigned long long)arg1 ;
-(unsigned long long)totalRecordCount;
-(unsigned long long)syncedRecordCount;
-(double)percentSynced;
-(id)_statsString:(id)arg1 count:(long long)arg2 total:(long long)arg3 ;
-(unsigned long long)syncedChatCount;
-(unsigned long long)totalChatCount;
-(unsigned long long)syncedMessageCount;
-(unsigned long long)totalMessageCount;
-(unsigned long long)syncedAttachmentCount;
-(unsigned long long)totalAttachmentCount;
-(id)initWithStatisticsDictionary:(id)arg1 ;
-(id)_syncStatisticsDictionary;
@end

