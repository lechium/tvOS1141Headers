/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBCacheToken.h>

@class NSString;

@interface UIKBCacheToken_Key : UIKBCacheToken {

	SCD_Union_UI97 _style;
	NSString* _cacheDisplayString;
	NSString* _cacheSecondaryDisplayString;
	NSString* _annotationString;
	int _displayTypeHint;
	int _displayRowHint;
	CGSize _size;
	int _state;
	int _clipCorners;
	BOOL _usesInsets;
	UIEdgeInsets _displayInsets;

}
+(id)tokenForKey:(id)arg1 style:(SCD_Struct_UI39)arg2 ;
+(id)tokenForKey:(id)arg1 style:(SCD_Struct_UI39)arg2 displayInsets:(UIEdgeInsets)arg3 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)dealloc;
-(id)string;
-(SCD_Struct_UI39)styling;
-(void)setStyling:(SCD_Struct_UI39)arg1 ;
-(BOOL)hasKey;
-(void)resetAnnotations;
-(void)annotateWithBool:(BOOL)arg1 ;
-(void)annotateWithInt:(int)arg1 ;
-(id)stringForRenderFlags:(long long)arg1 lightKeyboard:(BOOL)arg2 ;
-(int)rowHint;
-(void)setRowHint:(int)arg1 ;
-(int)displayHint;
-(void)setDisplayHint:(int)arg1 ;
-(id)_initWithKey:(id)arg1 style:(SCD_Struct_UI39)arg2 displayInsets:(UIEdgeInsets)arg3 ;
-(void)annotateWithString:(id)arg1 ;
-(id)_stringWithAdditionalValues:(/*^block*/id)arg1 ;
@end

