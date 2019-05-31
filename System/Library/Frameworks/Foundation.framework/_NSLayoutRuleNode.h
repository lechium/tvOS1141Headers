/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSLayoutRule, _NSLayoutRuleNodeParent;
@interface _NSLayoutRuleNode : NSObject {

	id<NSLayoutRule> _representedRule;
	id<_NSLayoutRuleNodeParent> _parentNode;

}

@property (copy) id<NSLayoutRule> representedRule;                      //@synthesize representedRule=_representedRule - In the implementation block
@property (assign) id<_NSLayoutRuleNodeParent> parentNode;              //@synthesize parentNode=_parentNode - In the implementation block
-(id)initWithRule:(id)arg1 ;
-(id<NSLayoutRule>)representedRule;
-(void)setRepresentedRule:(id<NSLayoutRule>)arg1 ;
-(void)setParentNode:(id<_NSLayoutRuleNodeParent>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<_NSLayoutRuleNodeParent>)parentNode;
@end

