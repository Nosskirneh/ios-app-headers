//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DIALTBXMLElement : NSObject
{
    struct _TBXMLElement *_element;
}

- (id)stringKeyValueMapForChildElements;
- (id)valueOfAttributeNamed:(id)arg1;
- (id)childElementNamed:(id)arg1 withAttributeNamed:(id)arg2 ofValue:(id)arg3;
- (id)childElementNamed:(id)arg1;
- (id)text;
- (id)initWithElement:(struct _TBXMLElement *)arg1;

@end

