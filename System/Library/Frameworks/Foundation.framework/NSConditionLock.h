/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@class NSString;

@interface NSConditionLock : NSObject <NSLocking> {

	void* _priv;

}

@property (readonly) long long condition; 
@property (copy) NSString * name; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(BOOL)lockBeforeDate:(id)arg1 ;
-(BOOL)tryLock;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)lock;
-(void)unlock;
-(long long)condition;
-(id)initWithCondition:(long long)arg1 ;
-(BOOL)lockWhenCondition:(long long)arg1 beforeDate:(id)arg2 ;
-(BOOL)tryLockWhenCondition:(long long)arg1 ;
-(void)unlockWithCondition:(long long)arg1 ;
-(void)lockWhenCondition:(long long)arg1 ;
@end

