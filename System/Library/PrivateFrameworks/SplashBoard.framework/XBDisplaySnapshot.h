/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class FBSDisplayConfiguration, NSOrderedSet, UIImage, NSString;

@interface XBDisplaySnapshot : NSObject <BSInvalidatable> {

	FBSDisplayConfiguration* _displayConfiguration;
	NSOrderedSet* _layers;
	BOOL _opaque;
	CGSize _snapshotSize;
	double _scale;
	UIImage* _image;
	CGImageRef _imageRef;
	IOSurfaceRef _nonProtectedSurfaceRef;
	IOSurfaceRef _protectedSurfaceRef;
	BOOL _allowsProtectedContent;

}

@property (nonatomic,readonly) FBSDisplayConfiguration * displayConfiguration;              //@synthesize displayConfiguration=_displayConfiguration - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * layers;                                  //@synthesize layers=_layers - In the implementation block
@property (assign,getter=isOpaque,nonatomic) BOOL opaque;                                   //@synthesize opaque=_opaque - In the implementation block
@property (assign,nonatomic) double scale;                                                  //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) CGSize snapshotSize;                                           //@synthesize snapshotSize=_snapshotSize - In the implementation block
@property (assign,nonatomic) BOOL allowsProtectedContent;                                   //@synthesize allowsProtectedContent=_allowsProtectedContent - In the implementation block
@property (nonatomic,readonly) IOSurfaceRef IOSurface; 
@property (getter=isDataLoaded,nonatomic,readonly) BOOL dataLoaded; 
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (nonatomic,readonly) UIImage * UIImage; 
@property (nonatomic,readonly) IOSurfaceRef fallbackIOSurface; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)allowsProtectedContent;
-(BOOL)capture;
-(double)scale;
-(void)invalidate;
-(void)setOpaque:(BOOL)arg1 ;
-(void)dealloc;
-(FBSDisplayConfiguration *)displayConfiguration;
-(double)_scale;
-(void)setScale:(double)arg1 ;
-(CGImageRef)CGImage;
-(NSOrderedSet *)layers;
-(BOOL)isOpaque;
-(IOSurfaceRef)IOSurface;
-(UIImage *)UIImage;
-(id)initWithDisplayConfiguration:(id)arg1 layers:(id)arg2 ;
-(void)setAllowsProtectedContent:(BOOL)arg1 ;
-(void)setSnapshotSize:(CGSize)arg1 ;
-(BOOL)isDataLoaded;
-(IOSurfaceRef)fallbackIOSurface;
-(void)_synchronizedCaptureWithCompletion:(/*^block*/id)arg1 ;
-(CGSize)_scaledSnapshotSize;
-(id)initWithDisplayConfiguration:(id)arg1 layer:(id)arg2 ;
-(CGSize)snapshotSize;
@end

