//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCharacterSet, NSScanner;

@interface MLHLSAttributeListParser : NSObject
{
    NSCharacterSet *_attributeNameCharacterSet;
    NSCharacterSet *_enumeratedStringCharacterSet;
    NSCharacterSet *_escapeAndQuoteCharacterSet;
    NSCharacterSet *_excludeCommaCharacterSet;
    NSScanner *_scanner;
}

- (void).cxx_destruct;
- (id)parseQuotedDateValue;
- (id)parseDecimalResolutionValue;
- (id)parseBooleanValue;
- (id)parseEnumeratedStringValue;
- (id)parseQuotedStringValue;
- (id)parseDecimalFloatingPointValue;
- (id)parseHexadecimalIntegerValue;
- (id)parseDecimalIntegerValue;
- (id)parseAttributeValueOfType:(long long)arg1;
- (id)parseUnknownAttributeValue;
- (struct NSDictionary *)parseWithSpecification:(struct NSDictionary *)arg1 unparsedAttributes:(struct NSMutableDictionary *)arg2;
- (struct NSDictionary *)parseAttributeListFromScanner:(id)arg1 withSpecification:(struct NSDictionary *)arg2 unparsedAttributes:(struct NSMutableDictionary *)arg3;
- (struct NSDictionary *)parseAttributeList:(id)arg1 withSpecification:(struct NSDictionary *)arg2 unparsedAttributes:(struct NSMutableDictionary *)arg3;
- (id)init;

@end

