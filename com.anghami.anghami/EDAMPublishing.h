//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface EDAMPublishing : NSObject <NSCoding>
{
    NSString *__uri;
    int __order;
    _Bool __ascending;
    NSString *__publicDescription;
    _Bool __uri_isset;
    _Bool __order_isset;
    _Bool __ascending_isset;
    _Bool __publicDescription_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetPublicDescription;
- (_Bool)publicDescriptionIsSet;
@property(retain, nonatomic, getter=publicDescription, setter=setPublicDescription:) NSString *publicDescription; // @dynamic publicDescription;
- (void)unsetAscending;
- (_Bool)ascendingIsSet;
@property(nonatomic, getter=ascending, setter=setAscending:) _Bool ascending; // @dynamic ascending;
- (void)unsetOrder;
- (_Bool)orderIsSet;
@property(nonatomic, getter=order, setter=setOrder:) int order; // @dynamic order;
- (void)unsetUri;
- (_Bool)uriIsSet;
@property(retain, nonatomic, getter=uri, setter=setUri:) NSString *uri; // @dynamic uri;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUri:(id)arg1 order:(int)arg2 ascending:(_Bool)arg3 publicDescription:(id)arg4;

@end

