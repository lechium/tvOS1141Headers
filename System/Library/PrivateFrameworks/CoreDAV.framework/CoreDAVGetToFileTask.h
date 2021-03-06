/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVGetTask.h>

@class NSFileHandle;

@interface CoreDAVGetToFileTask : CoreDAVGetTask {

	NSFileHandle* _destinationFile;

}

@property (nonatomic,retain) NSFileHandle * destinationFile;              //@synthesize destinationFile=_destinationFile - In the implementation block
-(NSFileHandle *)destinationFile;
-(id)initWithURL:(id)arg1 destinationFile:(id)arg2 ;
-(void)setDestinationFile:(NSFileHandle *)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(BOOL)shouldLogResponseBody;
@end

