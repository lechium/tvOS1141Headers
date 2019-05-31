/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSDiscardableContent.h>

@class NSString, NSArray;

@interface _UIActivityIndicatorViewArtworkItem : NSObject <NSDiscardableContent> {

	NSString* _artKey;
	NSArray* _images;
	struct {
		unsigned isDiscarded : 1;
		unsigned useCount;
	}  _flags;

}

@property (nonatomic,readonly) NSString * artKey;              //@synthesize artKey=_artKey - In the implementation block
@property (nonatomic,retain) NSArray * images;                 //@synthesize images=_images - In the implementation block
-(void)dealloc;
-(unsigned long long)hash;
-(NSArray *)images;
-(void)setImages:(NSArray *)arg1 ;
-(BOOL)beginContentAccess;
-(void)endContentAccess;
-(void)discardContentIfPossible;
-(BOOL)isContentDiscarded;
-(id)initWithArtKey:(id)arg1 ;
-(NSString *)artKey;
@end

