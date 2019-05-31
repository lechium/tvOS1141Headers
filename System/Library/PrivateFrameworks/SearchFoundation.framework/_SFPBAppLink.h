/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBAppLink.h>
@class NSString, _SFPBPunchout, _SFPBImage, NSData;


@protocol _SFPBAppLink <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) _SFPBPunchout * appPunchout; 
@property (nonatomic,readonly) BOOL hasAppPunchout; 
@property (nonatomic,retain) _SFPBImage * image; 
@property (nonatomic,readonly) BOOL hasImage; 
@property (assign,nonatomic) int imageAlign; 
@property (nonatomic,readonly) BOOL hasImageAlign; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setImage:(id)arg1;
-(void)setTitle:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSString *)title;
-(_SFPBImage *)image;
-(BOOL)hasTitle;
-(BOOL)hasImage;
-(NSData *)jsonData;
-(int)imageAlign;
-(void)setImageAlign:(int)arg1;
-(BOOL)hasImageAlign;
-(_SFPBPunchout *)appPunchout;
-(void)setAppPunchout:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(BOOL)hasAppPunchout;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _SFPBPunchout, _SFPBImage, NSData;

@interface _SFPBAppLink : PBCodable <_SFPBAppLink, NSSecureCoding> {

	SCD_Struct_SF2 _has;
	int _imageAlign;
	NSString* _title;
	_SFPBPunchout* _appPunchout;
	_SFPBImage* _image;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) _SFPBPunchout * appPunchout;              //@synthesize appPunchout=_appPunchout - In the implementation block
@property (nonatomic,readonly) BOOL hasAppPunchout; 
@property (nonatomic,retain) _SFPBImage * image;                       //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) BOOL hasImage; 
@property (assign,nonatomic) int imageAlign;                           //@synthesize imageAlign=_imageAlign - In the implementation block
@property (nonatomic,readonly) BOOL hasImageAlign; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setImage:(_SFPBImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(_SFPBImage *)image;
-(id)dictionaryRepresentation;
-(BOOL)hasTitle;
-(BOOL)hasImage;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(int)imageAlign;
-(void)setImageAlign:(int)arg1 ;
-(BOOL)hasImageAlign;
-(_SFPBPunchout *)appPunchout;
-(void)setAppPunchout:(_SFPBPunchout *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasAppPunchout;
@end

