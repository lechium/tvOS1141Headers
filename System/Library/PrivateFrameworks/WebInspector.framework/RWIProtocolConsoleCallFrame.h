/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolConsoleCallFrame : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * functionName; 
@property (nonatomic,copy) NSString * url; 
@property (nonatomic,copy) NSString * scriptId; 
@property (assign,nonatomic) int lineNumber; 
@property (assign,nonatomic) int columnNumber; 
-(int)columnNumber;
-(void)setLineNumber:(int)arg1 ;
-(int)lineNumber;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(void)setScriptId:(NSString *)arg1 ;
-(void)setColumnNumber:(int)arg1 ;
-(id)initWithFunctionName:(id)arg1 url:(id)arg2 scriptId:(id)arg3 lineNumber:(int)arg4 columnNumber:(int)arg5 ;
-(NSString *)scriptId;
-(void)setFunctionName:(NSString *)arg1 ;
-(NSString *)functionName;
@end
