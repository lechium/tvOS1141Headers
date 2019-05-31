/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMCore/IMCore-Structs.h>
@interface IMItemsController : NSObject {

	CFArrayRef _items;
	unsigned long long _capacity;

}

@property (assign,nonatomic) unsigned long long capacity;              //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) BOOL isMoreToLoad; 
+(id)_charactersToIgnoreWhenParsingTextContent;
-(void)_removeAllItems;
-(id)init;
-(void)dealloc;
-(unsigned long long)capacity;
-(void)setCapacity:(unsigned long long)arg1 ;
-(id)_items;
-(void)_removeItem:(id)arg1 ;
-(id)_initWithItems:(id)arg1 ;
-(BOOL)_trimIfNeeded;
-(void)_itemsDidChange:(id)arg1 ;
-(void)assignSortIDsToItems:(id)arg1 ;
-(void)_replaceStaleTypingMessage;
-(id)_lastIncomingFinishedMessageWithTextContent;
-(BOOL)isMoreToLoad;
-(void)_handleItem:(id)arg1 ;
-(void)_replaceItems:(id)arg1 ;
-(void)_setSortID:(id)arg1 ;
-(unsigned long long)_indexOfItem:(id)arg1 ;
-(id)_member:(id)arg1 ;
-(id)_itemForGUID:(id)arg1 ;
-(id)_typingMessage;
-(id)_firstMessage;
-(id)_lastMessage;
-(id)_lastSentMessage;
-(id)_lastFinishedMessage;
-(id)_lastIncomingMessage;
-(id)_lastIncomingFinishedMessage;
-(id)_lastRelatedIncomingFinishedMessageTextContentWithLimit:(long long)arg1 ;
@end
