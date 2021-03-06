/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DDLocation : NSObject <NSSecureCoding> {

	NSString* _fileName;
	int _firstLine;
	int _firstColumn;
	int _lastLine;
	int _lastColumn;

}

@property (copy,readonly) NSString * fileName;              //@synthesize fileName=_fileName - In the implementation block
@property (readonly) int firstLine;                         //@synthesize firstLine=_firstLine - In the implementation block
@property (readonly) int firstColumn;                       //@synthesize firstColumn=_firstColumn - In the implementation block
@property (readonly) int lastLine;                          //@synthesize lastLine=_lastLine - In the implementation block
@property (readonly) int lastColumn;                        //@synthesize lastColumn=_lastColumn - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)fileName;
-(id)initWithFileName:(id)arg1 firstLine:(int)arg2 firstColumn:(int)arg3 lastLine:(int)arg4 lastColumn:(int)arg5 ;
-(id)initWithFileName:(id)arg1 position:(_DDExpressionPosition)arg2 ;
-(int)firstColumn;
-(int)lastLine;
-(int)lastColumn;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(_DDExpressionPosition)position;
-(int)firstLine;
@end

