/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TITextInputTraits;

@interface TIAutoshiftController : NSObject {

	BOOL _enabled;
	TITextInputTraits* _textInputTraits;

}

@property (nonatomic,readonly) TITextInputTraits * textInputTraits;              //@synthesize textInputTraits=_textInputTraits - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                      //@synthesize enabled=_enabled - In the implementation block
-(unsigned long long)actionForDocumentState:(id)arg1 inputMangerState:(id)arg2 ;
-(BOOL)isSelectionAtSentenceAutoshiftBoundaryWithDocumentState:(id)arg1 inputManagerState:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(TITextInputTraits *)textInputTraits;
-(id)initWithTextInputTraits:(id)arg1 ;
@end

