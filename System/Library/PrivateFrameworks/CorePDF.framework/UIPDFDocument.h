/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObjectUIPDFDocumentDelegate;
#import <CorePDF/CorePDF-Structs.h>
@class NSString, UIPDFPageImageCache;

@interface UIPDFDocument : NSObject {

	CGPDFDocumentRef _cgDocument;
	unsigned long long _numberOfPages;
	double _cachedWidth;
	double _cachedHeight;
	NSString* _documentID;
	NSString* _documentName;
	UIPDFPageImageCache* _pageImageCache;
	unsigned long long _imageCacheCount;
	unsigned long long _imageCacheLookAhead;
	double _imageCacheResolution;
	os_unfair_lock_s _lock;
	os_unfair_lock_s _imageCacheLock;
	UIPDFPageImageCache* _thumbnailCache;
	os_unfair_lock_s _thumbnailLock;
	id<NSObject><UIPDFDocumentDelegate> _delegate;

}

@property (readonly) unsigned long long numberOfPages; 
@property (retain) UIPDFPageImageCache * pageImageCache; 
@property (retain) UIPDFPageImageCache * thumbnailCache; 
@property (readonly) CGPDFDocumentRef CGDocument;                                       //@synthesize cgDocument=_cgDocument - In the implementation block
@property (assign,nonatomic) id<NSObject><UIPDFDocumentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSString * documentID; 
+(id)documentNamed:(id)arg1 ;
-(id<NSObject><UIPDFDocumentDelegate>)delegate;
-(void)setDelegate:(id<NSObject><UIPDFDocumentDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(unsigned long long)numberOfPages;
-(double)maxWidth;
-(id)pageAtIndex:(unsigned long long)arg1 ;
-(id)initWithCGPDFDocument:(CGPDFDocumentRef)arg1 ;
-(UIPDFPageImageCache *)pageImageCache;
-(void)setImageCacheCount:(unsigned long long)arg1 lookAhead:(unsigned long long)arg2 withResolution:(double)arg3 ;
-(id)copyPageAtIndex:(unsigned long long)arg1 ;
-(CGPDFDocumentRef)copyCGPDFDocument;
-(id)initWithCGPDFDocumentLimitedMemory:(CGPDFDocumentRef)arg1 ;
-(void)purgePagesBefore:(unsigned long long)arg1 ;
-(BOOL)allowsCopying;
-(BOOL)copyDocumentTo:(id)arg1 ;
-(CGPDFDocumentRef)CGDocument;
-(void)updateWidthHeightCache;
-(double)sumWidth;
-(double)sumHeight;
-(void)setPageImageCache:(UIPDFPageImageCache *)arg1 ;
-(UIPDFPageImageCache *)thumbnailCache;
-(void)setThumbnailCache:(UIPDFPageImageCache *)arg1 ;
-(NSString *)documentID;
-(double)maxHeight;
@end

