/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCoreLite/FMFileContainer.h>

@class NSURL, NSString;

@interface FMInternalFileContainer : NSObject <FMFileContainer> {

	NSURL* _url;

}

@property (nonatomic,retain) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(id)internalContainerURL;
@end

