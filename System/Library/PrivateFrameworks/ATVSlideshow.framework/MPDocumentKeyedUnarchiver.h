/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSKeyedUnarchiver.h>

@protocol MPAssetKeyDelegate;
@class MPDocument;

@interface MPDocumentKeyedUnarchiver : NSKeyedUnarchiver {

	id<MPAssetKeyDelegate> _assetKeyDelegate;
	MPDocument* _parentDocument;

}

@property (assign,nonatomic) id<MPAssetKeyDelegate> assetKeyDelegate;              //@synthesize assetKeyDelegate=_assetKeyDelegate - In the implementation block
@property (assign,nonatomic) MPDocument * parentDocument;                          //@synthesize parentDocument=_parentDocument - In the implementation block
-(MPDocument *)parentDocument;
-(id<MPAssetKeyDelegate>)assetKeyDelegate;
-(void)setAssetKeyDelegate:(id<MPAssetKeyDelegate>)arg1 ;
-(void)setParentDocument:(MPDocument *)arg1 ;
@end

