/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AceObject, NSString, NSIndexPath;

@interface AFConversationInsertion : NSObject {

	long long _conversationItemType;
	AceObject* _aceObject;
	NSString* _aceCommandIdentifier;
	NSIndexPath* _indexPath;

}

@property (nonatomic,readonly) long long conversationItemType;                    //@synthesize conversationItemType=_conversationItemType - In the implementation block
@property (nonatomic,readonly) AceObject * aceObject;                             //@synthesize aceObject=_aceObject - In the implementation block
@property (nonatomic,copy,readonly) NSString * aceCommandIdentifier;              //@synthesize aceCommandIdentifier=_aceCommandIdentifier - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                           //@synthesize indexPath=_indexPath - In the implementation block
-(NSIndexPath *)indexPath;
-(AceObject *)aceObject;
-(NSString *)aceCommandIdentifier;
-(long long)conversationItemType;
-(id)initWithConversationItemType:(long long)arg1 aceObject:(id)arg2 aceCommandIdentifier:(id)arg3 indexPath:(id)arg4 ;
@end

