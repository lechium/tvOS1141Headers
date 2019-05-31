/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface UITextInputMode : NSObject <NSSecureCoding>

@property (nonatomic,readonly) NSString * primaryLanguage; 
+(id)currentInputMode;
+(BOOL)supportsSecureCoding;
+(id)activeInputModes;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)primaryLanguage;
@end

