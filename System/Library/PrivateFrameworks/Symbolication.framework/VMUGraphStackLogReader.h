/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/VMUStackLogReaderBase.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/VMUStackLogReader.h>

@class VMUProcessObjectGraph, VMUDebugTimer, VMURangeToStringMap, NSString, VMUVMRegionTracker, NSSet;

@interface VMUGraphStackLogReader : VMUStackLogReaderBase <NSSecureCoding, VMUStackLogReader> {

	CSTypeRef _symbolicator;
	VMUProcessObjectGraph* _graph;
	VMUDebugTimer* _debugTimer;
	unsigned _nodeNamespaceSize;
	unsigned* _nodeToStackIdTable;
	SCD_Struct_VM9* _backtraceUniquingTable;
	VMURangeToStringMap* _functionNameRanges;
	VMURangeToStringMap* _sourceInfoRanges;

}

@property (assign,nonatomic,__weak) VMUProcessObjectGraph * graph;              //@synthesize graph=_graph - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned task; 
@property (readonly) BOOL is64bit; 
@property (readonly) BOOL inspectingLiveProcess; 
@property (readonly) BOOL usesLiteMode; 
@property (readonly) VMUVMRegionTracker * regionTracker; 
@property (nonatomic,retain) NSSet * excludedFrames; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(void)_claimUnarchivingOfClass:(id)arg1 ;
-(VMUProcessObjectGraph *)graph;
-(void)setGraph:(VMUProcessObjectGraph *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)vmuVMRegionForAddress:(unsigned long long)arg1 ;
-(id)initWithTask:(unsigned)arg1 symbolicator:(CSTypeRef)arg2 graph:(id)arg3 debugTimer:(id)arg4 ;
-(long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long*)arg2 ;
-(long long)getFramesForNode:(unsigned)arg1 inLiteZone:(BOOL)arg2 stackFramesBuffer:(unsigned long long*)arg3 ;
-(BOOL)usesLiteMode;
-(id)binaryImagePathForPCaddress:(unsigned long long)arg1 ;
-(id)functionNameForPCaddress:(unsigned long long)arg1 ;
-(VMURange)functionRangeContainingPCaddress:(unsigned long long)arg1 ;
-(VMURange)binaryImageRangeForPCaddress:(unsigned long long)arg1 ;
-(id)sourceFileNameAndLineNumberForPCaddress:(unsigned long long)arg1 fullPath:(BOOL)arg2 ;
-(int)enumerateRecords:(/*^block*/id)arg1 ;
-(long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(BOOL)arg3 stackFramesBuffer:(unsigned long long*)arg4 ;
-(id)sourcePathForPCaddress:(unsigned long long)arg1 ;
-(id)sourceFileNameForPCaddress:(unsigned long long)arg1 ;
-(unsigned)sourceLineNumberForPCaddress:(unsigned long long)arg1 ;
-(BOOL)inspectingLiveProcess;
-(void)populateBacktraceUniquingTableWithStackLogs:(id)arg1 ;
-(void)symbolicateBacktraceUniquingTable;
-(void)_setFunctionName:(id)arg1 forPCAddressRange:(VMURange)arg2 ;
-(void)_setSourcePath:(id)arg1 lineNumber:(unsigned)arg2 forPCAddressRange:(VMURange)arg3 ;
-(void)_parseSourceInfoString:(id)arg1 intoComponents:(unsigned*)arg2 ;
-(VMURange)sourceLineRangeContainingPCaddress:(unsigned long long)arg1 ;
-(BOOL)is64bit;
@end

