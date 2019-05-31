/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AFConversationStore : NSObject {

	NSMutableDictionary* _conversationsByIdentifier;

}

@property (getter=_conversationsByIdentifier,nonatomic,readonly) NSMutableDictionary * conversationsByIdentifier;              //@synthesize conversationsByIdentifier=_conversationsByIdentifier - In the implementation block
-(id)init;
-(id)_conversationsByIdentifier;
-(void)_registerConversation:(id)arg1 withIdentifier:(id)arg2 ;
-(BOOL)removeConversationWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveConversation:(id)arg1 identifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)getConversation:(id*)arg1 withIdentifier:(id)arg2 error:(id*)arg3 ;
@end
