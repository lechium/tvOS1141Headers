/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSAttributedString, NSString;

@interface _MKTokenAttributedString : NSObject {

	NSAttributedString* _attributedString;
	NSString* _string;

}

@property (nonatomic,copy) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,copy) NSString * string;                                  //@synthesize string=_string - In the implementation block
-(id)description;
-(BOOL)isEmpty;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedString;
@end
