/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolDebuggerLocation, NSArray, RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolDebuggerCallFrame : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * callFrameId; 
@property (nonatomic,copy) NSString * functionName; 
@property (nonatomic,retain) RWIProtocolDebuggerLocation * location; 
@property (nonatomic,copy) NSArray * scopeChain; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * thisObject; 
@property (assign,nonatomic) BOOL isTailDeleted; 
-(RWIProtocolDebuggerLocation *)location;
-(void)setLocation:(RWIProtocolDebuggerLocation *)arg1 ;
-(void)setScopeChain:(NSArray *)arg1 ;
-(NSArray *)scopeChain;
-(void)setCallFrameId:(NSString *)arg1 ;
-(void)setThisObject:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(void)setIsTailDeleted:(BOOL)arg1 ;
-(id)initWithCallFrameId:(id)arg1 functionName:(id)arg2 location:(id)arg3 scopeChain:(id)arg4 thisObject:(id)arg5 isTailDeleted:(BOOL)arg6 ;
-(NSString *)callFrameId;
-(BOOL)isTailDeleted;
-(void)setFunctionName:(NSString *)arg1 ;
-(NSString *)functionName;
-(RWIProtocolRuntimeRemoteObject *)thisObject;
@end

