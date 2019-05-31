/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSProgressSubscriber <NSObject>
@required
-(oneway void)removePublisherForID:(id)arg1;
-(oneway void)addPublisher:(id)arg1 forID:(id)arg2 withValues:(id)arg3 isOld:(BOOL)arg4;
-(oneway void)observePublisherForID:(id)arg1 values:(id)arg2 forKeys:(id)arg3;
-(oneway void)observePublisherUserInfoForID:(id)arg1 value:(id)arg2 forKey:(id)arg3;

@end

