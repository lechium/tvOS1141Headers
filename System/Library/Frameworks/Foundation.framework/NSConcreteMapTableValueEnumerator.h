/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSConcreteMapTable;

@interface NSConcreteMapTableValueEnumerator : NSEnumerator {

	NSConcreteMapTable* mapTable;
	unsigned long long counter;

}
+(id)enumeratorWithMapTable:(id)arg1 ;
-(void)dealloc;
-(id)nextObject;
@end

