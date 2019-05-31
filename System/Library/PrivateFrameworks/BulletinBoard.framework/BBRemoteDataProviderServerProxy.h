/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BBRemoteDataProviderServerProxy <NSObject>
@required
-(void)getSectionInfoWithCompletion:(/*^block*/id)arg1;
-(void)withdrawBulletinWithPublisherBulletinID:(id)arg1;
-(void)reloadSectionParameters:(id)arg1;
-(void)reloadDefaultSectionInfo:(id)arg1;
-(void)getClearedInfoWithCompletion:(/*^block*/id)arg1;
-(void)setClearedInfo:(id)arg1;
-(void)setSectionInfo:(id)arg1;
-(void)invalidateBulletins;
-(void)modifyBulletin:(id)arg1;
-(void)withdrawBulletinsWithRecordID:(id)arg1;
-(void)addBulletin:(id)arg1 forDestinations:(unsigned long long)arg2;

@end

