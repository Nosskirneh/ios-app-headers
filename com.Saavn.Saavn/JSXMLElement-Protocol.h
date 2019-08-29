//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSExport-Protocol.h"

@class NSArray, NSString, SMXMLElement;

@protocol JSXMLElement <JSExport>
@property(retain, nonatomic) NSString *value;
@property(copy, nonatomic) NSString *name;
- (NSString *)valueWithPath:(NSString *)arg1;
- (SMXMLElement *)descendantWithPath:(NSString *)arg1;
- (NSString *)attributeNamed:(NSString *)arg1;
- (SMXMLElement *)childWithAttribute:(NSString *)arg1 value:(NSString *)arg2;
- (NSArray *)childrenNamed:(NSString *)arg1;
- (SMXMLElement *)childNamed:(NSString *)arg1;
@end

