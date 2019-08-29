//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JSXMLElement-Protocol.h"
#import "NSXMLParserDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, SMXMLDocument, SMXMLElementChildren, SMXMLElementValueFinder;

@interface SMXMLElement : NSObject <NSXMLParserDelegate, JSXMLElement>
{
    SMXMLDocument *_document;
    SMXMLElement *_parent;
    NSString *_name;
    NSString *_value;
    NSArray *_children;
    NSDictionary *_attributes;
    SMXMLElementChildren *_all;
    SMXMLElementValueFinder *_values;
}

@property(readonly, nonatomic) SMXMLElementValueFinder *values; // @synthesize values=_values;
@property(readonly, nonatomic) SMXMLElementChildren *all; // @synthesize all=_all;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak SMXMLElement *parent; // @synthesize parent=_parent;
@property(nonatomic) __weak SMXMLDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
@property(readonly, nonatomic) SMXMLElement *lastChild;
@property(readonly, nonatomic) SMXMLElement *firstChild;
- (id)valueWithPath:(id)arg1;
- (id)descendantWithPath:(id)arg1;
- (id)attributeNamed:(id)arg1;
- (id)childWithAttribute:(id)arg1 value:(id)arg2;
- (id)childrenNamed:(id)arg1;
- (id)childNamed:(id)arg1;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (id)encodedDescription;
- (id)fullDescription;
@property(readonly, copy) NSString *description;
- (id)encodeString:(id)arg1;
- (id)descriptionWithIndent:(id)arg1 truncatedValues:(_Bool)arg2 encoded:(_Bool)arg3;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

