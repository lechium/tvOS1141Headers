/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIImage;

@interface _UIDocumentPickerAuxiliaryOption : NSObject <NSSecureCoding> {

	BOOL _newlyAdded;
	NSString* _title;
	UIImage* _image;
	NSString* _identifier;
	/*^block*/id _handler;
	unsigned long long _order;

}

@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * image;                                  //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) id handler;                                         //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) unsigned long long order;                         //@synthesize order=_order - In the implementation block
@property (assign,getter=isNewlyAdded,nonatomic) BOOL newlyAdded;              //@synthesize newlyAdded=_newlyAdded - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(UIImage *)image;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)setOrder:(unsigned long long)arg1 ;
-(unsigned long long)order;
-(BOOL)isNewlyAdded;
-(void)setNewlyAdded:(BOOL)arg1 ;
@end
