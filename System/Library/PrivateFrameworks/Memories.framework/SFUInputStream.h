/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFUInputStream <NSObject>
@required
-(void)close;
-(long long)offset;
-(BOOL)canSeek;
-(void)seekToOffset:(long long)arg1;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;

@end

