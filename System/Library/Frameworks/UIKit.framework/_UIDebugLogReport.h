/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface _UIDebugLogReport : NSObject {

	unsigned long long _currentIndentLevel;
	/*^block*/id _fallbackMessagePrefixHandler;
	NSMutableArray* _statements;
	NSMutableArray* _prefixStack;

}

@property (getter=_statements,nonatomic,retain) NSMutableArray * statements;                //@synthesize statements=_statements - In the implementation block
@property (getter=_prefixStack,nonatomic,retain) NSMutableArray * prefixStack;              //@synthesize prefixStack=_prefixStack - In the implementation block
@property (nonatomic,readonly) unsigned long long messageCount; 
@property (assign,nonatomic) unsigned long long currentIndentLevel;                         //@synthesize currentIndentLevel=_currentIndentLevel - In the implementation block
@property (nonatomic,copy) id fallbackMessagePrefixHandler;                                 //@synthesize fallbackMessagePrefixHandler=_fallbackMessagePrefixHandler - In the implementation block
-(id)init;
-(void)incrementIndentLevelAndPushMessagePrefix:(id)arg1 ;
-(void)addMessageWithFormat:(id)arg1 ;
-(void)addMessage:(id)arg1 ;
-(void)decrementIndentLevelAndPopMessagePrefix;
-(void)pushMessagePrefix:(id)arg1 ;
-(void)popMessagePrefix;
-(void)incrementIndentLevel;
-(void)decrementIndentLevel;
-(void)addLineBreak;
-(void)resetIndentLevel;
-(unsigned long long)messageCount;
-(id)_statements;
-(unsigned long long)currentIndentLevel;
-(id)_messagePrefixAtIndentLevel:(unsigned long long)arg1 ;
-(void)setCurrentIndentLevel:(unsigned long long)arg1 ;
-(id)_prefixStack;
-(id)fallbackMessagePrefixHandler;
-(void)pushMessagePrefixHandler:(/*^block*/id)arg1 ;
-(void)clearAllMessagePrefixes;
-(void)setFallbackMessagePrefixHandler:(id)arg1 ;
-(void)setStatements:(NSMutableArray *)arg1 ;
-(void)setPrefixStack:(NSMutableArray *)arg1 ;
@end
