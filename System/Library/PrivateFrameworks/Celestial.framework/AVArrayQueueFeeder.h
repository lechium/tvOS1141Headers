/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/AVQueueFeeder.h>

@class NSMutableArray;

@interface AVArrayQueueFeeder : AVQueueFeeder {

	NSMutableArray* _items;

}
-(unsigned long long)numberOfPaths;
-(void)shuffleWithCurrentIndex:(unsigned)arg1 ;
-(id)init;
-(void)dealloc;
-(void)insertObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)initWithArray:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
-(unsigned long long)itemCount;
-(id)pathAtIndex:(unsigned long long)arg1 ;
-(id)itemForIndex:(unsigned long long)arg1 ;
@end
