/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMDoubleLinkedListNode : NSObject {

	IMDoubleLinkedListNode* _prev;
	IMDoubleLinkedListNode* _next;
	id _object;

}

@property (retain) IMDoubleLinkedListNode * prev;              //@synthesize prev=_prev - In the implementation block
@property (retain) IMDoubleLinkedListNode * next;              //@synthesize next=_next - In the implementation block
@property (retain) id object;                                  //@synthesize object=_object - In the implementation block
-(void)setNext:(IMDoubleLinkedListNode *)arg1 ;
-(IMDoubleLinkedListNode *)next;
-(void)dealloc;
-(id)object;
-(void)setObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(void)orphan;
-(IMDoubleLinkedListNode *)prev;
-(void)setPrev:(IMDoubleLinkedListNode *)arg1 ;
-(void)removeFromList;
@end

