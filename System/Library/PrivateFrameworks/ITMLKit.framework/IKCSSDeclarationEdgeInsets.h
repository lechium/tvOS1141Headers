/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKCSSDeclaration.h>

@interface IKCSSDeclarationEdgeInsets : IKCSSDeclaration {

	BOOL _insetsFound;
	UIEdgeInsets _insets;

}

@property (assign) UIEdgeInsets insets;              //@synthesize insets=_insets - In the implementation block
@property (assign) BOOL insetsFound;                 //@synthesize insetsFound=_insetsFound - In the implementation block
-(id)description;
-(id)stringValue;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(id)initWithParseDeclaration:(id)arg1 info:(id)arg2 ;
-(BOOL)insetsFound;
-(void)setInsetsFound:(BOOL)arg1 ;
@end

