/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFImage.h>
@class NSData, NSString, NSDictionary;


@protocol SFImage <NSObject>
@property (copy) NSData * imageData; 
@property (assign,nonatomic) BOOL isTemplate; 
@property (assign,nonatomic) BOOL shouldCropToCircle; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,copy) NSString * keyColor; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) int source; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(double)scale;
-(CGSize)size;
-(void)setSize:(CGSize)arg1;
-(NSString *)identifier;
-(void)setScale:(double)arg1;
-(void)setSource:(int)arg1;
-(void)setCornerRadius:(double)arg1;
-(void)setIdentifier:(id)arg1;
-(double)cornerRadius;
-(NSDictionary *)dictionaryRepresentation;
-(int)source;
-(BOOL)isTemplate;
-(void)setIsTemplate:(BOOL)arg1;
-(void)setImageData:(id)arg1;
-(NSData *)jsonData;
-(BOOL)shouldCropToCircle;
-(void)setShouldCropToCircle:(BOOL)arg1;
-(NSString *)keyColor;
-(void)setKeyColor:(id)arg1;
-(void)setContentType:(id)arg1;
-(NSData *)imageData;
-(NSString *)contentType;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSDictionary;

@interface SFImage : NSObject <SFImage, NSSecureCoding, NSCopying> {

	SCD_Struct_SF9 _has;
	BOOL _isTemplate;
	BOOL _shouldCropToCircle;
	int _source;
	NSData* _imageData;
	double _cornerRadius;
	double _scale;
	NSString* _contentType;
	NSString* _keyColor;
	NSString* _identifier;
	CGSize _size;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSData * imageData;                                                 //@synthesize imageData=_imageData - In the implementation block
@property (assign,nonatomic) BOOL isTemplate;                                        //@synthesize isTemplate=_isTemplate - In the implementation block
@property (assign,nonatomic) BOOL shouldCropToCircle;                                //@synthesize shouldCropToCircle=_shouldCropToCircle - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                    //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double scale;                                           //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) CGSize size;                                            //@synthesize size=_size - In the implementation block
@property (nonatomic,copy) NSString * contentType;                                   //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy) NSString * keyColor;                                      //@synthesize keyColor=_keyColor - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) int source;                                             //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
+(id)imageWithData:(id)arg1 ;
-(BOOL)hasSource;
-(BOOL)hasSize;
-(BOOL)hasScale;
-(double)scale;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setScale:(double)arg1 ;
-(void)setSource:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(double)cornerRadius;
-(NSDictionary *)dictionaryRepresentation;
-(int)source;
-(BOOL)isTemplate;
-(void)setIsTemplate:(BOOL)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(BOOL)shouldCropToCircle;
-(void)setShouldCropToCircle:(BOOL)arg1 ;
-(NSString *)keyColor;
-(void)setKeyColor:(NSString *)arg1 ;
-(BOOL)hasIsTemplate;
-(BOOL)hasShouldCropToCircle;
-(BOOL)hasCornerRadius;
-(void)loadImageDataWithCompletionAndErrorHandler:(/*^block*/id)arg1 ;
-(void)loadImageDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setContentType:(NSString *)arg1 ;
-(NSData *)imageData;
-(NSString *)contentType;
@end

