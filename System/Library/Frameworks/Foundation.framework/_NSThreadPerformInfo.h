/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSCondition;

@interface _NSThreadPerformInfo : NSObject {

	id target;
	SEL selector;
	id argument;
	NSMutableArray* modes;
	NSCondition* waiter;
	char* signalled;

}
-(void)dealloc;
@end

