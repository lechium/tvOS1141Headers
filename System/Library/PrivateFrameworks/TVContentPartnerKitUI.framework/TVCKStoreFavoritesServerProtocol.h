/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVCKStoreFavoritesServerProtocol <NSObject>
@required
-(void)fetchStatusOfItemInContentCategory:(unsigned long long)arg1 withAdamID:(id)arg2 replyHandler:(/*^block*/id)arg3;
-(void)fetchCountOfItemsInCategory:(unsigned long long)arg1 withReplyHandler:(/*^block*/id)arg2;
-(void)fetchItemsInCategory:(unsigned long long)arg1 withReplyHandler:(/*^block*/id)arg2;
-(void)fetchInfoForShowsWithAdamIDs:(id)arg1 withReplyHandler:(/*^block*/id)arg2;
-(void)endMonitoringForChanges;
-(void)beginMonitoringForChanges;
-(void)moveItemInCategory:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
-(void)addItemWithAdamID:(id)arg1;
-(void)removeItemWithAdamID:(id)arg1;
-(void)removeAllItemsInCategory:(unsigned long long)arg1;
-(void)fetchLightWeightItemsInCategory:(unsigned long long)arg1 withReplyHandler:(/*^block*/id)arg2;

@end

