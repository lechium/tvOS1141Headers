/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKColor, UIColor, NSArray;

@interface TVColor : NSObject <NSCopying> {

	IKColor* _ikColor;

}

@property (nonatomic,__weak,readonly) IKColor * ikColor;              //@synthesize ikColor=_ikColor - In the implementation block
@property (nonatomic,readonly) long long colorType; 
@property (nonatomic,readonly) UIColor * color; 
@property (nonatomic,readonly) NSArray * gradientColors; 
@property (nonatomic,readonly) NSArray * gradientPoints; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)color;
-(id)initWithColor:(id)arg1 ;
-(NSArray *)gradientColors;
-(long long)colorType;
-(NSArray *)gradientPoints;
-(IKColor *)ikColor;
@end

