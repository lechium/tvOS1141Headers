/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFImageIconDescriptor.h>

@class NSDictionary;

@interface HFMultistateImageIconDescriptor : HFImageIconDescriptor {

	NSDictionary* _imageIdentifiersKeyedByPrimaryState;

}

@property (nonatomic,retain) NSDictionary * imageIdentifiersKeyedByPrimaryState;              //@synthesize imageIdentifiersKeyedByPrimaryState=_imageIdentifiersKeyedByPrimaryState - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithImageIdentifiersKeyedByPrimaryState:(id)arg1 defaultImageIdentifier:(id)arg2 ;
-(NSDictionary *)imageIdentifiersKeyedByPrimaryState;
-(id)initWithImageIdentifiersKeyedByPrimaryState:(id)arg1 ;
-(id)imageIdentifierForPrimaryState:(long long)arg1 ;
-(void)setImageIdentifiersKeyedByPrimaryState:(NSDictionary *)arg1 ;
@end
