/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface _LSConcurrentQueuesList : NSObject {

	NSMutableArray* _identifiers;
	NSMutableArray* _queues;

}
-(id)getQueueAndIndexForIdentifier:(id)arg1 outIndex:(unsigned long long*)arg2 ;
-(void)addIdentifier:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)removeIdentifier:(id)arg1 fromIndex:(unsigned long long)arg2 ;
-(id)initWithWidth:(long long)arg1 ;
@end
