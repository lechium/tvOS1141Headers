/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSItemProviderReading.h>
#import <libobjc.A.dylib/NSItemProviderWriting.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface NSString : NSObject <NSItemProviderReading, NSItemProviderWriting, NSCopying, NSMutableCopying, NSSecureCoding>

@property (copy,readonly) NSString * stringByRemovingPercentEncoding; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (readonly) unsigned long long length; 
+(id)_newZStringWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
+(id)_newZStringWithString:(id)arg1 ;
+(id)_newZStringWithUTF8String:(const char*)arg1 ;
+(unsigned long long)defaultCStringEncoding;
+(id)localizedNameOfStringEncoding:(unsigned long long)arg1 ;
+(id)stringWithBytes:(const void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 ;
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)stringWithCString:(const char*)arg1 ;
+(id)stringWithCString:(const char*)arg1 length:(unsigned long long)arg2 ;
+(id)localizedStringWithValidatedFormat:(id)arg1 validFormatSpecifiers:(id)arg2 error:(id*)arg3 ;
+(id)stringWithValidatedFormat:(id)arg1 validFormatSpecifiers:(id)arg2 error:(id*)arg3 ;
+(id)stringWithFormat:(id)arg1 locale:(id)arg2 ;
+(id)stringWithContentsOfFile:(id)arg1 ;
+(id)stringWithContentsOfURL:(id)arg1 ;
+(id)stringWithContentsOfURL:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)stringWithContentsOfURL:(id)arg1 usedEncoding:(unsigned long long*)arg2 error:(id*)arg3 ;
+(id)stringWithContentsOfFile:(id)arg1 usedEncoding:(unsigned long long*)arg2 error:(id*)arg3 ;
+(const unsigned long long*)availableStringEncodings;
+(id)writableTypeIdentifiersForItemProvider;
+(unsigned long long)stringEncodingForData:(id)arg1 encodingOptions:(id)arg2 convertedString:(id*)arg3 usedLossyConversion:(BOOL*)arg4 ;
+(id)_web_stringRepresentationForBytes:(long long)arg1 ;
+(id)stringWithUTF8String:(const char*)arg1 ;
+(id)stringWithFormat:(id)arg1 ;
+(void)initialize;
+(id)localizedStringWithFormat:(id)arg1 ;
+(id)stringWithCString:(const char*)arg1 encoding:(unsigned long long)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)string;
+(id)stringWithString:(id)arg1 ;
+(id)stringWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
+(id)readableTypeIdentifiersForItemProvider;
+(id)pathWithComponents:(id)arg1 ;
+(id)stringWithContentsOfFile:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_isCString;
-(id)_createSubstringWithRange:(NSRange)arg1 ;
-(id)_newSubstringWithRange:(NSRange)arg1 zone:(NSZone*)arg2 ;
-(id)__escapeString5991;
-(id)initWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 encoding:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)arg1 ;
-(unsigned long long)_cfTypeID;
-(unsigned long long)fastestEncoding;
-(unsigned long long)smallestEncoding;
-(BOOL)getBytes:(char*)arg1 maxLength:(unsigned long long)arg2 filledLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 allowLossyConversion:(BOOL)arg5 range:(NSRange)arg6 remainingRange:(NSRange*)arg7 ;
-(unsigned char)_encodingCantBeStoredInEightBitCFString;
-(unsigned)_smallestEncodingInCFStringEncoding;
-(unsigned)_fastestEncodingInCFStringEncoding;
-(BOOL)_getCString:(char*)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned)arg3 ;
-(id)decomposedStringWithCanonicalMapping;
-(id)precomposedStringWithCanonicalMapping;
-(id)decomposedStringWithCompatibilityMapping;
-(id)precomposedStringWithCompatibilityMapping;
-(id)propertyList;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(unsigned long long)cStringLength;
-(const char*)cString;
-(const char*)lossyCString;
-(BOOL)_allowsDirectEncoding;
-(id)quotedStringRepresentation;
-(id)initWithCString:(const char*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(char*)arg3 ;
-(id)initWithCStringNoCopy:(char*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(id)_stringByStandardizingPathUsingCache:(BOOL)arg1 ;
-(id)stringByAbbreviatingWithTildeInPath;
-(id)stringsByAppendingPaths:(id)arg1 ;
-(unsigned long long)completePathIntoString:(id*)arg1 caseSensitive:(BOOL)arg2 matchesIntoArray:(id*)arg3 filterTypes:(id)arg4 ;
-(id)stringByConvertingPathToURL;
-(id)stringByConvertingURLToPath;
-(id)formatConfiguration;
-(id)initWithCString:(const char*)arg1 ;
-(id)initWithValidatedFormat:(id)arg1 validFormatSpecifiers:(id)arg2 locale:(id)arg3 arguments:(char*)arg4 error:(id*)arg5 ;
-(id)initWithContentsOfURL:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 usedEncoding:(unsigned long long*)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfFile:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfFile:(id)arg1 usedEncoding:(unsigned long long*)arg2 error:(id*)arg3 ;
-(NSRange)_rangeOfRegularExpressionPattern:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 locale:(id)arg4 ;
-(NSRange)rangeOfString:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 locale:(id)arg4 ;
-(id)_stringByReplacingOccurrencesOfRegularExpressionPattern:(id)arg1 withTemplate:(id)arg2 options:(unsigned long long)arg3 range:(NSRange)arg4 ;
-(void)_getBlockStart:(unsigned long long*)arg1 end:(unsigned long long*)arg2 contentsEnd:(unsigned long long*)arg3 forRange:(NSRange)arg4 stopAtLineSeparators:(BOOL)arg5 ;
-(void)getLineStart:(unsigned long long*)arg1 end:(unsigned long long*)arg2 contentsEnd:(unsigned long long*)arg3 forRange:(NSRange)arg4 ;
-(void)getParagraphStart:(unsigned long long*)arg1 end:(unsigned long long*)arg2 contentsEnd:(unsigned long long*)arg3 forRange:(NSRange)arg4 ;
-(id)_initWithDataOfUnknownEncoding:(id)arg1 ;
-(id)_initWithBytesOfUnknownEncoding:(char*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 usedEncoding:(unsigned long long*)arg4 ;
-(id)_stringRepresentation;
-(BOOL)localizedHasPrefix:(id)arg1 ;
-(BOOL)localizedHasSuffix:(id)arg1 ;
-(BOOL)localizedCaseInsensitiveContainsString:(id)arg1 ;
-(NSRange)localizedStandardRangeOfString:(id)arg1 ;
-(id)stringByFoldingWithOptions:(unsigned long long)arg1 locale:(id)arg2 ;
-(id)stringByApplyingTransform:(id)arg1 reverse:(BOOL)arg2 ;
-(NSRange)lineRangeForRange:(NSRange)arg1 ;
-(void)enumerateLinesUsingBlock:(/*^block*/id)arg1 ;
-(id)displayableString;
-(BOOL)getExternalRepresentation:(id*)arg1 extendedAttributes:(id*)arg2 forWritingToURLOrPath:(id)arg3 usingEncoding:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)initWithData:(id)arg1 usedEncoding:(unsigned long long*)arg2 ;
-(id)propertyListFromStringsFileFormat;
-(id)_copyFormatStringWithConfiguration:(id)arg1 ;
-(void)getCString:(char*)arg1 maxLength:(unsigned long long)arg2 range:(NSRange)arg3 remainingRange:(NSRange*)arg4 ;
-(void)getCString:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(void)getCString:(char*)arg1 ;
-(unsigned long long)maximumLengthOfBytesUsingEncoding:(unsigned long long)arg1 ;
-(NSArray *)writableTypeIdentifiersForItemProvider;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(id)stringByAddingPercentEscapes;
-(id)standardizedURLPath;
-(id)stringByRemovingPercentEscapes;
-(id)stringByReplacingPercentEscapesUsingEncoding:(unsigned long long)arg1 ;
-(id)_web_HTTPStyleLanguageCode;
-(id)_web_HTTPStyleLanguageCodeWithoutRegion;
-(id)_web_filenameByFixingIllegalCharacters;
-(BOOL)_web_looksLikeIPAddress;
-(BOOL)_web_hasCountryCodeTLD;
-(long long)_web_countOfString:(id)arg1 ;
-(NSRange)_web_rangeOfURLResourceSpecifier_nowarn;
-(NSRange)_web_rangeOfURLScheme_nowarn;
-(BOOL)_web_hasCaseInsensitivePrefix:(id)arg1 ;
-(BOOL)_web_domainMatches:(id)arg1 ;
-(id)_web_domainFromHost;
-(id)_web_stringByExpandingTildeInPath;
-(id)_web_fixedCarbonPOSIXPath;
-(NSRange)_web_rangeOfURLUserPasswordHostPort;
-(NSRange)_web_rangeOfURLHost;
-(BOOL)_web_looksLikeAbsoluteURL;
-(BOOL)_web_isFileURL;
-(id)_web_URLFragment;
-(id)_web_stringByCollapsingNonPrintingCharacters;
-(unsigned)_web_extractFourCharCode;
-(id)_web_parseAsKeyValuePairHandleQuotes_nowarn:(BOOL)arg1 ;
-(id)_web_splitAtNonDateCommas_nowarn;
-(id)_web_parseAsKeyValuePair_nowarn;
-(id)_web_mimeTypeFromContentTypeHeader_nowarn;
-(id)_web_characterSetFromContentTypeHeader_nowarn;
-(id)_web_fileNameFromContentDispositionHeader_nowarn;
-(id)_web_stringByReplacingValidPercentEscapes_nowarn;
-(BOOL)_web_isJavaScriptURL;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(void)_flushRegularExpressionCaches;
-(NSRange)significantText;
-(id)linguisticTagsInRange:(NSRange)arg1 scheme:(id)arg2 options:(unsigned long long)arg3 orthography:(id)arg4 tokenRanges:(id*)arg5 ;
-(void)enumerateLinguisticTagsInRange:(NSRange)arg1 scheme:(id)arg2 options:(unsigned long long)arg3 orthography:(id)arg4 usingBlock:(/*^block*/id)arg5 ;
-(unsigned long long)__graphemeCount;
-(id)stringByExpandingTildeInPath;
-(id)stringByAddingPercentEscapesUsingEncoding:(unsigned long long)arg1 ;
-(unsigned long long)lengthOfBytesUsingEncoding:(unsigned long long)arg1 ;
-(id)init;
-(const char*)UTF8String;
-(double)doubleValue;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(BOOL)boolValue;
-(id)componentsSeparatedByString:(id)arg1 ;
-(BOOL)hasPrefix:(id)arg1 ;
-(id)substringFromIndex:(unsigned long long)arg1 ;
-(long long)integerValue;
-(id)stringByAppendingString:(id)arg1 ;
-(id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 ;
-(long long)compare:(id)arg1 ;
-(unsigned long long)length;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 ;
-(id)lastPathComponent;
-(int)intValue;
-(float)floatValue;
-(id)stringByAppendingPathComponent:(id)arg1 ;
-(id)variantFittingPresentationWidth:(long long)arg1 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(id)stringByResolvingSymlinksInPath;
-(id)pathComponents;
-(BOOL)isAbsolutePath;
-(id)substringWithRange:(NSRange)arg1 ;
-(id)stringByAppendingFormat:(id)arg1 ;
-(id)stringByStandardizingPath;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasSuffix:(id)arg1 ;
-(Class)classForCoder;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)pathExtension;
-(id)stringByDeletingPathExtension;
-(id)stringByAppendingPathExtension:(id)arg1 ;
-(NSRange)rangeOfString:(id)arg1 options:(unsigned long long)arg2 ;
-(NSRange)rangeOfString:(id)arg1 ;
-(id)initWithFormat:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(const char*)fileSystemRepresentation;
-(NSRange)rangeOfComposedCharacterSequencesForRange:(NSRange)arg1 ;
-(BOOL)containsString:(id)arg1 ;
-(id)substringToIndex:(unsigned long long)arg1 ;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(id)uppercaseStringWithLocale:(id)arg1 ;
-(NSRange)rangeOfCharacterFromSet:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)lowercaseString;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(NSString *)stringByRemovingPercentEncoding;
-(id)initWithData:(id)arg1 encoding:(unsigned long long)arg2 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 encoding:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)uppercaseString;
-(id)stringByDeletingLastPathComponent;
-(long long)caseInsensitiveCompare:(id)arg1 ;
-(BOOL)getFileSystemRepresentation:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)componentsSeparatedByCharactersInSet:(id)arg1 ;
-(NSRange)rangeOfCharacterFromSet:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(NSRange)rangeOfComposedCharacterSequenceAtIndex:(unsigned long long)arg1 ;
-(id)stringByTrimmingCharactersInSet:(id)arg1 ;
-(const unsigned short*)_fastCharacterContents;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(NSRange)rangeOfString:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(id)stringByAddingPercentEncodingWithAllowedCharacters:(id)arg1 ;
-(BOOL)_web_isCaseInsensitiveEqualToString:(id)arg1 ;
-(long long)longLongValue;
-(id)initWithUTF8String:(const char*)arg1 ;
-(BOOL)getCString:(char*)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned long long)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_web_stringByTrimmingWhitespace;
-(id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(NSRange)arg4 ;
-(id)commonPrefixWithString:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithFormat:(id)arg1 arguments:(char*)arg2 ;
-(void)getCharacters:(unsigned short*)arg1 ;
-(id)lowercaseStringWithLocale:(id)arg1 ;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 locale:(id)arg4 ;
-(id)initWithCString:(const char*)arg1 encoding:(unsigned long long)arg2 ;
-(id)dataUsingEncoding:(unsigned long long)arg1 ;
-(long long)localizedStandardCompare:(id)arg1 ;
-(const char*)cStringUsingEncoding:(unsigned long long)arg1 ;
-(NSRange)paragraphRangeForRange:(NSRange)arg1 ;
-(long long)localizedCompare:(id)arg1 ;
-(NSRange)rangeOfCharacterFromSet:(id)arg1 options:(unsigned long long)arg2 ;
-(id)capitalizedString;
-(id)stringByReplacingCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(id)initWithFormat:(id)arg1 locale:(id)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(BOOL)getBytes:(void*)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(NSRange)arg6 remainingRange:(NSRange*)arg7 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(BOOL)arg4 ;
-(id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(long long)localizedCaseInsensitiveCompare:(id)arg1 ;
-(void)enumerateSubstringsInRange:(NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)stringByPaddingToLength:(unsigned long long)arg1 withString:(id)arg2 startingAtIndex:(unsigned long long)arg3 ;
-(id)dataUsingEncoding:(unsigned long long)arg1 allowLossyConversion:(BOOL)arg2 ;
-(BOOL)isNSString__;
-(BOOL)localizedStandardContainsString:(id)arg1 ;
-(BOOL)canBeConvertedToEncoding:(unsigned long long)arg1 ;
-(SCD_Struct_NS45)decimalValue;
-(id)capitalizedStringWithLocale:(id)arg1 ;
-(id)localizedUppercaseString;
-(id)localizedLowercaseString;
-(id)localizedCapitalizedString;
@end

