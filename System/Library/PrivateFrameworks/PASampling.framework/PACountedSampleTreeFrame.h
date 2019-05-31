/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PACountedSampleFrame.h>

@class NSString, NSMutableSet;

@interface PACountedSampleTreeFrame : PACountedSampleFrame {

	unsigned long long _state;
	NSString* _waitInfoString;
	NSMutableSet* _children;

}

@property (__weak,readonly) NSMutableSet * children; 
@property (readonly) BOOL isLeafFrame; 
@property (assign) unsigned long long state;                      //@synthesize state=_state - In the implementation block
@property (retain) NSString * waitInfoString;                     //@synthesize waitInfoString=_waitInfoString - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSMutableSet *)children;
-(NSString *)waitInfoString;
-(id)initWithSampleFrame:(id)arg1 andState:(unsigned long long)arg2 andWaitInfoString:(id)arg3 ;
-(BOOL)isLeafFrame;
-(void)setWaitInfoString:(NSString *)arg1 ;
@end
