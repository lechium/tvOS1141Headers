/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _SCRCStackNode : NSObject {

	id _object;
	_SCRCStackNode* _prev;
	_SCRCStackNode* _next;

}

@property (nonatomic,retain) id object;                          //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) _SCRCStackNode * prev;              //@synthesize prev=_prev - In the implementation block
@property (nonatomic,retain) _SCRCStackNode * next;              //@synthesize next=_next - In the implementation block
-(void)setNext:(_SCRCStackNode *)arg1 ;
-(_SCRCStackNode *)next;
-(id)object;
-(void)setObject:(id)arg1 ;
-(_SCRCStackNode *)prev;
-(void)setPrev:(_SCRCStackNode *)arg1 ;
@end

