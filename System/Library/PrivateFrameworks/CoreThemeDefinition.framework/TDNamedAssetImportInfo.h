/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSDate, NSSet, NSArray, NSValue;

@interface TDNamedAssetImportInfo : NSObject <NSCopying> {

	BOOL _preservesVectorRepresentation;
	BOOL _optOutOfThinning;
	BOOL _isFlippable;
	BOOL _cubeMap;
	NSString* _name;
	long long _nameIdentifier;
	NSURL* _fileURL;
	NSDate* _modificationDate;
	long long _idiom;
	long long _subtype;
	unsigned long long _scaleFactor;
	long long _renditionType;
	long long _resizingMode;
	long long _templateRenderingMode;
	long long _sizeClassHorizontal;
	long long _sizeClassVertical;
	long long _displayGamut;
	long long _layoutDirection;
	unsigned long long _memoryClass;
	unsigned long long _graphicsClass;
	long long _graphicsFeatureSetClass;
	long long _compressionType;
	double _lossyCompressionQuality;
	NSSet* _tags;
	NSString* _universalTypeIdentifier;
	NSArray* _containedImageNames;
	NSArray* _layerReferences;
	unsigned long long _textureWidth;
	unsigned long long _textureHeight;
	unsigned long long _textureDepth;
	unsigned long long _arrayIndex;
	long long _texturePixelFormat;
	long long _textureInterpretation;
	NSArray* _textureInfos;
	CGColorRef _cgColor;
	long long _colorSpaceID;
	NSArray* _colorComponents;
	NSValue* _iconSize;
	CGSize _resizableSliceSize;
	CGSize _physicalSizeInMeters;
	CGSize _canvasSize;
	SCD_Struct_TD13 _sliceInsets;
	CGRect _alignmentRect;

}

@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long nameIdentifier;                        //@synthesize nameIdentifier=_nameIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                                   //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSDate * modificationDate;                         //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,nonatomic) long long idiom;                                 //@synthesize idiom=_idiom - In the implementation block
@property (assign,nonatomic) long long subtype;                               //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) unsigned long long scaleFactor;                  //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign,nonatomic) SCD_Struct_TD13 sliceInsets;                     //@synthesize sliceInsets=_sliceInsets - In the implementation block
@property (assign,nonatomic) long long renditionType;                         //@synthesize renditionType=_renditionType - In the implementation block
@property (assign,nonatomic) long long resizingMode;                          //@synthesize resizingMode=_resizingMode - In the implementation block
@property (assign,nonatomic) CGSize resizableSliceSize;                       //@synthesize resizableSliceSize=_resizableSliceSize - In the implementation block
@property (assign,nonatomic) BOOL preservesVectorRepresentation;              //@synthesize preservesVectorRepresentation=_preservesVectorRepresentation - In the implementation block
@property (assign,nonatomic) BOOL isTemplate; 
@property (assign,nonatomic) long long templateRenderingMode;                 //@synthesize templateRenderingMode=_templateRenderingMode - In the implementation block
@property (assign,nonatomic) BOOL optOutOfThinning;                           //@synthesize optOutOfThinning=_optOutOfThinning - In the implementation block
@property (assign,nonatomic) CGRect alignmentRect;                            //@synthesize alignmentRect=_alignmentRect - In the implementation block
@property (assign,nonatomic) long long sizeClassHorizontal;                   //@synthesize sizeClassHorizontal=_sizeClassHorizontal - In the implementation block
@property (assign,nonatomic) long long sizeClassVertical;                     //@synthesize sizeClassVertical=_sizeClassVertical - In the implementation block
@property (assign,nonatomic) long long displayGamut;                          //@synthesize displayGamut=_displayGamut - In the implementation block
@property (assign,nonatomic) long long layoutDirection;                       //@synthesize layoutDirection=_layoutDirection - In the implementation block
@property (assign,nonatomic) BOOL isFlippable;                                //@synthesize isFlippable=_isFlippable - In the implementation block
@property (assign,nonatomic) unsigned long long memoryClass;                  //@synthesize memoryClass=_memoryClass - In the implementation block
@property (assign,nonatomic) unsigned long long graphicsClass;                //@synthesize graphicsClass=_graphicsClass - In the implementation block
@property (assign,nonatomic) long long graphicsFeatureSetClass;               //@synthesize graphicsFeatureSetClass=_graphicsFeatureSetClass - In the implementation block
@property (assign,nonatomic) long long compressionType;                       //@synthesize compressionType=_compressionType - In the implementation block
@property (assign,nonatomic) double lossyCompressionQuality;                  //@synthesize lossyCompressionQuality=_lossyCompressionQuality - In the implementation block
@property (nonatomic,copy) NSSet * tags;                                      //@synthesize tags=_tags - In the implementation block
@property (nonatomic,copy) NSString * universalTypeIdentifier;                //@synthesize universalTypeIdentifier=_universalTypeIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * containedImageNames;                     //@synthesize containedImageNames=_containedImageNames - In the implementation block
@property (assign,nonatomic) CGSize physicalSizeInMeters;                     //@synthesize physicalSizeInMeters=_physicalSizeInMeters - In the implementation block
@property (assign,nonatomic) CGSize canvasSize;                               //@synthesize canvasSize=_canvasSize - In the implementation block
@property (nonatomic,copy) NSArray * layerReferences;                         //@synthesize layerReferences=_layerReferences - In the implementation block
@property (assign,nonatomic) unsigned long long textureWidth;                 //@synthesize textureWidth=_textureWidth - In the implementation block
@property (assign,nonatomic) unsigned long long textureHeight;                //@synthesize textureHeight=_textureHeight - In the implementation block
@property (assign,nonatomic) unsigned long long textureDepth;                 //@synthesize textureDepth=_textureDepth - In the implementation block
@property (assign,nonatomic) BOOL cubeMap;                                    //@synthesize cubeMap=_cubeMap - In the implementation block
@property (assign,nonatomic) unsigned long long arrayIndex;                   //@synthesize arrayIndex=_arrayIndex - In the implementation block
@property (assign,nonatomic) long long texturePixelFormat;                    //@synthesize texturePixelFormat=_texturePixelFormat - In the implementation block
@property (assign,nonatomic) long long textureInterpretation;                 //@synthesize textureInterpretation=_textureInterpretation - In the implementation block
@property (nonatomic,copy) NSArray * textureInfos;                            //@synthesize textureInfos=_textureInfos - In the implementation block
@property (nonatomic,readonly) CGColorRef cgColor;                            //@synthesize cgColor=_cgColor - In the implementation block
@property (assign,nonatomic) long long colorSpaceID;                          //@synthesize colorSpaceID=_colorSpaceID - In the implementation block
@property (nonatomic,copy) NSArray * colorComponents;                         //@synthesize colorComponents=_colorComponents - In the implementation block
@property (nonatomic,copy) NSValue * iconSize;                                //@synthesize iconSize=_iconSize - In the implementation block
-(NSSet *)tags;
-(void)setFileURL:(NSURL *)arg1 ;
-(CGSize)physicalSizeInMeters;
-(NSArray *)layerReferences;
-(long long)compressionType;
-(void)setCompressionType:(long long)arg1 ;
-(BOOL)optOutOfThinning;
-(long long)textureInterpretation;
-(NSArray *)colorComponents;
-(long long)colorSpaceID;
-(void)setPhysicalSizeInMeters:(CGSize)arg1 ;
-(void)setColorSpaceID:(long long)arg1 ;
-(void)setOptOutOfThinning:(BOOL)arg1 ;
-(void)setIsFlippable:(BOOL)arg1 ;
-(void)setTextureInterpretation:(long long)arg1 ;
-(void)setColorComponents:(NSArray *)arg1 ;
-(long long)sizeClassHorizontal;
-(long long)sizeClassVertical;
-(long long)renditionType;
-(unsigned long long)memoryClass;
-(unsigned long long)graphicsClass;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(long long)subtype;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)resizingMode;
-(long long)templateRenderingMode;
-(long long)layoutDirection;
-(void)setSubtype:(long long)arg1 ;
-(long long)displayGamut;
-(long long)idiom;
-(CGColorRef)cgColor;
-(void)setIdiom:(long long)arg1 ;
-(unsigned long long)scaleFactor;
-(BOOL)isTemplate;
-(void)setScaleFactor:(unsigned long long)arg1 ;
-(void)setIsTemplate:(BOOL)arg1 ;
-(NSURL *)fileURL;
-(BOOL)isFlippable;
-(void)setDisplayGamut:(long long)arg1 ;
-(void)setSizeClassHorizontal:(long long)arg1 ;
-(void)setSizeClassVertical:(long long)arg1 ;
-(void)setLayoutDirection:(long long)arg1 ;
-(void)setTemplateRenderingMode:(long long)arg1 ;
-(void)setResizingMode:(long long)arg1 ;
-(void)setCGColor:(CGColorRef)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)setIconSize:(NSValue *)arg1 ;
-(NSValue *)iconSize;
-(NSDate *)modificationDate;
-(unsigned long long)arrayIndex;
-(void)setArrayIndex:(unsigned long long)arg1 ;
-(void)setLayerReferences:(NSArray *)arg1 ;
-(BOOL)cubeMap;
-(void)setGraphicsFeatureSetClass:(long long)arg1 ;
-(long long)graphicsFeatureSetClass;
-(void)setRenditionType:(long long)arg1 ;
-(long long)renditionSubtype;
-(long long)nameIdentifier;
-(void)setNameIdentifier:(long long)arg1 ;
-(void)setMemoryClass:(unsigned long long)arg1 ;
-(SCD_Struct_TD13)sliceInsets;
-(CGSize)resizableSliceSize;
-(CGRect)alignmentRect;
-(NSArray *)containedImageNames;
-(BOOL)preservesVectorRepresentation;
-(void)setPreservesVectorRepresentation:(BOOL)arg1 ;
-(NSString *)universalTypeIdentifier;
-(void)setUniversalTypeIdentifier:(NSString *)arg1 ;
-(void)setAlignmentRect:(CGRect)arg1 ;
-(CGSize)canvasSize;
-(void)setCanvasSize:(CGSize)arg1 ;
-(long long)texturePixelFormat;
-(void)setCubeMap:(BOOL)arg1 ;
-(unsigned long long)textureWidth;
-(unsigned long long)textureHeight;
-(NSArray *)textureInfos;
-(void)setTexturePixelFormat:(long long)arg1 ;
-(void)setSliceInsets:(SCD_Struct_TD13)arg1 ;
-(void)setResizableSliceSize:(CGSize)arg1 ;
-(double)lossyCompressionQuality;
-(void)setLossyCompressionQuality:(double)arg1 ;
-(void)setContainedImageNames:(NSArray *)arg1 ;
-(void)setTextureWidth:(unsigned long long)arg1 ;
-(void)setTextureHeight:(unsigned long long)arg1 ;
-(unsigned long long)textureDepth;
-(void)setTextureDepth:(unsigned long long)arg1 ;
-(void)setTextureInfos:(NSArray *)arg1 ;
-(void)setGraphicsClass:(unsigned long long)arg1 ;
-(void)setTags:(NSSet *)arg1 ;
@end

