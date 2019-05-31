/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface NSStream : NSObject

@property (assign) id<NSStreamDelegate> delegate; 
@property (readonly) unsigned long long streamStatus; 
@property (copy,readonly) NSError * streamError; 
+(void)getBoundStreamsWithBufferSize:(unsigned long long)arg1 inputStream:(id*)arg2 outputStream:(id*)arg3 ;
+(void)getStreamsToHostWithName:(id)arg1 port:(long long)arg2 inputStream:(id*)arg3 outputStream:(id*)arg4 ;
+(void)getStreamsToHost:(id)arg1 port:(long long)arg2 inputStream:(id*)arg3 outputStream:(id*)arg4 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(unsigned long long)streamStatus;
-(NSError *)streamError;
-(id<NSStreamDelegate>)delegate;
-(void)setDelegate:(id<NSStreamDelegate>)arg1 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)close;
-(void)open;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
@end
