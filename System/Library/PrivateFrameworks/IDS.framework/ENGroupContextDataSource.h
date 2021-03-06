/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ENGroupContextDataSource <NSObject>
@required
-(void)participantsForCypher:(id)arg1 completion:(/*^block*/id)arg2;
-(void)validateCachedGroup:(id)arg1 isParentOfGroup:(id)arg2 completion:(/*^block*/id)arg3;
-(void)groupContext:(id)arg1 upsertGroupWithInfo:(id)arg2 previousGroup:(id)arg3 completion:(/*^block*/id)arg4;
-(void)groupContext:(id)arg1 fetchGroupWithID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)publicDataRepresentationForGroup:(id)arg1 inContext:(id)arg2 completion:(/*^block*/id)arg3;
-(void)groupFromPublicDataRepresentation:(id)arg1 inContext:(id)arg2 completion:(/*^block*/id)arg3;

@end

