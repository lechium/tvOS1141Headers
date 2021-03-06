/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLPreheatItem.h>

@class PLImageTablePreheater;

@interface _PLImageTablePreheatItem : PLPreheatItem {

	PLImageTablePreheater* _preheater;
	unsigned long long _index;

}
-(void)dealloc;
-(id)initWithIndex:(unsigned long long)arg1 preheater:(id)arg2 format:(int)arg3 optimalSourcePixelSize:(CGSize)arg4 ;
-(void)startPreheatRequestWithCompletionHandler:(/*^block*/id)arg1 ;
@end

