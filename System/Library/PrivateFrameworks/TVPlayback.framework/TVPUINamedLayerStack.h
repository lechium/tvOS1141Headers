/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKit/UINamedLayerStack.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface TVPUINamedLayerStack : NSObject <UINamedLayerStack, NSCopying> {

	CGImageRef _flattenedImage;
	BOOL _flatImageContainsCornerRadius;
	NSString* _name;
	NSArray* _layers;
	double _scale;
	id _radiosityImage;
	CGSize _size;
	CGSize _radiosityImageScale;

}

@property (nonatomic,retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * layers;                                //@synthesize layers=_layers - In the implementation block
@property (assign,nonatomic) CGSize size;                                     //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double scale;                                    //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) CGImageRef flattenedImage; 
@property (nonatomic,retain) id radiosityImage;                               //@synthesize radiosityImage=_radiosityImage - In the implementation block
@property (assign,nonatomic) CGSize radiosityImageScale;                      //@synthesize radiosityImageScale=_radiosityImageScale - In the implementation block
@property (assign,nonatomic) BOOL flatImageContainsCornerRadius;              //@synthesize flatImageContainsCornerRadius=_flatImageContainsCornerRadius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)scale;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setScale:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)layers;
-(CGImageRef)flattenedImage;
-(void)setFlatImageContainsCornerRadius:(BOOL)arg1 ;
-(BOOL)flatImageContainsCornerRadius;
-(id)radiosityImage;
-(CGSize)radiosityImageScale;
-(void)setFlattenedImage:(CGImageRef)arg1 ;
-(void)setLayers:(NSArray *)arg1 ;
-(void)setRadiosityImage:(id)arg1 ;
-(void)setRadiosityImageScale:(CGSize)arg1 ;
@end

