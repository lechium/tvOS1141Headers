/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolConsoleChannel : RWIProtocolJSONObject

@property (assign,nonatomic) long long source; 
@property (assign,nonatomic) long long level; 
-(void)setSource:(long long)arg1 ;
-(void)setLevel:(long long)arg1 ;
-(long long)level;
-(long long)source;
-(id)initWithSource:(long long)arg1 level:(long long)arg2 ;
@end

