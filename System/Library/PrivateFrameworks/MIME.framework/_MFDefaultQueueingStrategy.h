/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFQueueingStrategy.h>

@class NSString;

@interface _MFDefaultQueueingStrategy : NSObject <MFQueueingStrategy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * descriptionType; 
-(void)enqueueObject:(id)arg1 buffer:(id)arg2 ;
-(NSString *)descriptionType;
-(void)dequeueObject:(id)arg1 buffer:(id)arg2 ;
@end

