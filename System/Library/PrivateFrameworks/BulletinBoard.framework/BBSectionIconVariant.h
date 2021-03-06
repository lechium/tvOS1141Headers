/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface BBSectionIconVariant : NSObject <NSCopying, NSSecureCoding> {

	BOOL _precomposed;
	long long _format;
	NSData* _imageData;
	NSString* _imagePath;
	NSString* _imageName;
	NSString* _bundlePath;

}

@property (assign,nonatomic) long long format;                                   //@synthesize format=_format - In the implementation block
@property (nonatomic,copy) NSData * imageData;                                   //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,copy) NSString * imagePath;                                 //@synthesize imagePath=_imagePath - In the implementation block
@property (nonatomic,copy) NSString * imageName;                                 //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy) NSString * bundlePath;                                //@synthesize bundlePath=_bundlePath - In the implementation block
@property (assign,getter=isPrecomposed,nonatomic) BOOL precomposed;              //@synthesize precomposed=_precomposed - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_variantWithFormat:(long long)arg1 ;
+(id)variantWithFormat:(long long)arg1 imageData:(id)arg2 ;
+(id)variantWithFormat:(long long)arg1 imagePath:(id)arg2 ;
+(id)variantWithFormat:(long long)arg1 imageName:(id)arg2 inBundle:(id)arg3 ;
-(void)setFormat:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)bundlePath;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)format;
-(BOOL)isPrecomposed;
-(void)setPrecomposed:(BOOL)arg1 ;
-(void)setImageName:(NSString *)arg1 ;
-(NSString *)imageName;
-(void)setImageData:(NSData *)arg1 ;
-(NSString *)imagePath;
-(void)setImagePath:(NSString *)arg1 ;
-(NSData *)imageData;
-(void)setBundlePath:(NSString *)arg1 ;
@end

