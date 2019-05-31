/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFQueryableLibraryAdapter <NSObject>
@required
-(id)countMessagesMatchingQuery:(unsigned long long)arg1 variable:(id)arg2 groupBy:(unsigned long long)arg3;
-(id)mailboxesMatchingQuery:(unsigned long long)arg1 variable:(id)arg2;
-(id)messagesMatchingQuery:(unsigned long long)arg1 variable:(id)arg2 limit:(unsigned long long)arg3;
-(unsigned long long)countMessagesMatchingQuery:(unsigned long long)arg1 variable:(id)arg2;

@end

