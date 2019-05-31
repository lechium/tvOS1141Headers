/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKTextElement.h>

@class IKAppKeyboard;

@interface IKTextFieldElement : IKTextElement {

	IKAppKeyboard* _keyboard;

}

@property (nonatomic,readonly) IKAppKeyboard * keyboard;              //@synthesize keyboard=_keyboard - In the implementation block
+(id)supportedFeatures;
-(IKAppKeyboard *)keyboard;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
@end

