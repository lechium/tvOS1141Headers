/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKTextElement.h>

@class NSAttributedString;

@interface _TVIKTextElement : IKTextElement {

	NSAttributedString* _cachedAttributedString;

}

@property (nonatomic,copy) NSAttributedString * cachedAttributedString;              //@synthesize cachedAttributedString=_cachedAttributedString - In the implementation block
-(void)dealloc;
-(NSAttributedString *)cachedAttributedString;
-(void)setCachedAttributedString:(NSAttributedString *)arg1 ;
-(void)_stylesMarkedDirtyNotification:(id)arg1 ;
@end
