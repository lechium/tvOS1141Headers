/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolRuntimePropertyDescriptor : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) BOOL configurable; 
@property (assign,nonatomic) BOOL enumerable; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * value; 
@property (assign,nonatomic) BOOL writable; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * get; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * set; 
@property (assign,nonatomic) BOOL wasThrown; 
@property (assign,nonatomic) BOOL isOwn; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * symbol; 
@property (assign,nonatomic) BOOL nativeGetter; 
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(RWIProtocolRuntimeRemoteObject *)set;
-(void)setValue:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(RWIProtocolRuntimeRemoteObject *)value;
-(RWIProtocolRuntimeRemoteObject *)symbol;
-(void)setSymbol:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(RWIProtocolRuntimeRemoteObject *)get;
-(void)setConfigurable:(BOOL)arg1 ;
-(void)setEnumerable:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 configurable:(BOOL)arg2 enumerable:(BOOL)arg3 ;
-(void)setWritable:(BOOL)arg1 ;
-(void)setGet:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(BOOL)configurable;
-(BOOL)enumerable;
-(void)setWasThrown:(BOOL)arg1 ;
-(BOOL)wasThrown;
-(void)setIsOwn:(BOOL)arg1 ;
-(BOOL)isOwn;
-(void)setNativeGetter:(BOOL)arg1 ;
-(BOOL)nativeGetter;
-(BOOL)writable;
-(void)setSet:(RWIProtocolRuntimeRemoteObject *)arg1 ;
@end

