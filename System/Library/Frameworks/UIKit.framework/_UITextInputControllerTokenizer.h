/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextInputStringTokenizer.h>

@class UITextInputController;

@interface _UITextInputControllerTokenizer : UITextInputStringTokenizer {

	UITextInputController* _textInput;
	CFStringTokenizerRef _tokenizer;
	int _tokenizerType;
	BOOL _tokenizerIsInvalid;

}
-(void)dealloc;
-(long long)_indexForTextPosition:(id)arg1 ;
-(BOOL)_isDownstreamForDirection:(long long)arg1 atPosition:(id)arg2 ;
-(NSRange)_getClosestTokenRangeForPosition:(id)arg1 granularity:(long long)arg2 downstream:(BOOL)arg3 ;
-(id)_positionFromPosition:(id)arg1 offset:(unsigned long long)arg2 affinity:(long long)arg3 ;
-(id)initWithTextInputController:(id)arg1 ;
-(void)invalidateTokenizer;
-(long long)_writingDirectionAtPosition:(id)arg1 ;
@end

